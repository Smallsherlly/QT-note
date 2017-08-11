#include "calc.h"
#include "ui_calc.h"

calc::calc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calc)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);
    ui->pb_e->setEnabled(false);

    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(setClear()));

    QObject::connect(ui->pb0,SIGNAL(clicked()),this,SLOT(get0()));

    QObject::connect(ui->pb1,SIGNAL(clicked()),this,SLOT(get1()));

    QObject::connect(ui->pb2,SIGNAL(clicked()),this,SLOT(get2()));

    QObject::connect(ui->pb3,SIGNAL(clicked()),this,SLOT(get3()));

    QObject::connect(ui->pb4,SIGNAL(clicked()),this,SLOT(get4()));

    QObject::connect(ui->pb5,SIGNAL(clicked()),this,SLOT(get5()));

    QObject::connect(ui->pb6,SIGNAL(clicked()),this,SLOT(get6()));

    QObject::connect(ui->pb7,SIGNAL(clicked()),this,SLOT(get7()));

    QObject::connect(ui->pb8,SIGNAL(clicked()),this,SLOT(get8()));

    QObject::connect(ui->pb9,SIGNAL(clicked()),this,SLOT(get9()));

    QObject::connect(ui->pb_a,SIGNAL(clicked()),this,SLOT(set_a()));

    QObject::connect(ui->pb_s,SIGNAL(clicked()),this,SLOT(set_s()));

    QObject::connect(ui->pb_p,SIGNAL(clicked()),this,SLOT(set_p()));

    QObject::connect(ui->pb_d,SIGNAL(clicked()),this,SLOT(set_d()));

    QObject::connect(ui->pb_e,SIGNAL(clicked()),this,SLOT(result()));
}

calc::~calc()
{
    delete ui;
}

void calc::setClear()
{
    s = QString();
    ns = s;
    ui->lineEdit->setText(s);
    ui->pb_a->setEnabled(true);
    ui->pb_s->setEnabled(true);
    ui->pb_p->setEnabled(true);
    ui->pb_d->setEnabled(true);
    ui->pb_e->setEnabled(false);
}

void calc::set_a()
{
    flag = "+";
    ns = s;
    s = QString();
    ui->pb_s->setEnabled(false);
    ui->pb_p->setEnabled(false);
    ui->pb_d->setEnabled(false);
    ui->pb_e->setEnabled(true);
}

void calc::set_s()
{
    flag = "-";
    ns = s;
    s = QString();
    ui->pb_a->setEnabled(false);
    ui->pb_p->setEnabled(false);
    ui->pb_d->setEnabled(false);
    ui->pb_e->setEnabled(true);
}

void calc::set_p()
{
    flag = "*";
    ns = s;
    s = QString();
    ui->pb_a->setEnabled(false);
    ui->pb_s->setEnabled(false);
    ui->pb_d->setEnabled(false);
    ui->pb_e->setEnabled(true);
}

void calc::set_d()
{
    flag = "/";
    ns = s;
    s = QString();
    ui->pb_a->setEnabled(false);
    ui->pb_p->setEnabled(false);
    ui->pb_s->setEnabled(false);
    ui->pb_e->setEnabled(true);
}

void calc::result()
{
    if(flag == "+")
    {
        s = QString::number(ns.toDouble()+s.toDouble());
        ui->lineEdit->setText(s);
    }else if(flag == "-")
    {
        s = QString::number(ns.toDouble()-s.toDouble());
        ui->lineEdit->setText(s);
    }else if(flag == "*")
    {
        s = QString::number(ns.toDouble()*s.toDouble());
        ui->lineEdit->setText(s);
    }else if(flag == "/")
    {
        s = QString::number(ns.toDouble()/s.toDouble());
        ui->lineEdit->setText(s);
    }
    ns = QString();
    ui->pb_a->setEnabled(true);
    ui->pb_p->setEnabled(true);
    ui->pb_s->setEnabled(true);
    ui->pb_d->setEnabled(true);
    ui->pb_e->setEnabled(false);
}


void calc::get0()
{
    s.append((QString::number(0)));
    ui->lineEdit->setText(s);
}

void calc::get1()
{
    s.append((QString::number(1)));
    ui->lineEdit->setText(s);
}

void calc::get2()
{
    s.append((QString::number(2)));
    ui->lineEdit->setText(s);
}

void calc::get3()
{
    s.append((QString::number(3)));
    ui->lineEdit->setText(s);
}

void calc::get4()
{
    s.append((QString::number(4)));
    ui->lineEdit->setText(s);
}

void calc::get5()
{
    s.append((QString::number(5)));
    ui->lineEdit->setText(s);
}

void calc::get6()
{
    s.append((QString::number(6)));
    ui->lineEdit->setText(s);
}

void calc::get7()
{
    s.append((QString::number(7)));
    ui->lineEdit->setText(s);
}

void calc::get8()
{
    s.append((QString::number(8)));
    ui->lineEdit->setText(s);
}

void calc::get9()
{
    s.append((QString::number(9)));
    ui->lineEdit->setText(s);
}
