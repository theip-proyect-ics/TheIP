#ifndef IMPORTAR_BD_H
#define IMPORTAR_BD_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>

#include"mainwindow.h"
#include <qlist.h>
#include <qplaintextedit.h>

namespace Ui {
  class Importar_BD;
}

class Importar_BD : public QDialog
{
  Q_OBJECT

public:
  explicit Importar_BD(QWidget *parent = nullptr);
  ~Importar_BD();
signals:

private slots:
  void on_treeView_clicked(const QModelIndex &index);

  void on_list_doubleClicked(const QModelIndex &index);

  void on_seleccionar_clicked();

  void on_Dialog_destroyed();

private:
  QFileSystemModel *DirModel;
  QFileSystemModel *FileModel;
  Ui::Importar_BD *ui;
};

#endif // IMPORTAR_BD_H
