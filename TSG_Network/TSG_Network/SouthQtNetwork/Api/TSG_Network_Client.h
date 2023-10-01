#pragma once

#include <QObject>
#include "params.h"
#include "FileTransfer_Client.h"
#include "QtTcpClientHandler.h"
#include "qthread.h"
#include "southqtnetwork_global.h"
class SOUTHQTNETWORK_EXPORT TSG_Network_Client : public QObject
{
	Q_OBJECT

public:
	TSG_Network_Client(QObject* parent);
	~TSG_Network_Client();
public:

	void Open(const QString& qsServerAddr, const quint16 serverPort);
	void Close();
	void SendMsg(const QByteArray& bytes);


	//设置文件保存路径
	bool SetSavePath(const QString& qsSavePath);
	//设置文件保存前缀
	void SetSaveSubtitle(const QString& qsSaveSubtitle);
	bool IsStart();
Q_SIGNALS:
	void Sig_Connected(const QString& qsServerAddr, const quint16 nServerPort);
	void Sig_Disconnect(const QString& qsServerAddr, const quint16 nServerPort);
	void Sig_RecvTCP(const QByteArray& bytes);
	void Sig_RecvNewFile(const QString& filePath);

	void Sig_Warning(FT_Warning warining, const QString& contain);
	void Sig_Info(FT_Info info, const QString& contain);

private:
	FileTransfer_Client* file_client = Q_NULLPTR;
	QtTcpClientHandler* msg_client = Q_NULLPTR;
	QThread file_thread;
	bool blnStart = false;
};
