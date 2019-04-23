#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include"mainwindow.h"
#include <qlist.h>
#include <qplaintextedit.h>
namespace Ui {
  class Dialog;
}

class Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog(QWidget *parent = nullptr);
  ~Dialog();
signals:

private slots:
  void on_treeView_clicked(const QModelIndex &index);

  void on_list_doubleClicked(const QModelIndex &index);

  void on_seleccionar_clicked();

  void on_Dialog_destroyed();

private:
  QFileSystemModel *DirModel;
  QFileSystemModel *FileModel;
  Ui::Dialog *ui;
};

#endif // DIALOG_H
