#include "sqldriver.h"
#include "ui_sqldriver.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QTableView>


sqlDriver::sqlDriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sqlDriver)
{
    ui->setupUi(this);
    QSqlDatabase db;
    foreach(QString d,QSqlDatabase::drivers())
    {
        qDebug() << d;
    }
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student");
   // db.setConnectOptions("QSQLITE_OPEN_READONL=1");
    qDebug()<<db.open();
    //qDebug()<< db.lastError();
    QSqlQuery query(db);
    QString sqlstr;
//    sqlstr = QString("create table student(id INTEGER,name TEXT,score INTEGER)");
//    if(query.exec(sqlstr))
//    {
//        qDebug() << "OK!";
//    }else
//    {
//        qDebug() << "NO";
//    }

    sqlstr = "insert into student values(110,'silence',98)";
    query.exec(sqlstr);
    db.commit();


    query.prepare("insert into student values(:id,:name,:score)");
    query.bindValue(0,888);
    query.bindValue(1,"陈稿");
    query.bindValue(2,59);
    query.exec();

    sqlstr = "select * from student";
    query.exec(sqlstr);
    qDebug() << query.record().count();//查询字段的个数
    int num = query.record().count();
    for(int i=0; i<num; i++)
    {
        qDebug() << query.record().fieldName(i);
    }
    while(query.next())
    {
        qDebug() << query.value(0).toInt();
        qDebug() << query.value(1).toString();
        qDebug() << query.value(2).toInt();
    }
    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select * from student");
    ui->tableView->setModel(model);
    ui->tableView->show();


    db.close();


}

sqlDriver::~sqlDriver()
{
    delete ui;
}
