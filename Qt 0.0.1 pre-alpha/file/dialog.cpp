#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
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

Dialog::~Dialog()
{
  delete ui;
}

void Dialog::on_treeView_clicked(const QModelIndex &index)
{
  QString sPath= DirModel->fileInfo(index).absoluteFilePath();
  ui->list->setRootIndex(FileModel->setRootPath(sPath));
}


void Dialog::on_list_doubleClicked(const QModelIndex &index)
{
    QString sPath= FileModel->fileInfo(index).absoluteFilePath();
    ui->plainTextEdit->setPlainText(sPath);
}

void Dialog::on_seleccionar_clicked()
{
    ui->plainTextEdit->selectAll();
    ui->plainTextEdit->copy();
    close();
}


