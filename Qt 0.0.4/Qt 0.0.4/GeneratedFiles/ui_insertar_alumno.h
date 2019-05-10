/********************************************************************************
** Form generated from reading UI file 'insertar_alumno.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTAR_ALUMNO_H
#define UI_INSERTAR_ALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Insertar_Alumno
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Insertar_Alumno)
    {
        if (Insertar_Alumno->objectName().isEmpty())
            Insertar_Alumno->setObjectName(QString::fromUtf8("Insertar_Alumno"));
        Insertar_Alumno->resize(400, 300);
        pushButton = new QPushButton(Insertar_Alumno);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Insertar_Alumno);
        QObject::connect(pushButton, SIGNAL(clicked()), Insertar_Alumno, SLOT(close()));

        QMetaObject::connectSlotsByName(Insertar_Alumno);
    } // setupUi

    void retranslateUi(QDialog *Insertar_Alumno)
    {
        Insertar_Alumno->setWindowTitle(QApplication::translate("Insertar_Alumno", "Insertar Alumno", nullptr));
        pushButton->setText(QApplication::translate("Insertar_Alumno", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insertar_Alumno: public Ui_Insertar_Alumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTAR_ALUMNO_H
