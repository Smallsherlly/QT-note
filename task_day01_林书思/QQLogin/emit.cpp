#include <QApplication>
#include <QTextCodec>
#include "emitsignal.h"

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QTextCodec* codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForTr(codec);
	EmitSignal em;
	em.show();
	return app.exec();
}
