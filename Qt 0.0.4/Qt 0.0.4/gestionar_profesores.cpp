#include "gestionar_profesores.h"
#include "ui_gestionar_profesores.h"
#include "insertar_profesor.h"
#include "modificar_profesor.h"
#include "eliminar_profesor.h"
#include "tutorias.h"

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

void Gestionar_Profesores::on_Insertar_clicked()
{
    //hide();
    Insertar_Profesor inst_profesor;
    inst_profesor.exec();
    //show();
}

void Gestionar_Profesores::on_Modificar_clicked()
{
    //hide();
    Modificar_Profesor modf_profesor;
    modf_profesor.exec();
    //show();
}

void Gestionar_Profesores::on_Eliminar_clicked()
{
    //hide();
    Eliminar_Profesor elim_profesor;
    elim_profesor.exec();
    //show();
}

void Gestionar_Profesores::on_Tutorias_clicked()
{
    Tutorias tut_profesor;
    tut_profesor.exec();
}
