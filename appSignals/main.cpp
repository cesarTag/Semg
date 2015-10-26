#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSplashScreen *splash = new QSplashScreen(QPixmap("/home/cesar/Git/appSignal/ucm.png"),Qt::WindowStaysOnTopHint | Qt::SplashScreen);
    splash->show();
    //splash->showMessage("Iniciando ventana principal ...");

    w.upOctave();
    //splash->showMessage("Cargando modulos ...", Qt::TopRightSection, Qt::white);
    //splash->showMessage("Estableciendo conexiones ...", Qt::AlignRight | Qt::AlignTop,Qt::white);
    QThread::sleep(5);

    w.show();
    splash->finish(&w);
    delete splash;


    return a.exec();
}
