#ifndef MYKEYBOARDEVENT_H
#define MYKEYBOARDEVENT_H

#include <QDialog>
#include <QKeyEvent>

namespace Ui {
class myKeyBoardEvent;
}

class myKeyBoardEvent : public QDialog
{
    Q_OBJECT
    
public:
    explicit myKeyBoardEvent(QWidget *parent = 0);
    ~myKeyBoardEvent();
    int flag;
    
private:
    Ui::myKeyBoardEvent *ui;
public:
    void keyPressEvent(QKeyEvent *);
  //  void keyReleaseEvent(QKeyEvent *);
};

#endif // MYKEYBOARDEVENT_H
