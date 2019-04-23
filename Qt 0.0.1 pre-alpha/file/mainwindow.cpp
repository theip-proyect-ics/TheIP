#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

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


void MainWindow::on_paco_clicked()
{
  Dialog nuevo;
  nuevo.setModal(true);
  nuevo.exec();
  ui->lineEdit->selectAll();
  if(ui->lineEdit->hasSelectedText()){
    ui->lineEdit->selectAll();
    ui->lineEdit->del();}
  ui->lineEdit->paste();
}


