#include "gestionar_grados.h"
#include "ui_gestionar_grados.h"
#include "insertar_grado.h"
#include "eliminar_grado.h"

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

void Gestionar_Grados::on_Insertar_clicked()
{
    Insertar_Grado inst_grado;
    inst_grado.exec();
}

void Gestionar_Grados::on_Eliminar_clicked()
{
    Eliminar_Grado elim_grado;
    elim_grado.exec();
}

