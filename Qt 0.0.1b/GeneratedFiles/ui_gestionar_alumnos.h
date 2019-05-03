/********************************************************************************
** Form generated from reading UI file 'gestionar_alumnos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAR_ALUMNOS_H
#define UI_GESTIONAR_ALUMNOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Alumnos
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Gestionar_Alumnos)
    {
        if (Gestionar_Alumnos->objectName().isEmpty())
            Gestionar_Alumnos->setObjectName(QString::fromUtf8("Gestionar_Alumnos"));
        Gestionar_Alumnos->resize(400, 300);
        pushButton = new QPushButton(Gestionar_Alumnos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Gestionar_Alumnos);
        QObject::connect(pushButton, SIGNAL(clicked()), Gestionar_Alumnos, SLOT(close()));

        QMetaObject::connectSlotsByName(Gestionar_Alumnos);
    } // setupUi

    void retranslateUi(QDialog *Gestionar_Alumnos)
    {
        Gestionar_Alumnos->setWindowTitle(QApplication::translate("Gestionar_Alumnos", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Gestionar_Alumnos", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestionar_Alumnos: public Ui_Gestionar_Alumnos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_ALUMNOS_H
