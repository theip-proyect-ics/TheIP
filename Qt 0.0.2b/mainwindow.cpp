#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include "importar_bd.h"
#include "menu_principal.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MW_boton_gestion_clicked()
{
	hide();
    Menu_Principal menu_princ;
    menu_princ.exec();
    show();
}

void MainWindow::on_MW_boton_importar_clicked()
{
    hide();
   // Importar_BD w;
   // w.exec();
    this->show();
}
