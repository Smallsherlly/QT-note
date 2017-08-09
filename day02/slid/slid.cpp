#include "slid.h"

Slid::Slid()
{
	this->resize(200,100);
	slid = new QSlider(Qt::Horizontal,this);
	slid->move(20,45);
	slid->resize(100,40);
	slid->setRange(0,120);
	slid->setValue(20);
	spin = new QSpinBox(this);
	spin->move(140,45);
	spin->resize(50,40);
	spin->setRange(0,120);
	spin->setValue(20);
	QObject::connect(slid,SIGNAL(sliderMoved(int)),spin,SLOT(setValue(int)));
//	QObject::connect(slid,SIGNAL(valueChanged(int)),spin,SLOT(setValue(int)));
	QObject::connect(spin,SIGNAL(valueChanged(int)),slid,SLOT(setValue(int)));
}

void Slid::change(int d)
{
	spin->setValue(d);
}

Slid::~Slid()
{
	delete slid;
	delete spin;
}
