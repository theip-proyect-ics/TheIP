/********************************************************************************
** Form generated from reading UI file 'menu_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_PRINCIPAL_H
#define UI_MENU_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_Principal
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Gestionar_Alumnos;
    QPushButton *Gestionar_Profesores;
    QPushButton *Gestionar_Grados;
    QPushButton *Generar_Parrilla;

    void setupUi(QDialog *Menu_Principal)
    {
        if (Menu_Principal->objectName().isEmpty())
            Menu_Principal->setObjectName(QString::fromUtf8("Menu_Principal"));
        Menu_Principal->resize(400, 300);
        layoutWidget = new QWidget(Menu_Principal);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 80, 241, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Gestionar_Alumnos = new QPushButton(layoutWidget);
        Gestionar_Alumnos->setObjectName(QString::fromUtf8("Gestionar_Alumnos"));

        verticalLayout->addWidget(Gestionar_Alumnos);

        Gestionar_Profesores = new QPushButton(layoutWidget);
        Gestionar_Profesores->setObjectName(QString::fromUtf8("Gestionar_Profesores"));

        verticalLayout->addWidget(Gestionar_Profesores);

        Gestionar_Grados = new QPushButton(layoutWidget);
        Gestionar_Grados->setObjectName(QString::fromUtf8("Gestionar_Grados"));

        verticalLayout->addWidget(Gestionar_Grados);

        Generar_Parrilla = new QPushButton(layoutWidget);
        Generar_Parrilla->setObjectName(QString::fromUtf8("Generar_Parrilla"));

        verticalLayout->addWidget(Generar_Parrilla);


        retranslateUi(Menu_Principal);

        QMetaObject::connectSlotsByName(Menu_Principal);
    } // setupUi

    void retranslateUi(QDialog *Menu_Principal)
    {
        Menu_Principal->setWindowTitle(QApplication::translate("Menu_Principal", "Menu Principal", nullptr));
        Gestionar_Alumnos->setText(QApplication::translate("Menu_Principal", "Gestionar Alumnos", nullptr));
        Gestionar_Profesores->setText(QApplication::translate("Menu_Principal", "Gestionar Profesores", nullptr));
        Gestionar_Grados->setText(QApplication::translate("Menu_Principal", "Gestionar Grados", nullptr));
        Generar_Parrilla->setText(QApplication::translate("Menu_Principal", "Parrilla de Presentaciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_Principal: public Ui_Menu_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_PRINCIPAL_H
