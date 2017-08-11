#ifndef SNAKE_H
#define SNAKE_H

#include <QMainWindow>
#include <QLabel>
#include <QList>
#include <QKeyEvent>

namespace Ui {
class snake;
}
enum Direction{RIGHT,LEFT,UP,DOWN};

class snake : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit snake(QWidget *parent = 0);
    ~snake();
    
private slots:
    void on_m_start_clicked();

    void on_m_restart_clicked();

private:
    Ui::snake *ui;
    int m_t;//定时任务，间隔一定时间后蛇会移动
    QList<QLabel*> m_snake;
    QLabel* m_food;
    int m_size;
    int m_dire;
    int m_num;
    QRect m_rect;
public:
    QLabel* getFood();
    void startGame();
    void timerEvent(QTimerEvent *);
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *);

};

#endif // SNAKE_H
