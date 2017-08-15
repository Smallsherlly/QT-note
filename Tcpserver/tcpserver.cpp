#include "tcpserver.h"
#include "ui_tcpserver.h"
#include <QMessageBox>

tcpserver::tcpserver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tcpserver)
{
    ui->setupUi(this);
    isListen = false;
    tcp_server = new QTcpServer(this);
    connect(tcp_server,SIGNAL(newConnection()),this,SLOT(socketConnect()));
    connect(this,SIGNAL(newMessage(QByteArray)),this,SLOT(sendMessage(QByteArray)));
}

tcpserver::~tcpserver()
{
    delete ui;
}

void tcpserver::socketConnect()
{
    QTcpSocket * tcp_socket = tcp_server->nextPendingConnection();
    socketList.push_back(tcp_socket);
    connect(tcp_socket,SIGNAL(readyRead()),this,SLOT(socketReceiveMessage()));
}

void tcpserver::on_m_create_clicked()
{
    if(!isListen)
    {
        if(ui->m_port->text() == "")
        {
            QMessageBox::information(this,"error","port is empty!");
            return;
        }
    //    QHostAddress address;
    //    if(address.setScopeId(ui->m_port->text().toShort()))
    //    {
    //        QMessageBox::information(this,"error","create address failed!");
    //        return;
    //    }
        qDebug() << ui->m_port->text().toShort();
        tcp_server->listen(QHostAddress::Any,ui->m_port->text().toShort());
        isListen = true;
        ui->m_create->setText("close");
    }else
    {
        isListen = false;
        tcp_server->close();
         ui->m_create->setText("create");
    }
}

void tcpserver::socketReceiveMessage()
{
    for(int i=0; i<socketList.count(); i++)
    {
        if(socketList.at(i)->bytesAvailable() > 0)
        {
            QByteArray msg;
            msg.resize(socketList.at(i)->bytesAvailable());
            msg = socketList.at(i)->readAll();
            ui->m_context->addItem(msg.data());
            emit newMessage(msg);
        }
    }
}

void tcpserver::sendMessage(QByteArray msg)
{
    for(int i=0; i<socketList.count(); i++)
    {
        socketList.at(i)->write(msg.data());
    }
}
