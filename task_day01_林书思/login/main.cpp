#include <QApplication>
#include "login.h"
using namespace Ui;

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	QWidget win;
	Ui_Form ui;
	ui.setupUi(&win);
	win.show();
	return app.exec();
}
