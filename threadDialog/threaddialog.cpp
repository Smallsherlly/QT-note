#include "threaddialog.h"
#include "ui_threaddialog.h"

threadDialog::threadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::threadDialog)
{
    ui->setupUi(this);
    threadA = new Producer;
    threadB = new Consumer;

}

threadDialog::~threadDialog()
{
    delete ui;
}

void threadDialog::on_start_clicked()
{
    threadA->start();
    threadB->start();
    ui->start->setEnabled(false);
    ui->stop->setEnabled(true);
}

void threadDialog::on_stop_clicked()
{
    threadA->terminate();
    threadB->terminate();
    threadA->wait();
    threadB->wait();
    ui->stop->setEnabled(false);
    ui->start->setEnabled(true);
}

void threadDialog::on_exit_clicked()
{
    this->close();
}
