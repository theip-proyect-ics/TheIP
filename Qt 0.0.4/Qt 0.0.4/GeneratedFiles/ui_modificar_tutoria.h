/********************************************************************************
** Form generated from reading UI file 'modificar_tutoria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_TUTORIA_H
#define UI_MODIFICAR_TUTORIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Modificar_Tutoria
{
public:
    QPushButton *pushButton_2;

    void setupUi(QDialog *Modificar_Tutoria)
    {
        if (Modificar_Tutoria->objectName().isEmpty())
            Modificar_Tutoria->setObjectName(QString::fromUtf8("Modificar_Tutoria"));
        Modificar_Tutoria->resize(400, 300);
        pushButton_2 = new QPushButton(Modificar_Tutoria);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Modificar_Tutoria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Modificar_Tutoria, SLOT(close()));

        QMetaObject::connectSlotsByName(Modificar_Tutoria);
    } // setupUi

    void retranslateUi(QDialog *Modificar_Tutoria)
    {
        Modificar_Tutoria->setWindowTitle(QApplication::translate("Modificar_Tutoria", "Modificar Tutoria", nullptr));
        pushButton_2->setText(QApplication::translate("Modificar_Tutoria", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modificar_Tutoria: public Ui_Modificar_Tutoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_TUTORIA_H
