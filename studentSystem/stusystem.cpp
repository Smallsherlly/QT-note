#include "stusystem.h"
#include "ui_stusystem.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QTableView>


stuSystem::stuSystem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::stuSystem)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("stuSystem");
    db.open();

    QSqlQuery query(db);
    //创建图表
    int flag = 0;
    sqlstr = QString("select * from sqlite_master");
    query.exec(sqlstr);
    while(query.next())
    {
        if(db.databaseName() == query.value(1).toString())
            flag = 1;
    }
    if(flag != 1)
    {
        sqlstr = QString("create table stuSystem(id INTEGER,name TEXT,score INTEGER)");
        if(query.exec(sqlstr))
        {
            qDebug() << "OK!";
        }else
        {
            qDebug() << "NO";
        }
    }

    //获取数据
    QObject::connect(ui->insert,SIGNAL(clicked()),this,SLOT(insert()));
    QObject::connect(ui->delete_2,SIGNAL(clicked()),this,SLOT(del()));
    QObject::connect(ui->alter,SIGNAL(clicked()),this,SLOT(alter()));
    QObject::connect(ui->select,SIGNAL(clicked()),this,SLOT(search()));
    QObject::connect(ui->order,SIGNAL(clicked()),this,SLOT(order()));
    QObject::connect(ui->exit,SIGNAL(clicked()),this,SLOT(exit()));





    //显示图表
    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select * from stuSystem");
    ui->tableView->setModel(model);
    ui->tableView->show();


    //db.close();

}

stuSystem::~stuSystem()
{
    delete ui;
}


//插入数据
void stuSystem::insert()
{
    QSqlQuery query(db);
    query.prepare("insert into stuSystem values(:id,:name,:score)");
    query.bindValue(0,ui->m_id->text().toInt());
    query.bindValue(1,ui->m_name->text());
    query.bindValue(2,ui->m_score->text().toInt());
    query.exec();

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select * from stuSystem");
    ui->tableView->setModel(model);
    ui->tableView->show();
}

//删除数据
void stuSystem::del()
{
    QSqlQuery query(db);
    sqlstr = QString("delete from stuSystem where id = %1 and name = '%2' and score = %3")
            .arg(ui->m_id->text().toInt())
            .arg(ui->m_name->text())
            .arg(ui->m_score->text().toInt());
    query.exec(sqlstr);

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select * from stuSystem");
    ui->tableView->setModel(model);
    ui->tableView->show();
}

//修改数据
void stuSystem::alter()
{

    QSqlQuery query(db);
    sqlstr = QString("update stuSystem set name = '%1',score = %2 where id=%3;")
            .arg(ui->m_name->text())
            .arg(ui->m_score->text().toInt())
            .arg(ui->m_id->text().toInt());
    query.exec(sqlstr);

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select * from stuSystem");
    ui->tableView->setModel(model);
    ui->tableView->show();
}

//查询数据
void stuSystem::search()
{
    QSqlQuery query(db);
    sqlstr = QString("select * from stuSystem where id=%1")
            .arg(ui->m_id->text().toInt());

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery(sqlstr);
    ui->tableView->setModel(model);
    ui->tableView->show();
}

//排序数据
void stuSystem::order()
{
    QSqlQuery query(db);
    sqlstr = QString("select * from stuSystem order by %1 %2")
            .arg(ui->comboBox->currentText())
            .arg(ui->comboBox_2->currentText());

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery(sqlstr);
    ui->tableView->setModel(model);
    ui->tableView->show();
}

void stuSystem::exit()
{
    qApp->exit();
}
