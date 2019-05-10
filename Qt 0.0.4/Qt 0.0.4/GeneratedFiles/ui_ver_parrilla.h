/********************************************************************************
** Form generated from reading UI file 'ver_parrilla.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VER_PARRILLA_H
#define UI_VER_PARRILLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ver_Parrilla
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Ver_Parrilla)
    {
        if (Ver_Parrilla->objectName().isEmpty())
            Ver_Parrilla->setObjectName(QString::fromUtf8("Ver_Parrilla"));
        Ver_Parrilla->resize(400, 300);
        pushButton = new QPushButton(Ver_Parrilla);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Ver_Parrilla);
        QObject::connect(pushButton, SIGNAL(clicked()), Ver_Parrilla, SLOT(close()));

        QMetaObject::connectSlotsByName(Ver_Parrilla);
    } // setupUi

    void retranslateUi(QDialog *Ver_Parrilla)
    {
        Ver_Parrilla->setWindowTitle(QApplication::translate("Ver_Parrilla", "Ver Parrilla", nullptr));
        pushButton->setText(QApplication::translate("Ver_Parrilla", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ver_Parrilla: public Ui_Ver_Parrilla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VER_PARRILLA_H
