#include "TSG_Network.h"

TSG_Network::TSG_Network(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

TSG_Network::~TSG_Network()
{

}
void TSG_Network::on_btn_startServer_clicked()
{
	if (this->server == nullptr)
		this->server = new TSG_Netwrok_Server(this);
	connect(server, &TSG_Netwrok_Server::Sig_NewConn, this, [=](const QString& clnAddr, const quint16 clnPort, const quint16 port) {
		this->adds(QString("##Server:New Client Connected: %1:%2").arg(clnAddr).arg(clnPort));
		});
	connect(server, &TSG_Netwrok_Server::Sig_NewDisConn, this, [=](const QString& clnAddr, const quint16 clnPort) {
		this->adds(QString("##Server:Client Disconnected: %1:%2").arg(clnAddr).arg(clnPort));
		});
	connect(server, &TSG_Netwrok_Server::Sig_NewDisConnEx, this, [=](const QString& clnAddr, const quint16 clnPort, QString errString) {
		this->adds(QString("##Server:Client Disconnected: %1:%2, Error: %3").arg(clnAddr).arg(clnPort).arg(errString));
		});
	connect(server, &TSG_Netwrok_Server::Sig_RecvClnMsg, this, [=](const QString& clnAddr, const quint16 clnPort, const QByteArray& bytes) {
		this->adds(QString("##Server:Recv Msg From %1:%2, Msg: %3").arg(clnAddr).arg(clnPort).arg(QString(bytes)));
		});
	connect(server, &TSG_Netwrok_Server::Sig_Warning, this, [=](FT_Warning warining, const QString& contain) {
		this->adds(QString("##Server:Warning: %1, %2").arg(static_cast<qint32>(warining)).arg(contain));
		});
	connect(server, &TSG_Netwrok_Server::Sig_Info, this, [=](FT_Info info, const QString& contain) {
		this->adds(QString("##Server:Info: %1, %2").arg(static_cast<qint32>(info)).arg(contain));
		});
	this->server->Open(8000);
}

void TSG_Network::on_btn_closeServer_clicked()
{
	if (this->server != nullptr)
	{
		this->server->Close();
	}
}

void TSG_Network::on_btn_send_msg_server_clicked()
{
	QString strMessage = this->ui.line_contain_msg_server->text();
	if (this->server != nullptr) {
		this->server->SendMsg(strMessage.toUtf8(), "", 0);
	}
}

void TSG_Network::on_btn_send_file_server_clicked()
{
	QString filepath = this->ui.line_filepath_file_server->text();

	if (this->server != nullptr) {
		this->server->SendFile(filepath, "", 0);
	}
}

void TSG_Network::on_btn_sendfolder_server_clicked()
{
	QString strDir = this->ui.line_filepath_file_server->text();
	QDir dir(strDir);

	QList<QString> filters;
	filters << "*.*";

	QList<QFileInfo> fileNames = dir.entryInfoList(filters, QDir::Files | QDir::NoDotAndDotDot);
	for each (auto item in fileNames)
	{
		qDebug() << item.absoluteFilePath();
		this->server->SendFile(item.absoluteFilePath(), "");
	}


}

void TSG_Network::on_btn_getClients_server_clicked()
{
	if (this->server != nullptr) {
		this->adds(QString("##Server:Client Count: %1").arg(this->server->ConnectCount()));
	}
}

void TSG_Network::on_btn_connect_client_clicked()
{
	QString ip = this->ui.line_ip_client->text();
	qint16 port = this->ui.line_port_client->text().toShort();
	if (this->client == nullptr) {
		this->client = new TSG_Network_Client(this);
		connect(client, &TSG_Network_Client::Sig_Connected, this, [=](const QString& qsServerAddr, const quint16 nServerPort) {
			this->addc(QString("##Client:Connected to Server: %1:%2").arg(qsServerAddr).arg(nServerPort));
			});
		connect(client, &TSG_Network_Client::Sig_Disconnect, this, [=](const QString& qsServerAddr, const quint16 nServerPort) {
			this->addc(QString("##Client:DisConnected to Server: %1:%2").arg(qsServerAddr).arg(nServerPort));
			});
		connect(client, &TSG_Network_Client::Sig_RecvTCP, this, [=](const QByteArray& bytes) {
			this->addc(QString("##Client::RecvTCP:%1").arg(QString(bytes)));
			});
		connect(client, &TSG_Network_Client::Sig_RecvNewFile, this, [=](const QString& filePath) {
			this->addc(QString("##Client::RecvNewFile:%1").arg(filePath));
			});
		connect(client, &TSG_Network_Client::Sig_Warning, this, [=](FT_Warning warining, const QString& contain) {
			this->addc(QString("##Client::Warning:code:%1 Message:%2").arg(static_cast<qint32>(warining)).arg(contain));
			});
		connect(client, &TSG_Network_Client::Sig_Info, this, [=](FT_Info warining, const QString& contain) {
			this->addc(QString("##Client::Info:code:%1 Message:%2").arg(static_cast<qint32>(warining)).arg(contain));
			});

	}
	this->client->Open(ip, port);
}

void TSG_Network::on_btn_stop_client_clicked()
{
	if (this->client != nullptr)
		this->client->Close();
}

void TSG_Network::on_btn_sendMsg_client_clicked()
{
	QString strMessage = this->ui.line_sendmsg_client->text();

	if (this->client != nullptr)
		this->client->SendMsg(strMessage.toUtf8());
}

void TSG_Network::on_btn_setRecvFolder_client_clicked()
{
	QString folderName = this->ui.line_setfolder_client->text();
	if (this->client != nullptr)
		qDebug() << this->client->SetSavePath(folderName);
}

void TSG_Network::on_btn_isStart_client_clicked()
{
	if (this->client != nullptr)
		this->addc(QString("当前服务器连接状态为:%1").arg(this->client->IsStart()));
}

void TSG_Network::adds(const QString& strMessage)
{
	this->ui.txt_server->appendPlainText(strMessage);
}

void TSG_Network::addc(const QString& strMessage)
{
	this->ui.txt_client->appendPlainText(strMessage);
}
