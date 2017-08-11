#ifndef MYDRAW_H
#define MYDRAW_H

#include <QMainWindow>
//#include <QPainter>

namespace Ui {
class myDraw;
}

class myDraw : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit myDraw(QWidget *parent = 0);
    ~myDraw();
    
private:
    Ui::myDraw *ui;
public:
    void paintEvent(QPaintEvent *);
};

#endif // MYDRAW_H

