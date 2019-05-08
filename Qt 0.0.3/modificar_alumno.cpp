#include "modificar_alumno.h"
#include "ui_modificar_alumno.h"

Modificar_Alumno::Modificar_Alumno(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Modificar_Alumno)
{
	ui->setupUi(this);
}

Modificar_Alumno::~Modificar_Alumno()
{
	delete ui;
}
