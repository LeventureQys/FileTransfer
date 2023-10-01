#include "../Api/FileTransfer_Server.h"

FileTransfer_Server::FileTransfer_Server(QObject* parent)
	: QObject(parent)
{


}

FileTransfer_Server::~FileTransfer_Server()
{

}

quint16 FileTransfer_Server::ServerPort()
{
	return handler->ServerPort();
}

bool FileTransfer_Server::Open(const quint16 port)
{
	if (handler == nullptr) {
		//初始化不要放在构造函数中，因为构造函数中的内容在子线程中执行，会导致一些问题
		handler = new QtTCPServerHandler(nullptr);
		connect(handler, &QtTCPServerHandler::Sig_NewConn, this, &FileTransfer_Server::Sig_NewConn);
		connect(handler, &QtTCPServerHandler::Sig_NewDisConn, this, &FileTransfer_Server::Sig_NewDisConn);
		connect(handler, &QtTCPServerHandler::Sig_NewDisConnEx, this, &FileTransfer_Server::Sig_NewDisConnEx);
		connect(handler, &QtTCPServerHandler::Sig_RecvClnMsg, this, &FileTransfer_Server::RecvClnMsg);
		connect(&timer, &QTimer::timeout, this, &FileTransfer_Server::CheckSendFile, Qt::ConnectionType::QueuedConnection);
	}
	this->blnOpen = handler->Open(port);
	return  this->blnOpen;
}

void FileTransfer_Server::Close()
{
	if (this->handler != nullptr)
		handler->Close();

	this->blnOpen = false;
}

quint16 FileTransfer_Server::ConnectCount()
{
	return handler->ConnectCount();
}

void FileTransfer_Server::CloseAllConn()
{
	handler->CloseAllConn();
}

void FileTransfer_Server::AppendFile(const QString& filePath, const QString& clnAddr, quint16 clnPort)
{
	fileMission mission;
	mission.filePath = filePath;
	mission.clnArr = clnAddr;
	mission.port = clnPort;
	//添加一个队列
	this->que_missionList.append(mission);
	if (!timer.isActive()) {
		timer.start();
	}
}


void FileTransfer_Server::SendFile(const QString& filePath, const QString& clnAddr, quint16 clnPort)
{
	//获得文件字节
	QFile file(filePath);
	if (!file.exists()) {
		emit Sig_Warning(FT_Warning::File_Not_Exist, filePath);
		return;
	}
	QByteArray file_buffer;
	QFileInfo file_info(file);
	file.open(QIODevice::ReadOnly);
	//文件格式：NewFile|文件名|文件内容|FileEnd
	file_buffer = this->file_title + "|" + file_info.fileName().toLocal8Bit() + "|" + file.readAll() + "|" + this->file_end;

	//向指定用户发送文件
	this->handler->SendMsg(file_buffer, clnAddr, clnPort);
	this->Sig_Info(FT_Info::Send_file, file_info.fileName());

	//只管发，不管回执
}

void FileTransfer_Server::CheckSendFile()
{
	QMutexLocker locker(&mutex);
	if (this->que_missionList.isEmpty()) {
		timer.stop();
		return;
	}
	fileMission mission = this->que_missionList.dequeue();
	this->SendFile(mission.filePath, mission.clnArr, mission.port);
}

void FileTransfer_Server::RecvClnMsg(const QString& clnAddr, const quint16 clnPort, const QByteArray& bytes)
{
	//在此方法中获得接收端回执
	//目前不考虑回执
}
