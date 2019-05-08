#include "insertar_profesor.h"
#include "ui_insertar_profesor.h"

Insertar_Profesor::Insertar_Profesor(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Insertar_Profesor)
{
	ui->setupUi(this);
}

Insertar_Profesor::~Insertar_Profesor()
{
	delete ui;
}
