#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>

class MyThread:public QThread
{
public:
    void run();
};

class Producer:public QThread
{
public:
    void run();
};

class Consumer:public QThread
{
public:
    void run();
};

#endif // MYTHREAD_H
