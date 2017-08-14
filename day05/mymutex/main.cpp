#include <QApplication>
#include <QThread>
#include <QDebug>
#include <QMutex>
#include <QWaitCondition>
#include <QTime>
#include <iostream>



using namespace std;
namespace ui
{
const int size = 10;
int buffer[size];
int index = 0;
int data = 0;
QMutex mutex;
QWaitCondition full;
QWaitCondition empty;
void show(string s);
class Producer:public QThread
{
public:
	void run()
	{
		for(;;){
		mutex.lock();
		while(index == 9)
		{
			full.wait(&mutex);		
		}

		data = qrand()%10;
		index++;
		buffer[index] = data;
		show(string("->"));
		usleep(qrand()%100*1000);
		empty.wakeAll();
		mutex.unlock();}
	}
};

class Consumer:public QThread
{
public:
	void run()
	{
		for(;;){
		mutex.lock();
		while(index <= 0)
		{
			empty.wait(&mutex);
		}
		index--;
		show(string("<-"));
		usleep(qrand()%100*200);
//		sleep(1);
		full.wakeAll();
		mutex.unlock();}
}
};
void show(string s)
{
	usleep(500000);
	cout << "\r";
	for(int i=1; i<index; i++)
	{
		cout << buffer[i] << " ";
	}
	cout << s;
	fflush(stdout);
}
}
using namespace ui;
Producer * t1 = new Producer;
Consumer * t2 = new Consumer;
int main(int argc,char* argv[])
{
	QApplication app(argc,argv);
	qsrand(QTime::currentTime().msec());
	t1->start();
	t2->start();
	t1->wait();
	t2->wait();
	return app.exec();
}
