#ifndef MYTIMEREVENT_H
#define MYTIMEREVENT_H

#include <QMainWindow>
#include <QTimer>
#include <QTimerEvent>

namespace Ui {
class myTimerEvent;
}

class myTimerEvent : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit myTimerEvent(QWidget *parent = 0);
    ~myTimerEvent();
    
private:
    Ui::myTimerEvent *ui;
    //QTimer* t1;
    //QTimer* t2;
    int id1;
    int id2;
public:
    void timerEvent(QTimerEvent * e);
};

#endif // MYTIMEREVENT_H
