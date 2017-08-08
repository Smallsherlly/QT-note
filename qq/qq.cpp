#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <QTextCodec>
#include <QLineEdit>

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QTextCodec* codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForTr(codec);
	QWidget wind;
	wind.resize(512,512);
	wind.move(100,100);
	QLabel lab1(QObject::tr("帐号"),&wind);
	QLabel lab2(QObject::tr("密码"),&wind);
	lab1.resize(100,100);
	lab2.resize(100,100);
	lab1.move(100,100);
	lab2.move(100,200);
	QLineEdit l1(&wind);
	QLineEdit l2(&wind);
	l1.resize(200,50);
	l2.resize(200,50);
	l1.move(200,125);
	l2.move(200,225);

	QPushButton *btn1 = new QPushButton(QObject::tr("登录"),&wind);
	QPushButton *btn2 = new QPushButton(QObject::tr("退出"),&wind);
	btn1->resize(100,100);
	btn2->resize(100,100);
	btn1->move(100,400);
	btn2->move(300,400);

	wind.show();
	return app.exec();
}
