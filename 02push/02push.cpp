#include <QApplication>
#include <QPushButton>
#include <QTextCodec>
#include <QLabel>
int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QTextCodec *codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForTr(codec);

	QPushButton push;
	push.setText(QObject::tr("哈哈"));
	QLabel lab(QObject::tr("您好"));
	push.show();
	lab.show();
	QObject::connect(&push,SIGNAL(clicked()),&push,SLOT(close()));
	return app.exec();
	
}
