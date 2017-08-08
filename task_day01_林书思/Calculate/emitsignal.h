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
	double m_result;
//	QLabel *lab[10];
	QLineEdit *line1;
	QLineEdit *line2;
	QLineEdit *line3;
	QPushButton *btn[5];
public:
	EmitSignal();
	~EmitSignal();
public slots:
	void set1();
	void set2();
	void set3();
	void set4();
	void result1();
	void result2();
	void result3();
	void result4();
//public :signals:
//	void emitSig(QString qs);
};


#endif //_EMITSIGNAL_H__
