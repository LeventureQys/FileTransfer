/*!
 * \file QtTcpClientHandler.h
 *
 * \author Leventure
 * \date 四月 2022
 *
 * 用于支持QT下的TCP客户端端应用，使用此类前需要在项目属性中添加network模块支持
 */
#pragma once


#include <QObject>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QTcpSocket>

class  QtTcpClientHandler : public QObject
{

	Q_OBJECT

public:
	QtTcpClientHandler(QObject* parent);
	~QtTcpClientHandler();

	void Open(const QString& qsServerAddr, const quint16 serverPort);
	void Close();
	void SendMsg(const QByteArray& bytes);

Q_SIGNALS:
	void Sig_Connected(const QString& qsServerAddr, const quint16 nServerPort);
	void Sig_Disconnect(const QString& qsServerAddr, const quint16 nServerPort);
	void Sig_RecvTCP(const QByteArray& bytes);

private slots:
	void ConnectedServer();
	void DisConnectedServer();
	void RecvMsg();

private:
	qint64 m_nRecvedSize = 0;
	quint16 m_nServerPort = 0;
	QString m_qsServerAddr;
	QTcpSocket* m_pTcpSocket = Q_NULLPTR;
};
