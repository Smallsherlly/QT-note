#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

namespace Ui {
class calc;
}

class calc : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit calc(QWidget *parent = 0);
    ~calc();
    QString s;
    QString ns;
    QString flag;

private:
    Ui::calc *ui;
public slots:
    void setClear();
    void set_a();
    void set_s();
    void set_p();
    void set_d();
    void result();
    void get0();
    void get1();
    void get2();
    void get3();
    void get4();
    void get5();
    void get6();
    void get7();
    void get8();
    void get9();
};

#endif // CALC_H

