#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QDialog>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class tcpserver;
}

class tcpserver : public QDialog
{
    Q_OBJECT
    
public:
    explicit tcpserver(QWidget *parent = 0);
    ~tcpserver();
    
private:
    Ui::tcpserver *ui;
    qint16 m_port;
    QTcpServer* tcp_server;
    QList<QTcpSocket*> socketList;
signals:
    void newMessage(QByteArray);
public slots:
    void socketConnect();
    void on_m_create_clicked();
    void socketReceiveMessage();
    void sendMessage(QByteArray);
};

#endif // TCPSERVER_H
