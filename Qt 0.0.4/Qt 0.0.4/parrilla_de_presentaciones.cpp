#include "parrilla_de_presentaciones.h"
#include "ui_parrilla_de_presentaciones.h"
#include "generar_parrilla.h"
#include "ver_parrilla.h"
#include "buscar_parrilla.h"

Parrilla_De_Presentaciones::Parrilla_De_Presentaciones(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Parrilla_De_Presentaciones)
{
	ui->setupUi(this);
}

void Parrilla_De_Presentaciones::on_Generar_clicked()
{
	Generar_Parrilla gen_parrilla;
	gen_parrilla.exec();
}

void Parrilla_De_Presentaciones::on_Ver_clicked()
{
	Ver_Parrilla ver_parrilla;
	ver_parrilla.exec();
}

void Parrilla_De_Presentaciones::on_Buscar_clicked()
{
	Buscar_Parrilla busc_parrilla;
	busc_parrilla.exec();
}

Parrilla_De_Presentaciones::~Parrilla_De_Presentaciones()
{
	delete ui;
}
