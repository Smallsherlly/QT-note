#include "func.h"
#include <QMessageBox>
using namespace Ui;
/*
class Func:public QWidget
{
private:
	Ui_Form * ui;

public:
	Func();
	~Func();
public slots:
	void login();
	void exit();
	
};
*/

Func::Func()
{
	ui = new Ui_Form(this);	
	QObject::connect(ui->btn1,SIGNAL(clicked()),this,SLOT(login()));
	QObject::connect(ui->btn2,SIGNAL(clicked()),this,SLOT(exit()));
}
Func::~Func()
{
	delete ui;
}

void Func::login()
{
	QMessageBox msg;
	if(ui->edit1->text() == "admin" && ui->edit2->text() == "123456")
	{
		msg.setText("登录成功！");
	}else
	{
		msg.setText("登录失败！");
	}
	msg.exec();
}

void Func::exit()
{
	QMessageBox msg;
	msg.setText("你确定要退出吗？");
	msg.setStandardButtons(QMessageBox::No|QMessageBox::Yes);
	if(msg.exec() == QMessageBox::Yes)
	{
		qApp->quit();
	}else
	{
		msg.close();
	}

}

