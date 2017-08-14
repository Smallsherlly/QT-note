#include "hostinfo.h"
#include "ui_hostinfo.h"
#include <QHostInfo>
#include <QNetworkInterface>
#include <QDebug>
#include <QMessageBox>
hostInfo::hostInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hostInfo)
{
    ui->setupUi(this);
    QString hostname = QHostInfo::localHostName();
    QHostInfo host = QHostInfo::fromName(hostname);
    ui->host->setText(hostname);
    if(!host.addresses().isEmpty())
    {
        QHostAddress address = host.addresses().first();
         ui->ip->setText(address.toString());
    }


}

hostInfo::~hostInfo()
{
    delete ui;
}

void hostInfo::on_m_detail_clicked()
{
    QList<QNetworkInterface> interfaceList = QNetworkInterface::allInterfaces();
    QString detail = "";
    for(int i=0; i<interfaceList.size(); i++)
    {
        qDebug()<<interfaceList.at(i);
        QNetworkInterface net = interfaceList.at(i);
        detail += net.name() + "\n";
        detail += net.hardwareAddress() + "\n";
        QList<QNetworkAddressEntry> entryList = net.addressEntries();
        for(int i=0; i<entryList.count()-1; i++)
        {
            QNetworkAddressEntry entry = entryList.at(i);
            detail += "\tip:"+entry.ip().toString()+"\n";
            detail += "\tnetmask:"+entry.netmask().toString()+"\n";
            detail += "\tbroadcast:"+entry.broadcast().toString()+"\n";
        }
    }    QMessageBox msg;
    msg.setText(detail);
    msg.setWindowTitle("detail infomation");
    msg.exec();
}
