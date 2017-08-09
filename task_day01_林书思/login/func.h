#ifndef _FUNC_H__
#define _FUNC_H__
#include <QWidget>
#include "login.h"
using namespace Ui;
class Func:public QWidget
{
	Q_OBJECT
private:
	Ui_Form * ui;

public:
	Func();
	~Func();
public slots:
	void login();
	void exit();
	
};


#endif // _FUNC_H__
