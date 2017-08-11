#include <QtGui/QApplication>
#include "mydraw.h"
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec* codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForCStrings(codec);
    myDraw w;
    w.show();
    
    return a.exec();
}
