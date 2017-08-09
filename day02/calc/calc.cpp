#include "calc.h"
#include <QHBoxLayout>
#include <QGridLayout>
#include <QValidator>

Calc::Calc()
{
	this->resize(400,200);
	btna = new QPushButton("+",this);
	btnm = new QPushButton("-",this);
	btnp = new QPushButton("*",this);
	btnd = new QPushButton("/",this);
	QGridLayout* layout = new QGridLayout(this);
	layout->addWidget(btna,0,0);
	layout->addWidget(btnm,0,1);
	layout->addWidget(btnp,0,2);
	layout->addWidget(btnd,0,3);
	line1 = new QLineEdit(this);
	line2 = new QLineEdit(this);
	btne = new QPushButton("=",this);
	res = new QLineEdit(this);
	btne->setEnabled(false);
	layout->addWidget(line1,1,0);
	layout->addWidget(line2,1,1);
	layout->addWidget(btne,1,2);
	layout->addWidget(res,1,3);
	setLayout(layout);
	line1->setValidator(new QDoubleValidator);
	line2->setValidator(new QDoubleValidator);
	res->setReadOnly(true);
	res->setText("0");
	QObject::connect(btna,SIGNAL(clicked()),this,SLOT(setFlaga()));
	QObject::connect(btnm,SIGNAL(clicked()),this,SLOT(setFlagm()));
	QObject::connect(btnp,SIGNAL(clicked()),this,SLOT(setFlagp()));
	QObject::connect(btnd,SIGNAL(clicked()),this,SLOT(setFlagd()));
	QObject::connect(btne,SIGNAL(clicked()),this,SLOT(setRes()));
}

Calc::~Calc()
{

}

void Calc::setFlaga()
{
	flag = "+";
	btnm->setEnabled(false);
	btnp->setEnabled(false);
	btnd->setEnabled(false);
	btne->setEnabled(true);
}//设置flag标识
void Calc::setFlagm()
{
	flag = "-";
	btna->setEnabled(false);
	btnp->setEnabled(false);
	btnd->setEnabled(false);
	btne->setEnabled(true);
	
}//设置flag标识
void Calc::setFlagp()
{
	flag = "*";
	btnm->setEnabled(false);
	btna->setEnabled(false);
	btnd->setEnabled(false);
	btne->setEnabled(true);
	
}//设置flag标识
void Calc::setFlagd()
{
	flag = "/";
	btnm->setEnabled(false);
	btnp->setEnabled(false);
	btna->setEnabled(false);
	btne->setEnabled(true);
	
}//设置flag标识

void Calc::setRes()
{
	if(flag == "+")
	{
		res->setText(QString::number(line1->text().toDouble()+line2->text().toDouble()));
	}else if(flag == "-")
	{
		res->setText(QString::number(line1->text().toDouble()-line2->text().toDouble()));

	}else if(flag == "*")
	{
		res->setText(QString::number(line1->text().toDouble()*line2->text().toDouble()));

	}else if(flag == "/")
	{
		res->setText(QString::number(line1->text().toDouble()/line2->text().toDouble()));

	}
	btnm->setEnabled(true);
	btnd->setEnabled(true);
	btnp->setEnabled(true);
	btna->setEnabled(true);
	btne->setEnabled(false);

}//得出结果


