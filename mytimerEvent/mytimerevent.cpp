#include "mytimerevent.h"
#include "ui_mytimerevent.h"
#include <QTime>

myTimerEvent::myTimerEvent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myTimerEvent)
{
    ui->setupUi(this);
   // t1 = new QTimer(this);
   //t2 = new QTimer(this);
    id1 = startTimer(1000);//返回一个定时任务ID
    id2 = startTimer(5000);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    ui->lineEdit->setText(QTime::currentTime().toString("hh:mm:ss"));
    ui->lineEdit_2->setText(QString::number(qrand()%1000));
    //QObject::connect(t1,SIGNAL(timeout()),this,timerEvent(QTimerEvent *));

    //QObject::connect(t2,SIGNAL(timeout()),this,timerEvent(QTimerEvent *));
}

myTimerEvent::~myTimerEvent()
{
    delete ui;
}

void myTimerEvent::timerEvent(QTimerEvent * e)
{
    if(e->timerId() == id1)
        ui->lineEdit->setText(QTime::currentTime().toString("hh:mm:ss"));
    else if(e->timerId() == id2)
        ui->lineEdit_2->setText(QString::number(qrand()%1000));
}
