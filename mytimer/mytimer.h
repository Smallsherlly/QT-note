#ifndef MYTIMER_H
#define MYTIMER_H

#include <QWidget>
class QTimer;
namespace Ui {
class myTimer;
}

class myTimer : public QWidget
{
    Q_OBJECT
    
public:
    explicit myTimer(QWidget *parent = 0);
    ~myTimer();
    
private:
    Ui::myTimer *ui;
    QTimer *t;
    QTimer *nt;
public slots:
    void setTime();
    void getNum();
};

#endif // MYTIMER_H
