#include "gestionar_profesores.h"
#include "ui_gestionar_profesores.h"

Gestionar_Profesores::Gestionar_Profesores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gestionar_Profesores)
{
    ui->setupUi(this);
}

Gestionar_Profesores::~Gestionar_Profesores()
{
    delete ui;
}
