#include <QtGui/QApplication>
#include "threaddialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    threadDialog w;
    w.show();
    
    return a.exec();
}
