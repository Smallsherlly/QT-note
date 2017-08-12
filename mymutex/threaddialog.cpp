#include "threaddialog.h"
#include "ui_threaddialog.h"

ThreadDialog::ThreadDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThreadDialog)
{
    ui->setupUi(this);
}

ThreadDialog::~ThreadDialog()
{
    delete ui;
}
