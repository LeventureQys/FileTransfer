#pragma once

#include <QObject>
/// <summary>
/// 文件收发控制类，主要通过QtTcpServerHandler进行文件收发操作，文件组装放在内部进行
/// </summary>
#include "../Api/QtTCPServerHandler.h"
#include "qqueue.h"
#include "../Api/params.h"
#include "qfile.h"
#include "qfileinfo.h"
#include "qtimer.h"
#include "qthread.h"

#include "qmutex.h"
//一个发送任务，需要添加到队列中去等待一条条发送
//文件格式：NewFile|文件名|文件内容|FileEnd
struct fileMission {
	QString filePath = "";
	QString clnArr = "";
	qint32 port = 0;
};
class FileTransfer_Server : public QObject
{
	Q_OBJECT

public:
	FileTransfer_Server(QObject* parent = nullptr);
	~FileTransfer_Server();
public slots:
	quint16 ServerPort();

	bool Open(const quint16 port);
	void Close();
	quint16 ConnectCount();
	void CloseAllConn();
	void AppendFile(const QString& filePath, const QString& clnAddr = "", quint16 clnPort = 0);

signals:
	void Sig_NewConn(const QString& clnAddr, const quint16 clnPort, const quint16 port);
	void Sig_NewDisConn(const QString& clnAddr, const quint16 clnPort);
	void Sig_NewDisConnEx(const QString& clnAddr, const quint16 clnPort, QString errString);
	void Sig_Warning(FT_Warning warining, const QString& contain);
	void Sig_Info(FT_Info info, const QString& contain);
private:
	QtTCPServerHandler* handler = nullptr;	//控制文件收发的类

	QQueue<fileMission> que_missionList;	//文件发送队列
	QQueue<fileMission> que_checkList;	//发送结果检查队列
	const QByteArray file_title = QByteArray("NewFile");
	const QByteArray file_end = QByteArray("FileEnd");
	const QByteArray file_recv = QByteArray("FILERECIVED");	//此标识代表接收端接收完毕
	QTimer timer;
	bool blnOpen = false;
	QMutex mutex;
private slots:
	void RecvClnMsg(const QString& clnAddr, const quint16 clnPort, const QByteArray& bytes);

	void SendFile(const QString& filePath, const QString& clnAddr = "", quint16 clnPort = 0);
	void CheckSendFile();
};
