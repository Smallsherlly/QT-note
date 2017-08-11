#include "mymouseevent.h"
#include "ui_mymouseevent.h"
#include <QMouseEvent>
#include <QRect>

myMouseEvent::myMouseEvent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMouseEvent)
{
    ui->setupUi(this);
    m_select = false;
    ui->label->resize(60,60);
    ui->label->move(100,200);

}

myMouseEvent::~myMouseEvent()
{
    delete ui;
}

void myMouseEvent::mousePressEvent(QMouseEvent * e)
{
    if(e->button() == Qt::LeftButton)
    {
        ui->label->setText(QString("左键(%1,%2)").arg(e->x()).arg(e->y()));
        QRect rect = ui->label->frameRect();
        rect.translate(ui->label->pos());
        if(rect.contains(e->pos()))
        {
            m_select = true;
            m_x = e->x() - ui->label->geometry().x();
            m_y = e->y() - ui->label->geometry().y();
        }

    }else if(e->button() == Qt::RightButton)
    {
        ui->label_2->setText(QString("右键(%1,%2)").arg(e->x()).arg(e->y()));
    }
}

void myMouseEvent::mouseReleaseEvent(QMouseEvent * e)
{
    if(e->button() == Qt::LeftButton)
    {
        ui->label->setText(QString("松开左键"));
    }else if(e->button() == Qt::RightButton)
    {
        ui->label_2->setText(QString("松开右键"));
    }
    m_select = false;
}

void myMouseEvent::mouseDoubleClickEvent(QMouseEvent * e)
{
    if(e->button() == Qt::LeftButton)
    {
        ui->label->setText(QString("啊，左边好痛！"));
    }else if(e->button() == Qt::RightButton)
    {
        ui->label_2->setText(QString("啊，右边好痛！"));
    }
}

void myMouseEvent::mouseMoveEvent(QMouseEvent * e)
{

    ui->label_3->setText(QString("当前位置(%1,%2)").arg(e->x()).arg(e->y()));
    if(m_select)
        ui->label->move(e->x()-m_x,e->y()-m_y);
}

