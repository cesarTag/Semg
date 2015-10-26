#include "signal.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <qmath.h>

#define PI2 6.2832


// constructor vacio
signal::signal(void){}

// constructor general
void signal::newSignal(QVector<double> x, QVector<double> y)
{
    this->N = y.length();
    this->x = x;
    this->y = y;

    this->result.resize(N);
}

QVector<double> signal::GetX(){
    return x;
}

QVector<double> signal::GetY(){
    return y;
}


//=================================================================//
//              F   U   N   C   I   O   N   E   S                  //


