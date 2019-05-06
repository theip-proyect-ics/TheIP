#include "generar_parrilla.h"
#include "ui_generar_parrilla.h"

Generar_Parrilla::Generar_Parrilla(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Generar_Parrilla)
{
	ui->setupUi(this);
}

Generar_Parrilla::~Generar_Parrilla()
{
	delete ui;
}
