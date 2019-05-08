#include "gestionar_alumnos.h"
#include "ui_gestionar_alumnos.h"
#include "insertar_alumno.h"
#include "modificar_alumno.h"
#include "eliminar_alumno.h"
#include "tutorias.h"

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


void Gestionar_Alumnos::on_Insertar_clicked()
{
    //hide();
    Insertar_Alumno inst_alumno;
    inst_alumno.exec();
    //show();
}

void Gestionar_Alumnos::on_Modificar_clicked()
{
    //hide();
    Modificar_Alumno modf_alumno;
    modf_alumno.exec();
    //show();
}

void Gestionar_Alumnos::on_Eliminar_clicked()
{
    //hide();
    Eliminar_Alumno elim_alumno;
    elim_alumno.exec();
    //show();
}


void Gestionar_Alumnos::on_Tutorias_clicked()
{
    Tutorias tut_alumno;
    tut_alumno.exec();
}
