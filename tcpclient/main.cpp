#include <QtGui/QApplication>
#include "tcpclient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tcpclient w;
    w.show();
    
    return a.exec();
}
