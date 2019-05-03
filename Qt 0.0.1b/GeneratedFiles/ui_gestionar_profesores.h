/********************************************************************************
** Form generated from reading UI file 'gestionar_profesores.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAR_PROFESORES_H
#define UI_GESTIONAR_PROFESORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Profesores
{
public:

    void setupUi(QDialog *Gestionar_Profesores)
    {
        if (Gestionar_Profesores->objectName().isEmpty())
            Gestionar_Profesores->setObjectName(QString::fromUtf8("Gestionar_Profesores"));
        Gestionar_Profesores->resize(400, 300);

        retranslateUi(Gestionar_Profesores);

        QMetaObject::connectSlotsByName(Gestionar_Profesores);
    } // setupUi

    void retranslateUi(QDialog *Gestionar_Profesores)
    {
        Gestionar_Profesores->setWindowTitle(QApplication::translate("Gestionar_Profesores", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestionar_Profesores: public Ui_Gestionar_Profesores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_PROFESORES_H
