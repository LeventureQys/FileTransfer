#pragma once

#include <QObject>
#include "QtTCPServerHandler.h"
#include "FileTransfer_Server.h"
#include "qthread.h"
#include "southqtnetwork_global.h"
class SOUTHQTNETWORK_EXPORT TSG_Netwrok_Server : public QObject
{
	Q_OBJECT

public:
	TSG_Netwrok_Server(QObject* parent);
	~TSG_Netwrok_Server();

	quint16 ServerPort();
	bool Open(const quint16 port);
	void Close();

	quint16 ConnectCount();
	quint16 FileConnectCount();

	void CloseAllConn();

	// 发送消息
	// bytes：消息内容
	// clnAddr：目标地址，如果传空，则对所有连接的客户端发送
	// clnPort：目标使用的端口，如果传0，则向所有符合地址值的客户端进行发送
	void SendMsg(const QByteArray& bytes, QString clnAddr = "", quint16 clnPort = 0);
	void SendFile(const QString& filePath, const QString& clnAddr = "", quint16 clnPort = 0);

	bool IsStart();
signals:
	void Sig_NewConn(const QString& clnAddr, const quint16 clnPort, const quint16 port);
	void Sig_NewDisConn(const QString& clnAddr, const quint16 clnPort);
	void Sig_NewDisConnEx(const QString& clnAddr, const quint16 clnPort, QString errString);
	void Sig_Warning(FT_Warning warining, const QString& contain);
	void Sig_Info(FT_Info info, const QString& contain);

	void Sig_RecvClnMsg(const QString& clnAddr, const quint16 clnPort, const QByteArray& bytes);
private:

	QtTCPServerHandler* Msg_handler = nullptr;
	FileTransfer_Server* File_handler = nullptr;
	bool blnStart = false;
	QThread file_thread;	//文件收发线程
};
