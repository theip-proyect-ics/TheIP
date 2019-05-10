/********************************************************************************
** Form generated from reading UI file 'insertar_grado.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTAR_GRADO_H
#define UI_INSERTAR_GRADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Insertar_Grado
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Insertar_Grado)
    {
        if (Insertar_Grado->objectName().isEmpty())
            Insertar_Grado->setObjectName(QString::fromUtf8("Insertar_Grado"));
        Insertar_Grado->resize(400, 300);
        pushButton = new QPushButton(Insertar_Grado);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Insertar_Grado);
        QObject::connect(pushButton, SIGNAL(clicked()), Insertar_Grado, SLOT(close()));

        QMetaObject::connectSlotsByName(Insertar_Grado);
    } // setupUi

    void retranslateUi(QDialog *Insertar_Grado)
    {
        Insertar_Grado->setWindowTitle(QApplication::translate("Insertar_Grado", "Insertar Grado", nullptr));
        pushButton->setText(QApplication::translate("Insertar_Grado", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insertar_Grado: public Ui_Insertar_Grado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTAR_GRADO_H
