#ifndef MYDRAW_H
#define MYDRAW_H

#include <QMainWindow>
//#include <QPainter>
#include <QTimer>
#include <QDir>

namespace Ui {
class myDraw;
}

class myDraw : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit myDraw(QWidget *parent = 0);
    ~myDraw();
    
private:
    Ui::myDraw *ui;
    QString s;
    QTimer t;
    QTimer nt;
    QTimer ct;
    int num;
    int flag;
    int count;
    int timeC;
    QDir dir;
    QList<QString> name;
public:
    void paintEvent(QPaintEvent *);
   // void timerEvent(QTimerEvent *);
public slots:
    void paintMY();
    void paintMY2();
    void setClose();
    void randPi();
    void timeOut();
    void timeOut2();
    void timeCount();
};

#endif // MYDRAW_H
