#ifndef _SLID_H__
#define _SLID_H__

#include <QMainWindow>
#include <QSlider>
#include <QSpinBox>
class Slid:public QMainWindow
{
private:
	QSlider * slid;
	QSpinBox * spin;
public:
	Slid();
	~Slid();
public slots:
	void change(int d);
};

#endif // _SLID_H__
