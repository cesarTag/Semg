#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QProcess>
#include "qcustomplot.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    struct Pto{ double x,y; };
    void upOctave();


private slots:
    void on_botonCargar_clicked();
    void openOctave(QString opcion);
    void grafica(QCustomPlot *grafico, QVector<double> x, QVector<double> y , int tipo);
    void habilita();
    int leer(QFile &fin, QList<Pto> & lista);
    void on_botonGraficar_clicked();
    void showState();
    void changeType(QStringList q, QVector<double> & vector,int size);

private:
    Ui::MainWindow *ui;
    QString path;
    QProcess *octave;


};

#endif // MAINWINDOW_H
