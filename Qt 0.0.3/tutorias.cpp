#include "tutorias.h"
#include "ui_tutorias.h"
#include "crear_tutoria.h"
#include "eliminar_tutoria.h"
#include "modificar_tutoria.h"

Tutorias::Tutorias(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Tutorias)
{
	ui->setupUi(this);
}

Tutorias::~Tutorias()
{
	delete ui;
}


void Tutorias::on_Crear_clicked()
{
    Crear_Tutoria crea_tutoria;
    crea_tutoria.exec();
}

void Tutorias::on_Modificar_clicked()
{
    Modificar_Tutoria mod_tutoria;
    mod_tutoria.exec();
}

void Tutorias::on_Eliminar_clicked()
{
    Eliminar_Tutoria elim_tutoria;
    elim_tutoria.exec();
}
