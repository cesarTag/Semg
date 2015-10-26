#ifndef EMG_H
#define EMG_H

#include <QMainWindow>
#include <QProcess>
#include <QFile>

#include "mythread.h"


namespace Ui {
class EMG;
}

class EMG : public QMainWindow
{
    Q_OBJECT

public:
    explicit EMG(QWidget *parent = 0);
    ~EMG();
    MyThread *myThread;

private slots:
    void on_botonArchivo_clicked();

    void on_botonEnviar_clicked();

    void on_botonCerrar_clicked();

    void on_botonRO_clicked();

    void on_botonColorMap_clicked();

private:
    Ui::EMG *ui;

    int fd[2];
    FILE *fid;

    QString curFile;

    QStringList arguments;
    QProcess octave;

};

#endif // EMG_H
