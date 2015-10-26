#include "mythread.h"
#include <QtCore>


MyThread::MyThread(QObject *parent) :
    QThread(parent)
{    
}

void MyThread::run(){

    for (int var = 0; var < 100; ++var) {
        QMutex mutex;
        mutex.lock();
        if(this->Stop) break;
        mutex.unlock();

        emit progressBar(var);
        this->msleep(100);
    }
}
