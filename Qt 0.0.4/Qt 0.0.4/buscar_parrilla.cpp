#include "buscar_parrilla.h"
#include "ui_buscar_parrilla.h"

Buscar_Parrilla::Buscar_Parrilla(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Buscar_Parrilla)
{
	ui->setupUi(this);
}

Buscar_Parrilla::~Buscar_Parrilla()
{
	delete ui;
}
