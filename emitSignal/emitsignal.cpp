#include "emitsignal.h"
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
EmitSignal::EmitSignal()
{
	lab = new QLabel("hello",this);
	btn = new QPushButton(this);
	this->resize(200,200);
	lab->resize(50,50);
	lab->move(50,50);
	btn->resize(50,50);
	btn->move(50,120);
	lab2 = new QLabel("world",this);
	lab2->resize(50,50);
	lab->move(50,15);
	QObject::connect(btn,SIGNAL(clicked()),this,SLOT(changeLabel()));
	QObject::connect(this,SIGNAL(emitSig(QString)),this,SLOT(change1(QString)));
}

EmitSignal::~EmitSignal()
{
	delete lab;
	delete btn;
}

void EmitSignal::changeLabel()
{
	lab->setText("world");
	emit emitSig(QObject::tr("1314"));
}

void EmitSignal::change1(QString qs)
{
	lab2->setText(qs);
}
