#include <QApplication>
#include <QLabel>
#include <QTextCodec>

int main(int argc,char *argv[])
{
	QApplication app(argc,argv);//接管命令行的内容，自动处理信号
//	QLabel lab("Hello World");//Label 标签
	QTextCodec *codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForCStrings(codec);
	QLabel lab("哈哈哈哈哈嘻嘻嘻嘻嘻！");
	lab.show();
	return app.exec();
}
