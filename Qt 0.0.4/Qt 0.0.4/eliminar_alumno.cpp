#include "eliminar_alumno.h"
#include "ui_eliminar_alumno.h"

Eliminar_Alumno::Eliminar_Alumno(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Eliminar_Alumno)
{
	ui->setupUi(this);
}

Eliminar_Alumno::~Eliminar_Alumno()
{
	delete ui;
}
