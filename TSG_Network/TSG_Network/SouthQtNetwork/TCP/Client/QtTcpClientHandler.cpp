#include "../../Api/QtTcpClientHandler.h"
#include "../Base/QtTcpBaseHandler.h"
QtTcpClientHandler::QtTcpClientHandler(QObject* parent) : QObject(parent)
, m_pTcpSocket(new QTcpSocket(this))
{
	m_pTcpSocket->setSocketOption(QAbstractSocket::ReceiveBufferSizeSocketOption, 1024 * 1024 * 100);
	connect(m_pTcpSocket, &QTcpSocket::connected, this, &QtTcpClientHandler::ConnectedServer);
	connect(m_pTcpSocket, &QTcpSocket::disconnected, this, &QtTcpClientHandler::DisConnectedServer);
	connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &QtTcpClientHandler::RecvMsg, Qt::ConnectionType::QueuedConnection);
}

QtTcpClientHandler::~QtTcpClientHandler()
{
	Close();

	if (Q_NULLPTR != m_pTcpSocket)
	{
		delete m_pTcpSocket;
		m_pTcpSocket = Q_NULLPTR;
	}
}

void QtTcpClientHandler::Open(const QString& qsServerAddr, const quint16 serverPort)
{
	m_qsServerAddr = qsServerAddr;
	m_nServerPort = serverPort;
	m_pTcpSocket->connectToHost(QHostAddress(m_qsServerAddr), m_nServerPort);
}

void QtTcpClientHandler::Close()
{
	//m_pTcpSocket->disconnectFromHost();
	m_pTcpSocket->close();
}

void QtTcpClientHandler::SendMsg(const QByteArray& bytes)
{
	SendTcp(m_pTcpSocket, bytes);

	qInfo() << QStringLiteral("qtnetdll发送TCP：") + QString::fromLocal8Bit(bytes);
}

void QtTcpClientHandler::ConnectedServer()
{
	qInfo() << QStringLiteral("qtnetdll连接到服务器(%1, %2)").arg(m_qsServerAddr).arg(m_nServerPort);
	emit Sig_Connected(m_qsServerAddr, m_nServerPort);
}

void QtTcpClientHandler::DisConnectedServer()
{
	emit Sig_Disconnect(m_qsServerAddr, m_nServerPort);
}

void QtTcpClientHandler::RecvMsg()
{
	ReadTCPMsg(m_pTcpSocket, m_nRecvedSize, [&](const QByteArray& bytes) {
		qInfo() << QStringLiteral("qtnetdll收到TCP：") + QString::fromLocal8Bit(bytes);
		emit Sig_RecvTCP(bytes);
		});
}
