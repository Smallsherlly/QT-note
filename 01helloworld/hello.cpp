#include <QApplication>
#include <QLabel>


int main(int argc,char *argv[])
{
	QApplication app(argc,argv);//接管命令行的内容，自动处理信号
	QLabel lab("Hello World");//Label 标签
	lab.show();
	return app.exec();
}
