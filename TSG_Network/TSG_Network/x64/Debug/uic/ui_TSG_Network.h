/********************************************************************************
** Form generated from reading UI file 'TSG_Network.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSG_NETWORK_H
#define UI_TSG_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TSG_NetworkClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *txt_server;
    QPushButton *btn_startServer;
    QPushButton *btn_closeServer;
    QLineEdit *line_ip_msg_server;
    QPushButton *btn_send_msg_server;
    QLineEdit *line_contain_msg_server;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *line_ip_file_server;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *line_filepath_file_server;
    QPushButton *btn_send_file_server;
    QPushButton *btn_isStart_server;
    QPushButton *btn_getClients_server;
    QPushButton *btn_sendfolder_server;
    QWidget *tab_2;
    QPushButton *btn_connect_client;
    QLineEdit *line_ip_client;
    QLineEdit *line_port_client;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *line_sendmsg_client;
    QPushButton *btn_sendMsg_client;
    QLineEdit *line_setfolder_client;
    QPushButton *btn_setRecvFolder_client;
    QPushButton *btn_isStart_client;
    QPushButton *btn_stop_client;
    QPlainTextEdit *txt_client;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TSG_NetworkClass)
    {
        if (TSG_NetworkClass->objectName().isEmpty())
            TSG_NetworkClass->setObjectName(QString::fromUtf8("TSG_NetworkClass"));
        TSG_NetworkClass->resize(679, 450);
        centralWidget = new QWidget(TSG_NetworkClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        txt_server = new QPlainTextEdit(tab);
        txt_server->setObjectName(QString::fromUtf8("txt_server"));
        txt_server->setGeometry(QRect(410, 10, 241, 461));
        btn_startServer = new QPushButton(tab);
        btn_startServer->setObjectName(QString::fromUtf8("btn_startServer"));
        btn_startServer->setGeometry(QRect(10, 40, 91, 23));
        btn_closeServer = new QPushButton(tab);
        btn_closeServer->setObjectName(QString::fromUtf8("btn_closeServer"));
        btn_closeServer->setGeometry(QRect(120, 40, 91, 23));
        line_ip_msg_server = new QLineEdit(tab);
        line_ip_msg_server->setObjectName(QString::fromUtf8("line_ip_msg_server"));
        line_ip_msg_server->setGeometry(QRect(10, 100, 101, 20));
        btn_send_msg_server = new QPushButton(tab);
        btn_send_msg_server->setObjectName(QString::fromUtf8("btn_send_msg_server"));
        btn_send_msg_server->setGeometry(QRect(320, 100, 75, 23));
        line_contain_msg_server = new QLineEdit(tab);
        line_contain_msg_server->setObjectName(QString::fromUtf8("line_contain_msg_server"));
        line_contain_msg_server->setGeometry(QRect(120, 100, 191, 20));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 101, 16));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 80, 161, 16));
        label_2->setAlignment(Qt::AlignCenter);
        line_ip_file_server = new QLineEdit(tab);
        line_ip_file_server->setObjectName(QString::fromUtf8("line_ip_file_server"));
        line_ip_file_server->setGeometry(QRect(10, 170, 101, 20));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 101, 16));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 150, 54, 12));
        line_filepath_file_server = new QLineEdit(tab);
        line_filepath_file_server->setObjectName(QString::fromUtf8("line_filepath_file_server"));
        line_filepath_file_server->setGeometry(QRect(120, 170, 191, 20));
        btn_send_file_server = new QPushButton(tab);
        btn_send_file_server->setObjectName(QString::fromUtf8("btn_send_file_server"));
        btn_send_file_server->setGeometry(QRect(320, 170, 75, 23));
        btn_isStart_server = new QPushButton(tab);
        btn_isStart_server->setObjectName(QString::fromUtf8("btn_isStart_server"));
        btn_isStart_server->setGeometry(QRect(0, 220, 131, 23));
        btn_getClients_server = new QPushButton(tab);
        btn_getClients_server->setObjectName(QString::fromUtf8("btn_getClients_server"));
        btn_getClients_server->setGeometry(QRect(0, 250, 131, 23));
        btn_sendfolder_server = new QPushButton(tab);
        btn_sendfolder_server->setObjectName(QString::fromUtf8("btn_sendfolder_server"));
        btn_sendfolder_server->setGeometry(QRect(320, 200, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        btn_connect_client = new QPushButton(tab_2);
        btn_connect_client->setObjectName(QString::fromUtf8("btn_connect_client"));
        btn_connect_client->setGeometry(QRect(220, 40, 101, 23));
        line_ip_client = new QLineEdit(tab_2);
        line_ip_client->setObjectName(QString::fromUtf8("line_ip_client"));
        line_ip_client->setGeometry(QRect(10, 40, 113, 20));
        line_port_client = new QLineEdit(tab_2);
        line_port_client->setObjectName(QString::fromUtf8("line_port_client"));
        line_port_client->setGeometry(QRect(140, 40, 71, 20));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 111, 16));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 20, 54, 12));
        label_7->setAlignment(Qt::AlignCenter);
        line_sendmsg_client = new QLineEdit(tab_2);
        line_sendmsg_client->setObjectName(QString::fromUtf8("line_sendmsg_client"));
        line_sendmsg_client->setGeometry(QRect(10, 80, 201, 20));
        btn_sendMsg_client = new QPushButton(tab_2);
        btn_sendMsg_client->setObjectName(QString::fromUtf8("btn_sendMsg_client"));
        btn_sendMsg_client->setGeometry(QRect(220, 80, 101, 23));
        line_setfolder_client = new QLineEdit(tab_2);
        line_setfolder_client->setObjectName(QString::fromUtf8("line_setfolder_client"));
        line_setfolder_client->setGeometry(QRect(10, 110, 201, 20));
        btn_setRecvFolder_client = new QPushButton(tab_2);
        btn_setRecvFolder_client->setObjectName(QString::fromUtf8("btn_setRecvFolder_client"));
        btn_setRecvFolder_client->setGeometry(QRect(220, 110, 101, 23));
        btn_isStart_client = new QPushButton(tab_2);
        btn_isStart_client->setObjectName(QString::fromUtf8("btn_isStart_client"));
        btn_isStart_client->setGeometry(QRect(10, 150, 75, 23));
        btn_stop_client = new QPushButton(tab_2);
        btn_stop_client->setObjectName(QString::fromUtf8("btn_stop_client"));
        btn_stop_client->setGeometry(QRect(340, 40, 75, 23));
        txt_client = new QPlainTextEdit(tab_2);
        txt_client->setObjectName(QString::fromUtf8("txt_client"));
        txt_client->setGeometry(QRect(430, 30, 191, 291));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        TSG_NetworkClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TSG_NetworkClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 679, 23));
        TSG_NetworkClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TSG_NetworkClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TSG_NetworkClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TSG_NetworkClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TSG_NetworkClass->setStatusBar(statusBar);

        retranslateUi(TSG_NetworkClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TSG_NetworkClass);
    } // setupUi

    void retranslateUi(QMainWindow *TSG_NetworkClass)
    {
        TSG_NetworkClass->setWindowTitle(QCoreApplication::translate("TSG_NetworkClass", "TSG_Network", nullptr));
        btn_startServer->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\274\200\345\220\257\346\234\215\345\212\241\345\231\250", nullptr));
        btn_closeServer->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        btn_send_msg_server->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("TSG_NetworkClass", "ip\357\274\214\344\270\272\347\251\272\345\210\231\345\205\250\345\217\221", nullptr));
        label_2->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\206\205\345\256\271", nullptr));
        label_3->setText(QCoreApplication::translate("TSG_NetworkClass", "ip\357\274\214\344\270\272\347\251\272\345\210\231\345\205\250\345\217\221", nullptr));
        label_4->setText(QCoreApplication::translate("TSG_NetworkClass", "\346\226\207\344\273\266\350\267\257\345\276\204", nullptr));
        line_filepath_file_server->setText(QCoreApplication::translate("TSG_NetworkClass", "J:\\\346\225\260\346\215\256\346\265\213\350\257\225\345\214\272\\\345\270\203\345\277\203-xxwjpg\\1\\2", nullptr));
        btn_send_file_server->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\217\221\346\226\207\344\273\266", nullptr));
        btn_isStart_server->setText(QCoreApplication::translate("TSG_NetworkClass", "\346\243\200\346\237\245\346\234\215\345\212\241\345\231\250\346\230\257\345\220\246\345\220\257\345\212\250", nullptr));
        btn_getClients_server->setText(QCoreApplication::translate("TSG_NetworkClass", "\350\216\267\345\276\227\345\256\242\346\210\267\345\210\227\350\241\250", nullptr));
        btn_sendfolder_server->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\217\221\346\226\207\344\273\266\345\244\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("TSG_NetworkClass", "Server", nullptr));
        btn_connect_client->setText(QCoreApplication::translate("TSG_NetworkClass", "\350\277\236\346\216\245\345\210\260\346\234\215\345\212\241\345\231\250", nullptr));
        line_ip_client->setText(QCoreApplication::translate("TSG_NetworkClass", "172.16.30.231", nullptr));
        label_6->setText(QCoreApplication::translate("TSG_NetworkClass", "\350\277\236\346\216\245ip", nullptr));
        label_7->setText(QCoreApplication::translate("TSG_NetworkClass", "\347\253\257\345\217\243", nullptr));
        btn_sendMsg_client->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        line_setfolder_client->setText(QCoreApplication::translate("TSG_NetworkClass", "J:\\DownloadTester", nullptr));
        btn_setRecvFolder_client->setText(QCoreApplication::translate("TSG_NetworkClass", "\350\256\276\347\275\256\346\216\245\346\224\266\346\226\207\344\273\266\345\244\271", nullptr));
        btn_isStart_client->setText(QCoreApplication::translate("TSG_NetworkClass", "\346\230\257\345\220\246\345\220\257\345\212\250", nullptr));
        btn_stop_client->setText(QCoreApplication::translate("TSG_NetworkClass", "\345\201\234\346\255\242\345\220\257\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("TSG_NetworkClass", "Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TSG_NetworkClass: public Ui_TSG_NetworkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSG_NETWORK_H
