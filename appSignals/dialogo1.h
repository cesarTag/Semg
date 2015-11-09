#ifndef DIALOGO1_H
#define DIALOGO1_H

#include <QDialog>

namespace Ui {
class Dialogo1;
}

class Dialogo1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogo1(QWidget *parent = 0);
    ~Dialogo1();

private:
    Ui::Dialogo1 *ui;
};

#endif // DIALOGO1_H
