#include "../Api/TSG_Network_Client.h"

TSG_Network_Client::TSG_Network_Client(QObject* parent)
	: QObject(parent)
{

}

TSG_Network_Client::~TSG_Network_Client()
{
	this->file_thread.quit();
	this->file_thread.wait();
}

void TSG_Network_Client::Open(const QString& qsServerAddr, const quint16 serverPort)
{
	if (this->msg_client == nullptr)
	{
		this->msg_client = new QtTcpClientHandler(this);
		//连接成功后，转发信号
		connect(this->msg_client, &QtTcpClientHandler::Sig_Connected, this, [=](const QString& qsServerAddr, const quint16 nServerPort) {
			this->blnStart = true;
			emit this->Sig_Connected(qsServerAddr, nServerPort);
			});

		connect(this->msg_client, &QtTcpClientHandler::Sig_Disconnect, this, [=](const QString& qsServerAddr, const quint16 nServerPort) {
			this->blnStart = false;
			emit this->Sig_Disconnect(qsServerAddr, nServerPort);
			});
		connect(this->msg_client, &QtTcpClientHandler::Sig_RecvTCP, this, &TSG_Network_Client::Sig_RecvTCP);
	}

	if (this->file_client == nullptr) {
		this->file_client = new FileTransfer_Client(nullptr);
		qRegisterMetaType<FT_Info>("FT_Info");
		qRegisterMetaType<FT_Warning>("FT_Warning");
		this->file_client->moveToThread(&this->file_thread);
		this->file_thread.start();
		connect(this->file_client, &FileTransfer_Client::Sig_Connected, this, &TSG_Network_Client::Sig_Connected);
		connect(this->file_client, &FileTransfer_Client::Sig_Disconnect, this, &TSG_Network_Client::Sig_Disconnect);
		connect(this->file_client, &FileTransfer_Client::Sig_RecvNewFile, this, &TSG_Network_Client::Sig_RecvNewFile);
		connect(this->file_client, &FileTransfer_Client::Sig_Warning, this, &TSG_Network_Client::Sig_Warning);
		connect(this->file_client, &FileTransfer_Client::Sig_Info, this, &TSG_Network_Client::Sig_Info);
	}
	this->msg_client->Open(qsServerAddr, serverPort);
	this->file_client->Open(qsServerAddr, serverPort + 1);

}

void TSG_Network_Client::Close()
{
	if (this->file_client != nullptr) {
		this->file_client->Close();
	}
	if (this->msg_client != nullptr) {
		this->msg_client->Close();
	}
}

void TSG_Network_Client::SendMsg(const QByteArray& bytes)
{
	if (this->msg_client != nullptr)
		this->msg_client->SendMsg(bytes);
}

bool TSG_Network_Client::SetSavePath(const QString& qsSavePath)
{
	if (this->file_client != nullptr)
		return this->file_client->SetSavePath(qsSavePath);
	return false;
}

void TSG_Network_Client::SetSaveSubtitle(const QString& qsSaveSubtitle)
{
	if (this->file_client != nullptr)
		this->file_client->SetSaveSubtitle(qsSaveSubtitle);
}

bool TSG_Network_Client::IsStart()
{
	return this->blnStart;
}
