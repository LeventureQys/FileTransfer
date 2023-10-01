#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TSG_Network.h"
#include "SouthQtNetwork/Api/TSG_Network_Server.h"
#include "SouthQtNetwork/Api/TSG_Network_Client.h"
#include "SouthQtNetwork/Api/params.h"

class TSG_Network : public QMainWindow
{
	Q_OBJECT

public:
	TSG_Network(QWidget* parent = nullptr);
	~TSG_Network();
public slots:
	void on_btn_startServer_clicked();
	void on_btn_closeServer_clicked();
	void on_btn_send_msg_server_clicked();
	void on_btn_send_file_server_clicked();
	void on_btn_sendfolder_server_clicked();
	void on_btn_getClients_server_clicked();

	void on_btn_connect_client_clicked();
	void on_btn_stop_client_clicked();
	void on_btn_sendMsg_client_clicked();
	void on_btn_setRecvFolder_client_clicked();
	void on_btn_isStart_client_clicked();

	void adds(const QString& strMessage);
	void addc(const QString& strMessage);
private:

	Ui::TSG_NetworkClass ui;
	TSG_Netwrok_Server* server = nullptr;
	TSG_Network_Client* client = nullptr;
};
