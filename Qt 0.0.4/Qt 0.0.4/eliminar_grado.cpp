#include "eliminar_grado.h"
#include "ui_eliminar_grado.h"

Eliminar_Grado::Eliminar_Grado(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Eliminar_Grado)
{
	ui->setupUi(this);
}

Eliminar_Grado::~Eliminar_Grado()
{
	delete ui;
}
