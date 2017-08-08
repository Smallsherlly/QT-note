#ifndef _EMITSIGNAL_H__
#define _EMITSIGNAL_H__

#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
	

class EmitSignal:public QWidget
{
Q_OBJECT
private:
	QLabel *lab1;
	QLabel *lab2;
	QLineEdit *line1;
	QLineEdit *line2;
	QPushButton *btn1;
	QPushButton *btn2;
public:
	EmitSignal();
	~EmitSignal();
public slots:
	bool login();
public :signals:
	void emitSig(QString qs);
};


#endif //_EMITSIGNAL_H__
