#include "emitsignal.h"

QString name = QString("779854387");
QString psw = QString("1314");
EmitSignal::EmitSignal()
{
	lab1 = new QLabel(QObject::tr("帐号"),this);
	lab2 = new QLabel(QObject::tr("密码"),this);
	this->resize(400,300);
	lab1->resize(50,50);
	lab1->move(50,50);
	lab2->resize(50,50);
	lab2->move(50,100);

	line1 = new QLineEdit(this);
	line2 = new QLineEdit(this);
	line1->resize(200,50);
	line1->move(100,50);
	line2->resize(200,50);
	line2->move(100,100);

	btn1 = new QPushButton(QObject::tr("登录"),this);
	btn1->resize(50,50);
	btn1->move(100,220);
	btn2 = new QPushButton(QObject::tr("退出"),this);
	btn2->resize(50,50);
	btn2->move(250,220);
	QObject::connect(btn1,SIGNAL(clicked()),this,SLOT(login()));
	QObject::connect(btn2,SIGNAL(clicked()),this,SLOT(close()));
}

EmitSignal::~EmitSignal()
{
	delete lab1;
	delete lab2;
	delete btn1;
	delete btn2;
	delete line1;
	delete line2;
}

bool EmitSignal::login()
{
	QMessageBox msgBox;
	if(line1->text()==name&&line2->text()==psw)
	{
		msgBox.setText(QObject::tr("登录成功！"));
		msgBox.move(150,150);
		msgBox.exec();
		return true;
	}
	msgBox.setText(QObject::tr("登录失败！"));
	msgBox.move(150,150);
	msgBox.exec();
	return false;
}

