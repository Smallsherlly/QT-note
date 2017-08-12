#include "myThread.h"
#include <QDebug>

void MyThread::run()
{
    while(1)
    {
        qDebug()<< currentThreadId();
    }
}

void Producer::run()
{
    while(1)
    {
        for(int i=0; i<9; i++)
        {
            usleep(300);
            qDebug()<<currentThreadId() << ":" <<i;
        }
    }
}

void Consumer::run()
{
    while(1)
    {
        for(int i=0; i<9; i++)
        {
            usleep(300);
            qDebug() << currentThreadId()<<":"<<i;
        }
    }
}
