#include "snake.h"
#include "ui_snake.h"
#include <QTime>
#include <QPalette>
#include <QColor>
#include <QKeyEvent>
#include <QDebug>

snake::snake(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::snake)
{
    ui->setupUi(this);
    //setFocusPolicy(Qt::StrongFocus);
    ui->m_score->setFocusPolicy(Qt::NoFocus);
    //setFocusProxy(this);
    //setAutoFillBackground(true);
    m_size = 10;

}

snake::~snake()
{
    delete ui;
}

void snake::on_m_start_clicked()
{
    startGame();
}

void snake::on_m_restart_clicked()
{

}

QLabel* snake::getFood()
{
    qsrand(QTime::currentTime().msec());
    update();
    QLabel* food = new QLabel(this);
    food->setFrameShape(QFrame::Box);
    food->setPalette(QPalette(QColor(qrand()%255,qrand()%255,qrand()%255)));
    food->move(qrand()%(10+2)*20+m_rect.x(),qrand()%(10+2)*20+m_rect.y());
    food->resize(m_size,m_size);
    food->setAutoFillBackground(true);
    food->show();
    return food;
}

void snake::startGame()
{
    qsrand(QTime::currentTime().msec());
    QLabel* head = new QLabel(this);
    head->setFrameShape(QFrame::Box);
    head->setPalette(QPalette(QColor(qrand()%255,qrand()%255,qrand()%255)));
    head->move(m_rect.width()/2+m_rect.x(),m_rect.height()/2+m_rect.y());
    head->resize(m_size,m_size);
    head->setAutoFillBackground(true);
    head->setFocusPolicy(Qt::StrongFocus);

    head->show();
    m_snake.push_back(head);
    m_food = getFood();
    m_dire = RIGHT;
    m_num = 0;
    m_t = startTimer(200);

}

void snake::timerEvent(QTimerEvent *)
{
    for(int i=m_snake.size()-1; i>0; i--)
    {
        m_snake[i]->move(m_snake[i-1]->pos().x(),m_snake[i-1]->pos().y());
    }
    int head_x = m_snake[0]->pos().x();
    int head_y = m_snake[0]->pos().y();
    switch(m_dire)
    {
        case UP:
            m_snake[0]->move(head_x,head_y-m_size);
            break;
        case DOWN:
            m_snake[0]->move(head_x,head_y+m_size);
            break;
        case LEFT:
            m_snake[0]->move(head_x-m_size,head_y);
            break;
        case RIGHT:
            m_snake[0]->move(head_x+m_size,head_y);
            break;

    }
    if(m_rect.contains(m_snake[0]->pos()) == false)
    {

    }
    QRect rect = m_food->frameRect();
    rect.translate(m_food->pos());
    if(rect.contains(m_snake[0]->pos()))
    {
        m_snake.push_back(m_food);
        m_food = getFood();
    }
}

void snake::paintEvent(QPaintEvent *)
{
    m_rect = ui->m_map->frameRect();
    m_rect.translate(ui->m_map->pos());
}

void snake::keyPressEvent(QKeyEvent * e)
{
    int x = m_snake[0]->pos().x();
    int y = m_snake[0]->pos().y();
    switch(e->key())
    {
        case Qt::Key_Up:
            m_dire = UP;
            break;
        case Qt::Key_Down:
            m_dire = DOWN;
            break;
        case Qt::Key_Left:
            m_dire = LEFT;
            break;
        case Qt::Key_Right:
            m_dire = RIGHT;
            break;
    }
    //qDebug() << e->key();
}
