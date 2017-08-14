#include <QtGui/QApplication>
#include "udpsocket.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    udpSocket w;
    w.show();
    
    return a.exec();
}
