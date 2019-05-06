#include "gestionar_grados.h"
#include "ui_gestionar_grados.h"

Gestionar_Grados::Gestionar_Grados(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Gestionar_Grados)
{
	ui->setupUi(this);
}

Gestionar_Grados::~Gestionar_Grados()
{
	delete ui;
}
