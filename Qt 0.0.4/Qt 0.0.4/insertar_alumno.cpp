#include "insertar_alumno.h"
#include "ui_insertar_alumno.h"

Insertar_Alumno::Insertar_Alumno(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Insertar_Alumno)
{
	ui->setupUi(this);
}

Insertar_Alumno::~Insertar_Alumno()
{
	delete ui;
}
