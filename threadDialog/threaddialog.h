#ifndef THREADDIALOG_H
#define THREADDIALOG_H

#include <QDialog>
#include "myThread.h"

namespace Ui {
class threadDialog;
}

class threadDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit threadDialog(QWidget *parent = 0);
    ~threadDialog();
    
private slots:
    void on_start_clicked();

    void on_stop_clicked();

    void on_exit_clicked();

private:
    Ui::threadDialog *ui;
//    MyThread* threadA;
//    MyThread* threadB;
    Producer * threadA;
    Consumer * threadB;
};

#endif // THREADDIALOG_H
