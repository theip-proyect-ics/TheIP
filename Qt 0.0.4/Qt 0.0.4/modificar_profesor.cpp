#include "modificar_profesor.h"
#include "ui_modificar_profesor.h"

Modificar_Profesor::Modificar_Profesor(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Modificar_Profesor)
{
	ui->setupUi(this);
}

Modificar_Profesor::~Modificar_Profesor()
{
	delete ui;
}
