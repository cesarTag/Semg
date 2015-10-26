
#ifndef SIGNAL_H
#define SIGNAL_H


#include <QVector>


class signal {

public:
    signal(void);
    signal(QVector<double> x);

    QVector<double> GetX(void);
    QVector<double> GetY(void);

    void newSignal(QVector<double> x, QVector<double> y);

private:

    int N;                                  // Num de filas del archivo
    QVector<double> x, y;                   // discrete-time signal, x,y
    QVector<double> result;                 // vector de resultado de alguna transformada! dft, fft, dgt, cwt, dwt, etc.

};


#endif // SIGNAL_H
