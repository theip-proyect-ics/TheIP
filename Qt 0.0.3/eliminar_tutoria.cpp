#include "eliminar_tutoria.h"
#include "ui_eliminar_tutoria.h"

Eliminar_Tutoria::Eliminar_Tutoria(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Eliminar_Tutoria)
{
	ui->setupUi(this);
}

Eliminar_Tutoria::~Eliminar_Tutoria()
{
	delete ui;
}
