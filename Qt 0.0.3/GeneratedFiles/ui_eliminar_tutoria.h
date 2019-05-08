/********************************************************************************
** Form generated from reading UI file 'eliminar_tutoria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_TUTORIA_H
#define UI_ELIMINAR_TUTORIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Eliminar_Tutoria
{
public:
    QPushButton *pushButton_2;

    void setupUi(QDialog *Eliminar_Tutoria)
    {
        if (Eliminar_Tutoria->objectName().isEmpty())
            Eliminar_Tutoria->setObjectName(QString::fromUtf8("Eliminar_Tutoria"));
        Eliminar_Tutoria->resize(400, 300);
        pushButton_2 = new QPushButton(Eliminar_Tutoria);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Eliminar_Tutoria);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Eliminar_Tutoria, SLOT(close()));

        QMetaObject::connectSlotsByName(Eliminar_Tutoria);
    } // setupUi

    void retranslateUi(QDialog *Eliminar_Tutoria)
    {
        Eliminar_Tutoria->setWindowTitle(QApplication::translate("Eliminar_Tutoria", "Eliminar Tutoria", nullptr));
        pushButton_2->setText(QApplication::translate("Eliminar_Tutoria", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminar_Tutoria: public Ui_Eliminar_Tutoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_TUTORIA_H
