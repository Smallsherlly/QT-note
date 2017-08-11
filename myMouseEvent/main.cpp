#include <QtGui/QApplication>
#include <QTextCodec>
#include "mymouseevent.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec* codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForCStrings(codec);
    myMouseEvent w;
    w.show();
    
    return a.exec();
}
