#include "crear_tutoria.h"
#include "ui_crear_tutoria.h"

Crear_Tutoria::Crear_Tutoria(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Crear_Tutoria)
{
	ui->setupUi(this);
}

Crear_Tutoria::~Crear_Tutoria()
{
	delete ui;
}
