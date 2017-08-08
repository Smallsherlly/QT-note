#include "emitsignal.h"

QString name = QString("779854387");
QString psw = QString("1314");
EmitSignal::EmitSignal()
{
	this->resize(350,350);

	btn[0] = new QPushButton(QObject::tr("="),this);
	btn[0]->resize(50,50);
	btn[0]->move(50,50);
	btn[1] = new QPushButton(QObject::tr("+"),this);
	btn[1]->resize(50,50);
	btn[1]->move(100,50);
	btn[2] = new QPushButton(QObject::tr("-"),this);
	btn[2]->resize(50,50);
	btn[2]->move(150,50);
	btn[3] = new QPushButton(QObject::tr("*"),this);
	btn[3]->resize(50,50);
	btn[3]->move(50,100);
	btn[4] = new QPushButton(QObject::tr("/"),this);
	btn[4]->resize(50,50);
	btn[4]->move(100,100);
	

	line1 = new QLineEdit(this);
	line2 = new QLineEdit(this);
	line3 = new QLineEdit(this);
	line1->resize(100,50);
	line1->move(200,50);
	line2->resize(100,50);
	line2->move(200,100);
	line3->resize(100,50);
	line3->move(200,250);


	QObject::connect(btn[1],SIGNAL(clicked()),this,SLOT(set1()));
	QObject::connect(btn[2],SIGNAL(clicked()),this,SLOT(set2()));
	QObject::connect(btn[3],SIGNAL(clicked()),this,SLOT(set3()));
	QObject::connect(btn[4],SIGNAL(clicked()),this,SLOT(set4()));
}

EmitSignal::~EmitSignal()
{
//	delete lab1;
//	delete lab2;
//	delete btn1;
//	delete btn2;
//	delete line1;
//	delete line2;
}

void EmitSignal::set1()
{
	QObject::connect(btn[0],SIGNAL(clicked()),this,SLOT(result1()));
}
void EmitSignal::set2()
{
	QObject::connect(btn[0],SIGNAL(clicked()),this,SLOT(result2()));
}
void EmitSignal::set3()
{
	QObject::connect(btn[0],SIGNAL(clicked()),this,SLOT(result3()));
}
void EmitSignal::set4()
{
	QObject::connect(btn[0],SIGNAL(clicked()),this,SLOT(result4()));
}

void EmitSignal::result1()
{
	m_result = (line1->text()).toDouble()+(line2->text()).toDouble();
	line3->setText(QString::number(m_result));
}
void EmitSignal::result2()
{
	m_result = (line1->text()).toDouble()-(line2->text()).toDouble();
	line3->setText(QString::number(m_result));
}
void EmitSignal::result3()
{
	m_result = (line1->text()).toDouble()*(line2->text()).toDouble();
	line3->setText(QString::number(m_result));
}
void EmitSignal::result4()
{
	m_result = (line1->text()).toDouble()/(line2->text()).toDouble();
	line3->setText(QString::number(m_result));
}
