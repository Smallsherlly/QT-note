#include <iostream>
#include <QApplication>
#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QTime>


using namespace std;
class Born:public QThread
{

public:
	void run()
	{

	}
};

class ThreadPool
{   
private:
    //消费容器里客户
    list<int> m_socketList;
    //所有的线程    
    list<int> m_pthreadList;
    //线程个数
	size_t m_num;
	//互斥量
    QMutex mutex;//用于保护m_socketList
public:
   //构造函数
	ThreadPool(size_t num)
	{
		m_num = num;
		for(size_t i=0; i<m_num; i++)
		{
			m_pthreadList.push_back((new Born())->currentThreadId());
		}
	}

    void * work(void *p);//线程函数
    void start();//启动所有线程
    void setWork(int socketid);

	
};


class Kill:public QThread
{

public:
	void run()
	{

	}
};


int main()
{
	
	
	
	return 0;	
}
