#include "udpclient.h"
#include "ui_udpclient.h"
#include <QMessageBox>
#include <QListView>
#include <QDebug>

udpClient::udpClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::udpClient)
{
    ui->setupUi(this);
    udp_socket = new QUdpSocket(this);
    isStart = false;
    connect(udp_socket,SIGNAL(readyRead()),this,SLOT(receiveMessage()));
}

udpClient::~udpClient()
{
    delete ui;
}

void udpClient::on_m_start_clicked()
{
    if(!isStart)
    {

        if(ui->port->text() == "")
        {
            QMessageBox::information(this,"error","port is empty!");
            return;
        }
        isStart = true;
        m_port = ui->port->text().toShort();
        qDebug() << m_port;
        udp_socket->bind(QHostAddress("10.0.2.15"),m_port);
        ui->m_start->setText("Stop receive!");
        ui->m_port->setEnabled(false);

    }else
    {
        isStart = false;
        ui->m_start->setText("Start receive!");
        ui->m_port->setEnabled(true);
        udp_socket->close();
        ui->m_port->clear();
    }
}

void udpClient::receiveMessage()
{
    while(udp_socket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udp_socket->pendingDatagramSize());
        udp_socket->readDatagram(datagram.data(),datagram.size());
        ui->m_context->addItem(datagram.data());
    }

}
