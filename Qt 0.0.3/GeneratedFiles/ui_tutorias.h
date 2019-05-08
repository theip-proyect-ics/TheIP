/********************************************************************************
** Form generated from reading UI file 'tutorias.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAS_H
#define UI_TUTORIAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tutorias
{
public:
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QPushButton *Crear;
    QPushButton *Modificar;
    QPushButton *Eliminar;

    void setupUi(QDialog *Tutorias)
    {
        if (Tutorias->objectName().isEmpty())
            Tutorias->setObjectName(QString::fromUtf8("Tutorias"));
        Tutorias->resize(400, 300);
        pushButton_2 = new QPushButton(Tutorias);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 10, 21, 23));
        listWidget = new QListWidget(Tutorias);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 256, 201));
        Crear = new QPushButton(Tutorias);
        Crear->setObjectName(QString::fromUtf8("Crear"));
        Crear->setGeometry(QRect(290, 80, 81, 24));
        Modificar = new QPushButton(Tutorias);
        Modificar->setObjectName(QString::fromUtf8("Modificar"));
        Modificar->setGeometry(QRect(290, 140, 81, 24));
        Eliminar = new QPushButton(Tutorias);
        Eliminar->setObjectName(QString::fromUtf8("Eliminar"));
        Eliminar->setGeometry(QRect(290, 200, 81, 24));

        retranslateUi(Tutorias);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Tutorias, SLOT(close()));

        QMetaObject::connectSlotsByName(Tutorias);
    } // setupUi

    void retranslateUi(QDialog *Tutorias)
    {
        Tutorias->setWindowTitle(QApplication::translate("Tutorias", "Tutorias", nullptr));
        pushButton_2->setText(QApplication::translate("Tutorias", "<", nullptr));
        Crear->setText(QApplication::translate("Tutorias", "Crear", nullptr));
        Modificar->setText(QApplication::translate("Tutorias", "Modificar", nullptr));
        Eliminar->setText(QApplication::translate("Tutorias", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tutorias: public Ui_Tutorias {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAS_H
