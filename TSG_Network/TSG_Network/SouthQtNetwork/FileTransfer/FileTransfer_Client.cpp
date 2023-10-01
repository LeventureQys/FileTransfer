#include "../Api/FileTransfer_Client.h"

FileTransfer_Client::FileTransfer_Client(QObject* parent)
	: QObject(parent)
{}

FileTransfer_Client::~FileTransfer_Client()
{}

void FileTransfer_Client::Open(const QString& qsServerAddr, const quint16 serverPort)
{
	if (client == nullptr) {
		this->client = new QtTcpClientHandler(nullptr);
		connect(client, &QtTcpClientHandler::Sig_Connected, this, &FileTransfer_Client::Sig_Connected);
		connect(client, &QtTcpClientHandler::Sig_Disconnect, this, &FileTransfer_Client::Sig_Disconnect);
		connect(client, &QtTcpClientHandler::Sig_RecvTCP, this, &FileTransfer_Client::RecvFile);
	}
	return client->Open(qsServerAddr, serverPort);
}

void FileTransfer_Client::Close()
{
	if (this->client != nullptr)
		this->client->Close();
}

bool FileTransfer_Client::SetSavePath(const QString& qsSavePath)
{
	QDir dir(qsSavePath);
	//检查路径是否存在，如果不存在则创建
	if (!dir.exists()) {
		bool ret = dir.mkpath(qsSavePath);
		if (ret) this->file_SavePath = qsSavePath;

		return ret;
	}


	this->file_SavePath = qsSavePath;
	return true;
}

void FileTransfer_Client::SetSaveSubtitle(const QString& qsSaveSubtitle)
{
	this->file_subtitle = qsSaveSubtitle;
}



void FileTransfer_Client::WriteFilesToLocal()
{
	//从list 中读文件来写
	while (this->list_fileinfos.size() > 0) {
		FileTransfer_File_Info item = this->list_fileinfos.dequeue();
		QFile file(item.file_absolut_path);

		//检查是否存在file，不存在则创建
		item.file_contain = item.file_contain + "\0";
		file.open(QIODevice::WriteOnly | QIODevice::Truncate);
		file.write(item.file_contain);
		if (file.isOpen()) {
			file.write(item.file_contain, item.file_contain.length());
		}
		emit this->Sig_RecvNewFile(item.fileName);
	}
}

bool FileTransfer_Client::CheckRecvFolder()
{
	//检查存储文件夹是否存在
	QDir dir(this->file_SavePath);
	if (!dir.exists()) {
		bool ret = dir.mkpath(this->file_SavePath);
		if (!ret) {
			emit this->Sig_Warning(FT_Warning::Folder_Create_Error, this->file_SavePath);
			return false;
		}
	}
	return true;
}

void FileTransfer_Client::RecvFile(const QByteArray& bytes) {
	QMutexLocker locker(&mutex);
	////文件格式：NewFile|文件名|文件内容|FileEnd
////这里开始处理文件
////首先获取文件名

	QByteArray startMarker = this->file_title + "|";
	QByteArray endMarker = "|" + this->file_end;

	int startIndex = bytes.indexOf(startMarker);
	int endIndex = bytes.indexOf(endMarker);
	QByteArray fileName;
	QByteArray contain;
	if (startIndex != -1 && endIndex != -1 && endIndex > startIndex) {
		// 找到开始和结束标记，提取文件名和文件内容
		startIndex += startMarker.length(); // 跳过开始标记
		int contentStartIndex = startIndex;

		int fileNameEndIndex = bytes.indexOf('|', contentStartIndex);
		if (fileNameEndIndex != -1 && fileNameEndIndex < endIndex) {
			// 找到文件名
			fileName = bytes.mid(startIndex, fileNameEndIndex - startIndex);

			// 提取文件内容
			contentStartIndex = fileNameEndIndex + 1;
			int contentLength = endIndex - contentStartIndex;
			contain = bytes.mid(contentStartIndex, contentLength);
		}
	}
	else {
		emit this->Sig_Warning(FT_Warning::File_Agreement_Error, bytes);
		return;
	}


	QString file_absolut_path = this->file_SavePath + "/" + this->file_subtitle + QString::fromUtf8(fileName);

	//将其写到列表中去
	FileTransfer_File_Info item;
	item.file_absolut_path = file_absolut_path;
	item.file_contain = contain;
	item.fileName = fileName;
	this->list_fileinfos.append(item);
	QtConcurrent::run(this, &FileTransfer_Client::WriteFilesToLocal);
	//QFile file(file_absolut_path);
	////检查是否存在file，不存在则创建
	//contain = contain + "\0";
	//file.open(QIODevice::WriteOnly | QIODevice::Truncate);
	//file.write(contain);

	//if (file.isOpen()) {
	//	file.write(contain, contain.length());
	//}

	//emit this->Sig_RecvNewFile(fileName);
}
