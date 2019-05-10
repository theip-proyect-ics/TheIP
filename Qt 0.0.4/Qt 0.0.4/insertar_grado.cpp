#include "insertar_grado.h"
#include "ui_insertar_grado.h"

Insertar_Grado::Insertar_Grado(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Insertar_Grado)
{
	ui->setupUi(this);
}

Insertar_Grado::~Insertar_Grado()
{
	delete ui;
}
