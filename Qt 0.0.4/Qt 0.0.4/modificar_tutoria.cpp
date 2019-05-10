#include "modificar_tutoria.h"
#include "ui_modificar_tutoria.h"

Modificar_Tutoria::Modificar_Tutoria(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Modificar_Tutoria)
{
	ui->setupUi(this);
}

Modificar_Tutoria::~Modificar_Tutoria()
{
	delete ui;
}
