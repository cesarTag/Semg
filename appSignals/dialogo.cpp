#include "dialogo.h"
#include "ui_dialogo.h"

Dialogo::Dialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogo)
{
    ui->setupUi(this);
}

Dialogo::~Dialogo()
{
    delete ui;
}
