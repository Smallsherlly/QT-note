#include <QApplication>
#include "slid.h"

int main(int argc,char* argv[])
{
	QApplication app(argc,argv);	
	Slid s;
	s.show();

	return app.exec();
}
