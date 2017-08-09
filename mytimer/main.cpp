#include <QtGui/QApplication>
#include "mytimer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTimer w;
    w.show();
    
    return a.exec();
}
