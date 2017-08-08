#include <QApplication>
#include "emitsignal.h"

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	EmitSignal em;
	em.show();
	return app.exec();
}
