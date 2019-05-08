/********************************************************************************
** Form generated from reading UI file 'gestionar_profesores.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAR_PROFESORES_H
#define UI_GESTIONAR_PROFESORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Profesores
{
public:
    QListWidget *listWidget_2;
    QPushButton *Insertar;
    QPushButton *Modificar;
    QPushButton *Eliminar;
    QPushButton *pushButton_4;
    QPushButton *Tutorias;
    QTextEdit *textEdit;

    void setupUi(QDialog *Gestionar_Profesores)
    {
        if (Gestionar_Profesores->objectName().isEmpty())
            Gestionar_Profesores->setObjectName(QString::fromUtf8("Gestionar_Profesores"));
        Gestionar_Profesores->resize(400, 300);
        listWidget_2 = new QListWidget(Gestionar_Profesores);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 50, 256, 211));
        Insertar = new QPushButton(Gestionar_Profesores);
        Insertar->setObjectName(QString::fromUtf8("Insertar"));
        Insertar->setGeometry(QRect(290, 70, 93, 28));
        Modificar = new QPushButton(Gestionar_Profesores);
        Modificar->setObjectName(QString::fromUtf8("Modificar"));
        Modificar->setGeometry(QRect(290, 120, 93, 28));
        Eliminar = new QPushButton(Gestionar_Profesores);
        Eliminar->setObjectName(QString::fromUtf8("Eliminar"));
        Eliminar->setGeometry(QRect(290, 170, 93, 28));
        pushButton_4 = new QPushButton(Gestionar_Profesores);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(370, 10, 21, 23));
        Tutorias = new QPushButton(Gestionar_Profesores);
        Tutorias->setObjectName(QString::fromUtf8("Tutorias"));
        Tutorias->setGeometry(QRect(290, 220, 93, 28));
        textEdit = new QTextEdit(Gestionar_Profesores);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 10, 131, 31));

        retranslateUi(Gestionar_Profesores);
        QObject::connect(pushButton_4, SIGNAL(clicked()), Gestionar_Profesores, SLOT(close()));

        QMetaObject::connectSlotsByName(Gestionar_Profesores);
    } // setupUi

    void retranslateUi(QDialog *Gestionar_Profesores)
    {
        Gestionar_Profesores->setWindowTitle(QApplication::translate("Gestionar_Profesores", "Gestionar Profesores", nullptr));
        Insertar->setText(QApplication::translate("Gestionar_Profesores", "Insertar", nullptr));
        Modificar->setText(QApplication::translate("Gestionar_Profesores", "Modificar", nullptr));
        Eliminar->setText(QApplication::translate("Gestionar_Profesores", "Eliminar", nullptr));
        pushButton_4->setText(QApplication::translate("Gestionar_Profesores", "<", nullptr));
        Tutorias->setText(QApplication::translate("Gestionar_Profesores", "Tutor\303\255as", nullptr));
        textEdit->setHtml(QApplication::translate("Gestionar_Profesores", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">BARRA DE BUSCAR</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestionar_Profesores: public Ui_Gestionar_Profesores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_PROFESORES_H
