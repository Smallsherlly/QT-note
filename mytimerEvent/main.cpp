#include <QtGui/QApplication>
#include "mytimerevent.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTimerEvent w;
    w.show();
    
    return a.exec();
}
