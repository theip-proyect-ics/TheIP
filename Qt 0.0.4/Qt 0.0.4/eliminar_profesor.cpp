#include "eliminar_profesor.h"
#include "ui_eliminar_profesor.h"

Eliminar_Profesor::Eliminar_Profesor(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Eliminar_Profesor)
{
	ui->setupUi(this);
}

Eliminar_Profesor::~Eliminar_Profesor()
{
	delete ui;
}
