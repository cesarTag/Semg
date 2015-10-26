#include "emg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EMG w;
    w.show();

    return a.exec();
}
