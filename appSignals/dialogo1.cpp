#include "dialogo1.h"
#include "ui_dialogo1.h"

Dialogo1::Dialogo1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogo1)
{
    ui->setupUi(this);
}

Dialogo1::~Dialogo1()
{
    delete ui;
}
