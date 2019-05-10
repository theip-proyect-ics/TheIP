/********************************************************************************
** Form generated from reading UI file 'modificar_alumno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_ALUMNO_H
#define UI_MODIFICAR_ALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Modificar_Alumno
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Modificar_Alumno)
    {
        if (Modificar_Alumno->objectName().isEmpty())
            Modificar_Alumno->setObjectName(QString::fromUtf8("Modificar_Alumno"));
        Modificar_Alumno->resize(400, 300);
        pushButton = new QPushButton(Modificar_Alumno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Modificar_Alumno);
        QObject::connect(pushButton, SIGNAL(clicked()), Modificar_Alumno, SLOT(close()));

        QMetaObject::connectSlotsByName(Modificar_Alumno);
    } // setupUi

    void retranslateUi(QDialog *Modificar_Alumno)
    {
        Modificar_Alumno->setWindowTitle(QApplication::translate("Modificar_Alumno", "Modificar Alumno", nullptr));
        pushButton->setText(QApplication::translate("Modificar_Alumno", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modificar_Alumno: public Ui_Modificar_Alumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_ALUMNO_H
