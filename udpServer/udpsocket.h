#ifndef UDPSOCKET_H
#define UDPSOCKET_H

#include <QDialog>
#include <QUdpSocket>
namespace Ui {
class udpSocket;
}

class udpSocket : public QDialog
{
    Q_OBJECT
    
public:
    explicit udpSocket(QWidget *parent = 0);
    ~udpSocket();
    
private slots:
    void on_m_start_clicked();

    void on_m_send_clicked();

private:
    Ui::udpSocket *ui;
    QUdpSocket * udp_socket;
    bool isStart;
    quint16 port;
};

#endif // UDPSOCKET_H
