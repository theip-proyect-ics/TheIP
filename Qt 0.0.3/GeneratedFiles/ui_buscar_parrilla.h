/********************************************************************************
** Form generated from reading UI file 'buscar_parrilla.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAR_PARRILLA_H
#define UI_BUSCAR_PARRILLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Buscar_Parrilla
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Buscar_Parrilla)
    {
        if (Buscar_Parrilla->objectName().isEmpty())
            Buscar_Parrilla->setObjectName(QString::fromUtf8("Buscar_Parrilla"));
        Buscar_Parrilla->resize(400, 300);
        pushButton = new QPushButton(Buscar_Parrilla);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Buscar_Parrilla);
        QObject::connect(pushButton, SIGNAL(clicked()), Buscar_Parrilla, SLOT(close()));

        QMetaObject::connectSlotsByName(Buscar_Parrilla);
    } // setupUi

    void retranslateUi(QDialog *Buscar_Parrilla)
    {
        Buscar_Parrilla->setWindowTitle(QApplication::translate("Buscar_Parrilla", "Buscar Parrilla", nullptr));
        pushButton->setText(QApplication::translate("Buscar_Parrilla", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Buscar_Parrilla: public Ui_Buscar_Parrilla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_PARRILLA_H
