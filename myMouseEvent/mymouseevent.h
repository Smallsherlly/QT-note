#ifndef MYMOUSEEVENT_H
#define MYMOUSEEVENT_H

#include <QMainWindow>

namespace Ui {
class myMouseEvent;
}

class myMouseEvent : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit myMouseEvent(QWidget *parent = 0);
    ~myMouseEvent();
    
private:
    Ui::myMouseEvent *ui;
    bool m_select;
    int m_x;
    int m_y;
public:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseDoubleClickEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
};

#endif // MYMOUSEEVENT_H
