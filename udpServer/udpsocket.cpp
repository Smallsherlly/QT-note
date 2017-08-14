#include "udpsocket.h"
#include "ui_udpsocket.h"
#include <QMessageBox>

udpSocket::udpSocket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::udpSocket)
{
    ui->setupUi(this);
    udp_socket = new QUdpSocket(this);
    isStart = false;

    ui->m_send->setEnabled(false);

}

udpSocket::~udpSocket()
{
    delete ui;
}

void udpSocket::on_m_start_clicked()
{
    if(!isStart)
    {
        if(ui->m_port->text() == "")
        {
            QMessageBox::information(this,"error","port is empty!");
            return;
        }
        port = ui->m_port->text().toShort();
       // udp_socket->bind(port);
       // ui->m_start->setEnabled(false);
        ui->m_send->setEnabled(true);
        ui->m_start->setText("Stop broadCast");
        isStart = true;
    }else
    {
        ui->m_send->setEnabled(false);
        isStart = false;
       // ui->m_start->setEnabled(true);
        ui->m_start->setText("Begin broadcast");
    }

}

void udpSocket::on_m_send_clicked()
{
    if(ui->m_message->text() == "")
    {
        return ;
    }

    udp_socket->writeDatagram(ui->m_message->text().toLocal8Bit(),QHostAddress::Broadcast,port);
}
