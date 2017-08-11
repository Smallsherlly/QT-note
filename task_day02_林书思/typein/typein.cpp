#include "typein.h"
#include "ui_typein.h"
#include <QTime>

typein::typein(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::typein)
{
    ui->setupUi(this);
    t = new QTimer;
    nt = new QTimer;
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(showStr()));
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(timeD()));
    QObject::connect(nt,SIGNAL(timeout()),this,SLOT(restTime()));
    QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(result()));
}

typein::~typein()
{
    delete ui;
}

void typein::restTime()
{
    if(resttime!=0)
    {
        resttime--;
        ui->label_2->setText(QString::number(resttime));
    }else
        ui->label_2->setText(QString::number(0));
}

void typein::timeD()
{
    resttime = 60;
    t->start(6000);
    nt->start(1000);
}

void typein::result()
{
   double right = 0;
   t->stop();
   nt->stop();
   ns = ui->textEdit_2->toPlainText();
   ui->lineEdit->setText(QString::number(ns.length()/(60-resttime)));

   for(int i=0; i<num; i++)
   {
       if(s.at(i)==ns.at(i))
           right++;
   }
   ui->lineEdit_2->setText(QString::number(right/num));


}
void typein::showStr()
{
    s = QString();
    ui->lineEdit->setText(QString());
    ui->lineEdit_2->setText(QString());
    ui->textEdit_2->setText(QString());
    qsrand(QTime::currentTime().msec());
    num = qrand()%15;
    for(int i=0; i<num; i++)
    {
        s.append((QChar)(qrand()%94+33));
    }

    ui->textEdit->setText(s);
}
