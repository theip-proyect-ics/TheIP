/********************************************************************************
** Form generated from reading UI file 'parrilla_de_presentaciones.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARRILLA_DE_PRESENTACIONES_H
#define UI_PARRILLA_DE_PRESENTACIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Parrilla_De_Presentaciones
{
public:
    QPushButton *pushButton;
    QPushButton *Generar;
    QPushButton *Ver;
    QPushButton *Buscar;

    void setupUi(QDialog *Parrilla_De_Presentaciones)
    {
        if (Parrilla_De_Presentaciones->objectName().isEmpty())
            Parrilla_De_Presentaciones->setObjectName(QString::fromUtf8("Parrilla_De_Presentaciones"));
        Parrilla_De_Presentaciones->resize(400, 300);
        pushButton = new QPushButton(Parrilla_De_Presentaciones);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));
        Generar = new QPushButton(Parrilla_De_Presentaciones);
        Generar->setObjectName(QString::fromUtf8("Generar"));
        Generar->setGeometry(QRect(140, 80, 111, 24));
        Ver = new QPushButton(Parrilla_De_Presentaciones);
        Ver->setObjectName(QString::fromUtf8("Ver"));
        Ver->setGeometry(QRect(140, 130, 111, 24));
        Buscar = new QPushButton(Parrilla_De_Presentaciones);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));
        Buscar->setGeometry(QRect(140, 180, 111, 24));

        retranslateUi(Parrilla_De_Presentaciones);
        QObject::connect(pushButton, SIGNAL(clicked()), Parrilla_De_Presentaciones, SLOT(close()));

        QMetaObject::connectSlotsByName(Parrilla_De_Presentaciones);
    } // setupUi

    void retranslateUi(QDialog *Parrilla_De_Presentaciones)
    {
        Parrilla_De_Presentaciones->setWindowTitle(QApplication::translate("Parrilla_De_Presentaciones", "Parrilla De Presentaciones", nullptr));
        pushButton->setText(QApplication::translate("Parrilla_De_Presentaciones", "<", nullptr));
        Generar->setText(QApplication::translate("Parrilla_De_Presentaciones", "Generar Parrilla", nullptr));
        Ver->setText(QApplication::translate("Parrilla_De_Presentaciones", "Ver Parrilla", nullptr));
        Buscar->setText(QApplication::translate("Parrilla_De_Presentaciones", "Buscar Parrilla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Parrilla_De_Presentaciones: public Ui_Parrilla_De_Presentaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARRILLA_DE_PRESENTACIONES_H
