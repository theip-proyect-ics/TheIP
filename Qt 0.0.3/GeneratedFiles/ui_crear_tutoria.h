/********************************************************************************
** Form generated from reading UI file 'crear_tutoria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAR_TUTORIA_H
#define UI_CREAR_TUTORIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Crear_Tutoria
{
public:
    QPushButton *pushButton_2;

    void setupUi(QDialog *Crear_Tutoria)
    {
        if (Crear_Tutoria->objectName().isEmpty())
            Crear_Tutoria->setObjectName(QString::fromUtf8("Crear_Tutoria"));
        Crear_Tutoria->resize(400, 300);
        pushButton_2 = new QPushButton(Crear_Tutoria);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Crear_Tutoria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Crear_Tutoria, SLOT(close()));

        QMetaObject::connectSlotsByName(Crear_Tutoria);
    } // setupUi

    void retranslateUi(QDialog *Crear_Tutoria)
    {
        Crear_Tutoria->setWindowTitle(QApplication::translate("Crear_Tutoria", "Crear Tutoria", nullptr));
        pushButton_2->setText(QApplication::translate("Crear_Tutoria", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Crear_Tutoria: public Ui_Crear_Tutoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAR_TUTORIA_H
