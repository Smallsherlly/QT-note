#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <QTextCodec>

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QTextCodec* codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForTr(codec);
	QWidget wind;
	wind.resize(512,512);
	wind.move(100,100);
	QLabel lab(QObject::tr("林书思"),&wind);
	lab.resize(100,100);
	lab.move(128,128);
	QPushButton *btn = new QPushButton("push",&wind);
	btn->resize(100,100);
	btn->move(256,256);

	wind.show();
	return app.exec();
}
