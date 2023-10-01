#pragma once

#include <QObject>
#include "../Api/QtTcpClientHandler.h"
#include "../Api/params.h"
#include "qdir.h"
#include "qfile.h"
#include "QThread.h"
#include "qmutex.h"
#include "qqueue.h"
#include "QtConcurrent"
struct FileTransfer_File_Info
{
	QString fileName = "";
	QString file_absolut_path = QString("NewFile");
	QByteArray file_contain = QByteArray();
};

class FileTransfer_Client : public QObject
{
	Q_OBJECT

public:
	FileTransfer_Client(QObject* parent);
	~FileTransfer_Client();
public slots:
	void Open(const QString& qsServerAddr, const quint16 serverPort);
	void Close();
	//设置文件保存路径
	bool SetSavePath(const QString& qsSavePath);

	//设置文件保存前缀
	void SetSaveSubtitle(const QString& qsSaveSubtitle);


Q_SIGNALS:
	//这几条是转发的
	void Sig_Connected(const QString& qsServerAddr, const quint16 nServerPort);
	void Sig_Disconnect(const QString& qsServerAddr, const quint16 nServerPort);
	void Sig_RecvNewFile(const QString& filePath);

	void Sig_Warning(FT_Warning warining, const QString& contain);
	void Sig_Info(FT_Info info, const QString& contain);
private:
	QMutex mutex; // 用于保护文件操作的互斥锁
	QtTcpClientHandler* client = Q_NULLPTR;
	QString file_SavePath = "D://Download";	//文件保存路径
	const QByteArray file_title = QByteArray("NewFile");
	const QByteArray file_end = QByteArray("FileEnd");
	const QByteArray file_recv = QByteArray("FILERECIVED");	//此标识代表接收端接收完毕
	QString file_subtitle = "";		//文件保存前缀
	QQueue<FileTransfer_File_Info> list_fileinfos;
	void WriteFilesToLocal();
private slots:
	void RecvFile(const QByteArray& bytes);
	bool CheckRecvFolder();
};
