#ifndef HOSTINFO_H
#define HOSTINFO_H

#include <QDialog>

namespace Ui {
class hostInfo;
}

class hostInfo : public QDialog
{
    Q_OBJECT
    
public:
    explicit hostInfo(QWidget *parent = 0);
    ~hostInfo();
    
private slots:
    void on_m_detail_clicked();

private:
    Ui::hostInfo *ui;
};

#endif // HOSTINFO_H
