#ifndef TYPEIN_H
#define TYPEIN_H

#include <QWidget>
#include <QTimer>
namespace Ui {
class typein;
}

class typein : public QWidget
{
    Q_OBJECT
    
public:
    explicit typein(QWidget *parent = 0);
    ~typein();
    
private:
    Ui::typein *ui;
    double resttime;
    int num;
    QString s;
    QString ns;
    QTimer *t;
    QTimer *nt;
public slots:
    void showStr();
    void timeD();
    void result();
    void restTime();

};

#endif // TYPEIN_H
