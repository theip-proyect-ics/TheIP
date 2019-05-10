/********************************************************************************
** Form generated from reading UI file 'eliminar_alumno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_ALUMNO_H
#define UI_ELIMINAR_ALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Eliminar_Alumno
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Eliminar_Alumno)
    {
        if (Eliminar_Alumno->objectName().isEmpty())
            Eliminar_Alumno->setObjectName(QString::fromUtf8("Eliminar_Alumno"));
        Eliminar_Alumno->resize(400, 300);
        pushButton = new QPushButton(Eliminar_Alumno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Eliminar_Alumno);
        QObject::connect(pushButton, SIGNAL(clicked()), Eliminar_Alumno, SLOT(close()));

        QMetaObject::connectSlotsByName(Eliminar_Alumno);
    } // setupUi

    void retranslateUi(QDialog *Eliminar_Alumno)
    {
        Eliminar_Alumno->setWindowTitle(QApplication::translate("Eliminar_Alumno", "Eliminar Alumno", nullptr));
        pushButton->setText(QApplication::translate("Eliminar_Alumno", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminar_Alumno: public Ui_Eliminar_Alumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_ALUMNO_H
