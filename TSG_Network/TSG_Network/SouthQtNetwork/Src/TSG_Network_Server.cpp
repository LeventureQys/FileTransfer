#include "../Api/TSG_Network_Server.h"

TSG_Netwrok_Server::TSG_Netwrok_Server(QObject* parent)
	: QObject(parent)
{

}

TSG_Netwrok_Server::~TSG_Netwrok_Server()
{
	this->file_thread.quit();
	this->file_thread.wait();
}

quint16 TSG_Netwrok_Server::ServerPort()
{
	if (this->Msg_handler != nullptr)
		return this->Msg_handler->ServerPort();
	return false;
}

bool TSG_Netwrok_Server::Open(const quint16 port)
{
	if (this->File_handler == nullptr) {
		File_handler = new FileTransfer_Server(nullptr);

		connect(File_handler, &FileTransfer_Server::Sig_NewConn, this, &TSG_Netwrok_Server::Sig_NewConn);
		connect(File_handler, &FileTransfer_Server::Sig_NewDisConn, this, &TSG_Netwrok_Server::Sig_NewDisConn);
		connect(File_handler, &FileTransfer_Server::Sig_NewDisConnEx, this, &TSG_Netwrok_Server::Sig_NewDisConnEx);
		connect(File_handler, &FileTransfer_Server::Sig_Warning, this, &TSG_Netwrok_Server::Sig_Warning);
		connect(File_handler, &FileTransfer_Server::Sig_Info, this, &TSG_Netwrok_Server::Sig_Info);
		qRegisterMetaType<FT_Info>("FT_Info");
		qRegisterMetaType<FT_Warning>("FT_Warning");
		this->File_handler->moveToThread(&file_thread);
		file_thread.start();
	}
	if (this->Msg_handler == nullptr) {
		this->Msg_handler = new QtTCPServerHandler(this);
		connect(Msg_handler, &QtTCPServerHandler::Sig_NewConn, this, &TSG_Netwrok_Server::Sig_NewConn);
		connect(Msg_handler, &QtTCPServerHandler::Sig_NewDisConn, this, &TSG_Netwrok_Server::Sig_NewDisConn);
		connect(Msg_handler, &QtTCPServerHandler::Sig_NewDisConnEx, this, &TSG_Netwrok_Server::Sig_NewDisConnEx);
		connect(Msg_handler, &QtTCPServerHandler::Sig_RecvClnMsg, this, &TSG_Netwrok_Server::Sig_RecvClnMsg);
	}
	bool ret = true;
	if (!this->Msg_handler->Open(port)) ret = false;
	if (!this->File_handler->Open(port + 1)) ret = false;

	if (ret)	this->blnStart = true;

	return ret;
}

void TSG_Netwrok_Server::Close()
{
	if (this->File_handler != nullptr) {
		this->File_handler->Close();
	}
	if (this->Msg_handler != nullptr) {
		this->Msg_handler->Close();
	}

	this->blnStart = false;
}

quint16 TSG_Netwrok_Server::ConnectCount()
{
	if (this->Msg_handler != nullptr)
		return this->Msg_handler->ConnectCount();
	return 0;
}

quint16 TSG_Netwrok_Server::FileConnectCount()
{
	if (this->File_handler != nullptr)
		return this->File_handler->ConnectCount();
	return 0;
}

void TSG_Netwrok_Server::CloseAllConn()
{
	if (this->File_handler != nullptr)
		this->File_handler->CloseAllConn();

	if (this->Msg_handler != nullptr)
		this->Msg_handler->CloseAllConn();

}

void TSG_Netwrok_Server::SendMsg(const QByteArray& bytes, QString clnAddr, quint16 clnPort)
{
	if (this->Msg_handler != nullptr)
		this->Msg_handler->SendMsg(bytes, clnAddr, clnPort);
}

void TSG_Netwrok_Server::SendFile(const QString& filePath, const QString& clnAddr, quint16 clnPort)
{
	if (this->File_handler != nullptr)
		this->File_handler->AppendFile(filePath, clnAddr, clnPort);
}

bool TSG_Netwrok_Server::IsStart()
{
	return this->blnStart;
}
