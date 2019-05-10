#include "ver_parrilla.h"
#include "ui_ver_parrilla.h"

Ver_Parrilla::Ver_Parrilla(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Ver_Parrilla)
{
	ui->setupUi(this);
}

Ver_Parrilla::~Ver_Parrilla()
{
	delete ui;
}
