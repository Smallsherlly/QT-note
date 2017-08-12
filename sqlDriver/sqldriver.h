#ifndef SQLDRIVER_H
#define SQLDRIVER_H

#include <QDialog>

namespace Ui {
class sqlDriver;
}

class sqlDriver : public QDialog
{
    Q_OBJECT
    
public:
    explicit sqlDriver(QWidget *parent = 0);
    ~sqlDriver();
    
private:
    Ui::sqlDriver *ui;
};

#endif // SQLDRIVER_H
