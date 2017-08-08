//#ifndef _EMITSIGNAL_H__
//#define _EMITSIGNAL_H__

#include <QLabel>
#include <QWidget>
#include <QPushButton>

class EmitSignal:public QWidget
{
Q_OBJECT
private:
	QLabel *lab;
	QPushButton *btn;
	QLabel *lab2;
public:
	EmitSignal();
	~EmitSignal();
public slots:
	void changeLabel();
	void change1(QString qs);
public :signals:
	void emitSig(QString qs);
};


//#endif //_EMITSIGNAL_H__
