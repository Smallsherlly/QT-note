#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class tcpclient;
}

class tcpclient : public QDialog
{
    Q_OBJECT
    
public:
    explicit tcpclient(QWidget *parent = 0);
    ~tcpclient();
    
private slots:
    void on_connect_clicked();
    void receiveMessage();
    void on_m_send_clicked();

private:
    Ui::tcpclient *ui;
    bool isConnect;
    QTcpSocket * tcp_socket;
    qint16 m_port;
    QHostAddress addressip;
    QString username;
};

#endif // TCPCLIENT_H
