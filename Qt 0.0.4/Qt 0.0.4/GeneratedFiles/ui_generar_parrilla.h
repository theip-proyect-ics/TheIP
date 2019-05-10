/********************************************************************************
** Form generated from reading UI file 'generar_parrilla.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERAR_PARRILLA_H
#define UI_GENERAR_PARRILLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Generar_Parrilla
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Generar_Parrilla)
    {
        if (Generar_Parrilla->objectName().isEmpty())
            Generar_Parrilla->setObjectName(QString::fromUtf8("Generar_Parrilla"));
        Generar_Parrilla->resize(400, 300);
        pushButton = new QPushButton(Generar_Parrilla);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Generar_Parrilla);
        QObject::connect(pushButton, SIGNAL(clicked()), Generar_Parrilla, SLOT(close()));

        QMetaObject::connectSlotsByName(Generar_Parrilla);
    } // setupUi

    void retranslateUi(QDialog *Generar_Parrilla)
    {
        Generar_Parrilla->setWindowTitle(QApplication::translate("Generar_Parrilla", "Generar Parrilla", nullptr));
        pushButton->setText(QApplication::translate("Generar_Parrilla", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Generar_Parrilla: public Ui_Generar_Parrilla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERAR_PARRILLA_H
