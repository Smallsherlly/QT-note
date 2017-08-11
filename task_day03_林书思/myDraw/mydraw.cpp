#include "mydraw.h"
#include "ui_mydraw.h"
#include <QRect>
#include <QPainter>
#include <QImage>
#include <QTime>
#include <QTimer>
#include <QDir>
#include <QDebug>
#include <QStringList>

myDraw::myDraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myDraw)
{
    ui->setupUi(this);
    s = QString(":/image/小可怜.jpg");
    num = 0;
    dir = QDir("/home/ubuntu/flexible_pig/Learning/QT/myDraw/image");

    count = dir.count();
    for(int i=2; i<count; i++)
    {
        name.push_back(dir[i]);
    }
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(paintMY()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(paintMY2()));
    QObject::connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(randPi()));
    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(setClose()));
    QObject::connect(&t,SIGNAL(timeout()),this,SLOT(timeOut()));
    QObject::connect(&nt,SIGNAL(timeout()),this,SLOT(timeOut2()));
    QObject::connect(&ct,SIGNAL(timeout()),this,SLOT(timeCount()));


}

myDraw::~myDraw()
{
    delete ui;
}



void myDraw::randPi()
{
    t.start(250);
    ct.start(1000);
    nt.start(10000);
    timeC = 10;
}

void myDraw::timeOut()
{
    s = QString(":/image/");
    qsrand(QTime::currentTime().msec());
    num = qrand()%(count-2);
    s = QString("%1%2").arg(s).arg(name[num]);
    update();
    QString n_name = name[num];
    n_name.resize(n_name.indexOf("."));
    ui->label_2->setText(n_name);

}

void myDraw::timeOut2()
{
    t.stop();
    nt.stop();
    ct.stop();
    ui->label_3->setText(QString::number(10));

}

void myDraw::timeCount()
{
    timeC--;
    ui->label_3->setText(QString::number(timeC));
}

void myDraw::setClose()
{
    qApp->exit();
}

void myDraw::paintMY()
{
    s = QString(":/image/");
    if(num<count-3)
        num++;
    s = QString("%1%2").arg(s).arg(name[num]);
    update();
    QString n_name = name[num];
    n_name.resize(n_name.indexOf("."));
    ui->label_2->setText(n_name);
}

void myDraw::paintMY2()
{
    s = QString(":/image/");
    if(num>0)
        num--;
    s = QString("%1%2").arg(s).arg(name[num]);
    update();
    QString n_name = name[num];
    n_name.resize(n_name.indexOf("."));
    ui->label_2->setText(n_name);
}

void myDraw::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QImage image(s);
    painter.drawImage(ui->label->rect(),image);
   // s = QString(":/image/");
}

