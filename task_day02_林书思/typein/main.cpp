#include <QtGui/QApplication>
#include "typein.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    typein w;
    w.show();
    
    return a.exec();
}
