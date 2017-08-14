#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QDialog>
#include <QUdpSocket>
namespace Ui {
class udpClient;
}

class udpClient : public QDialog
{
    Q_OBJECT
    
public:
    explicit udpClient(QWidget *parent = 0);
    ~udpClient();
    
private slots:
    void on_m_start_clicked();
    void receiveMessage();

private:
    Ui::udpClient *ui;
    QUdpSocket * udp_socket;
    bool isStart;
    qint16 m_port;
};

#endif // UDPCLIENT_H
