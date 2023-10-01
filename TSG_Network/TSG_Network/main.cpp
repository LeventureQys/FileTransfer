#include "TSG_Network.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TSG_Network w;
    w.show();
    return a.exec();
}
