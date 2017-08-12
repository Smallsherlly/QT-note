#ifndef THREADDIALOG_H
#define THREADDIALOG_H

#include <QMainWindow>

namespace Ui {
class ThreadDialog;
}

class ThreadDialog : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ThreadDialog(QWidget *parent = 0);
    ~ThreadDialog();
    
private:
    Ui::ThreadDialog *ui;
};

#endif // THREADDIALOG_H
