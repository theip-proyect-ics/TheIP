#include "gestionar_alumnos.h"
#include "ui_gestionar_alumnos.h"

Gestionar_Alumnos::Gestionar_Alumnos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gestionar_Alumnos)
{
    ui->setupUi(this);
}

Gestionar_Alumnos::~Gestionar_Alumnos()
{
    delete ui;
}
