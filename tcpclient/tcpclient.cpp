#include "tcpclient.h"
#include "ui_tcpclient.h"
#include <QMessageBox>

tcpclient::tcpclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tcpclient)
{
    ui->setupUi(this);
    isConnect = false;
    ui->m_send->setEnabled(false);
    tcp_socket = new QTcpSocket(this);
    connect(tcp_socket,SIGNAL(readyRead()),this,SLOT(receiveMessage()));

}

tcpclient::~tcpclient()
{
    delete ui;
}

void tcpclient::on_connect_clicked()
{
    if(!isConnect)
    {
        if(ui->m_port->text() == "")
        {
            QMessageBox::information(this,"error","port is empty");
            return;
        }
        if(ui->username->text() =="")
        {
            QMessageBox::information(this,"error","username is empty");
            return;
        }
        username = ui->username->text();
        m_port = ui->m_port->text().toShort();
        qDebug()<<m_port;

        QString ip = ui->m_ip->text();
        if(!addressip.setAddress(ip))
        {
            QMessageBox::information(this,"error","ip error!");
            return;
        }
        qDebug()<<addressip;
        //addressip = QHostAddress(ip);
        tcp_socket->connectToHost(addressip,m_port);
        QString msg = username+":join Chat Room";
        tcp_socket->write(msg.toLocal8Bit());
        isConnect = true;
        ui->m_ip->setEnabled(false);
        ui->m_port->setEnabled(false);
        ui->connect->setText("DisConnect");
        ui->m_send->setEnabled(true);
    }else
    {
        QString msg = username+":leave Chat Room";
        tcp_socket->write(msg.toLocal8Bit());
        tcp_socket->disconnectFromHost();
        tcp_socket->close();
        isConnect = false;
        ui->m_ip->setEnabled(true);
        ui->m_port->setEnabled(true);
        ui->m_ip->clear();
        ui->m_port->clear();
        //ui->m_context->clear();
        ui->connect->setText("Connect");
        ui->m_send->setEnabled(false);
    }
}

void tcpclient::receiveMessage()
{
    if(tcp_socket->bytesAvailable()>0)
    {
        QByteArray bytemsg;
        bytemsg.resize(tcp_socket->bytesAvailable());
        bytemsg = tcp_socket->readAll();
        ui->m_context->addItem(bytemsg.data());
    }
}

void tcpclient::on_m_send_clicked()
{
    if(isConnect)
    {
        if(ui->message->text() == "")
        {
            return;
        }
        QString msg = ui->message->text();
        tcp_socket->write(msg.toLocal8Bit());
        ui->message->clear();
    }
}
