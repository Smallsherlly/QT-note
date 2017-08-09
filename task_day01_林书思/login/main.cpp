#include <QApplication>
#include <QTextCodec>
#include "login.h"
#include "func.h"
using namespace Ui;

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QTextCodec* codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForCStrings(codec);
	Func fun;
	fun.show();
	return app.exec();
}
