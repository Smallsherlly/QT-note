#include "mykeyboardevent.h"
#include "ui_mykeyboardevent.h"
#include <QDebug>

myKeyBoardEvent::myKeyBoardEvent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myKeyBoardEvent)
{
    ui->setupUi(this);
}

myKeyBoardEvent::~myKeyBoardEvent()
{
    delete ui;
}

void myKeyBoardEvent::keyPressEvent(QKeyEvent * e)
{
    flag = 1;
    int x = ui->label->pos().x();
    int y = ui->label->pos().y();
    switch(e->key())
    {
        case Qt::Key_Up:
            ui->label->move(x,y-10);
            break;
        case Qt::Key_Down:
            ui->label->move(x,y+10);
            break;
        case Qt::Key_Left:
            ui->label->move(x-10,y);
            break;
        case Qt::Key_Right:
            ui->label->move(x+10,y);
            break;
        default:
            ui->label->setText(e->text());
            break;
    }
    qDebug() << e->key();
}

/*void myKeyBoardEvent::keyReleaseEvent(QKeyEvent *e)
{

    int x = ui->label->pos().x();
    int y = ui->label->pos().y();
    switch(e->key())
    {
        case Qt::Key_Up:
            ui->label->move(x,y-10);
            break;
        case Qt::Key_Down:
            ui->label->move(x,y+10);
            break;
        case Qt::Key_Left:
            ui->label->move(x-10,y);
            break;
        case Qt::Key_Right:
            ui->label->move(x+10,y);
            break;
        default:
            ui->label->setText(e->text());
            break;
    }
    qDebug() << e->key();

}
*/
