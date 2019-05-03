#include "menu_principal.h"
#include "ui_menu_principal.h"
    #include "gestionar_alumnos.h"
    #include "gestionar_profesores.h"

#include <QApplication>

Menu_Principal::Menu_Principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu_Principal)
{
    ui->setupUi(this);
}

Menu_Principal::~Menu_Principal()
{
    delete ui;
}

void Menu_Principal::on_pushButton_clicked()
{
    //hide();
    Gestionar_Alumnos gest_alumnos;
	gest_alumnos.exec();
    //show();
}

void Menu_Principal::on_pushButton_2_clicked()
{
    //hide();
    Gestionar_Profesores gest_profesores;
    gest_profesores.exec();
    //this->show();
}
