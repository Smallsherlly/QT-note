#include <QtGui/QApplication>
#include "mykeyboardevent.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myKeyBoardEvent w;
    w.show();
    
    return a.exec();
}
