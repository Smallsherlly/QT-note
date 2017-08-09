#ifndef _CALC_H__
#define _CALC_H__

#include <QPushButton>
#include <QLineEdit>
class Calc:public QWidget
{
Q_OBJECT
private:
	QPushButton* btna;
	QPushButton* btnm;
	QPushButton* btnp;
	QPushButton* btnd;
	QPushButton* btne;

	QLineEdit* line1;
	QLineEdit* line2;

	QLineEdit* res;

	QString flag;//用于保存运算符
public:
	Calc();
	~Calc();
public slots:
	void setFlaga();//设置flag标识
	void setFlagm();//设置flag标识
	void setFlagp();//设置flag标识
	void setFlagd();//设置flag标识
	void setRes();//得出结果
};

#endif // _CALC_H__
