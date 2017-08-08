#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <QTextCodec>
#include <QLineEdit>

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QTextCodec* codec = QTextCodec::codecForName("utf-8");//生成编码
	QTextCodec::setCodecForTr(codec);//设置编码器
	QWidget wind;//生成窗口
	wind.resize(512,512);//设置窗口大小
	wind.move(100,100);//设置窗口出现位置
	
	QLabel lab1(QObject::tr("帐号"),&wind);//生成标签
	QLabel lab2(QObject::tr("密码"),&wind);
	lab1.resize(100,100);//设置标签大小
	lab2.resize(100,100);
	lab1.move(100,100);//设置标签在窗口中的位置
	lab2.move(100,200);

	QLineEdit l1(&wind);//生成文本框
	QLineEdit l2(&wind);
	l1.resize(200,50);//设置文本框大小
	l2.resize(200,50);
	l1.move(200,125);//设置文本框在窗口中的位置
	l2.move(200,225);

	QPushButton btn1(QObject::tr("登录"),&wind);//生成按钮
	QPushButton btn2(QObject::tr("退出"),&wind);
	btn1.resize(100,100);//设置按钮大小
	btn2.resize(100,100);
	btn1.move(100,400);//设置按钮在窗口中的位置
	btn2.move(300,400);

	wind.show();//显示窗口
	QObject::connect(&btn2,SIGNAL(clicked()),&wind,SLOT(close()));//将按钮2的接收到的点击信号与槽连接

	return app.exec();
}
