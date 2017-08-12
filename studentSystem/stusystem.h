#ifndef STUSYSTEM_H
#define STUSYSTEM_H

#include <QMainWindow>
#include <QSqlQuery>

namespace Ui {
class stuSystem;
}

class stuSystem : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit stuSystem(QWidget *parent = 0);
    ~stuSystem();
    
private:
    Ui::stuSystem *ui;
    QSqlDatabase db;
    QString sqlstr;
public slots:
    void insert();
    void del();
    void alter();
    void search();
    void order();
    void exit();
};

#endif // STUSYSTEM_H
