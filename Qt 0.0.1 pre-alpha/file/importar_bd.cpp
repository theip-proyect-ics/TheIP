#include "importar_bd.h"
#include "ui_importar_bd.h"

Importar_BD::Importar_BD(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Importar_BD)
{
  ui->setupUi(this);
  QString sPath="C:/";
  DirModel = new QFileSystemModel(this);
  DirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
  DirModel->setRootPath(sPath);
  ui->treeView->setModel(DirModel);
  FileModel = new QFileSystemModel(this);
  FileModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
  FileModel->setRootPath(sPath);
  ui->list->setModel(FileModel);

}

Importar_BD::~Importar_BD()
{
  delete ui;
}

void Importar_BD::on_treeView_clicked(const QModelIndex &index)
{
  QString sPath= DirModel->fileInfo(index).absoluteFilePath();
  ui->list->setRootIndex(FileModel->setRootPath(sPath));
}


void Importar_BD::on_list_doubleClicked(const QModelIndex &index)
{
    QString sPath= FileModel->fileInfo(index).absoluteFilePath();
    ui->plainTextEdit->setPlainText(sPath);
}

void Importar_BD::on_seleccionar_clicked()
{
    ui->plainTextEdit->selectAll();
    ui->plainTextEdit->copy();
    close();
}


