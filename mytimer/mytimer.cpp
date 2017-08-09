#include "mytimer.h"
#include "ui_mytimer.h"
#include <QTime>
#include <QTimer>

myTimer::myTimer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myTimer)
{
    ui->setupUi(this);
    t = new QTimer();
    t->start(1000);
    nt = new QTimer();
    nt->start(3000);
    ui->lineEdit->setText(QTime::currentTime().toString("hh:mm:ss"));
    QObject::connect(t,SIGNAL(timeout()),this,SLOT(setTime()));
    QObject::connect(nt,SIGNAL(timeout()),this,SLOT(getNum()));

}

myTimer::~myTimer()
{
    delete ui;
}

void myTimer::setTime()
{
    ui->lineEdit->setText(QTime::currentTime().toString("hh:mm:ss"));
}

void myTimer::getNum()
{
    qsrand(QTime::currentTime().msec());
    ui->lineEdit_2->setText(QString::number(qrand()%1000));
}
