/********************************************************************************
** Form generated from reading UI file 'eliminar_profesor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_PROFESOR_H
#define UI_ELIMINAR_PROFESOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Eliminar_Profesor
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Eliminar_Profesor)
    {
        if (Eliminar_Profesor->objectName().isEmpty())
            Eliminar_Profesor->setObjectName(QString::fromUtf8("Eliminar_Profesor"));
        Eliminar_Profesor->resize(400, 300);
        pushButton = new QPushButton(Eliminar_Profesor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Eliminar_Profesor);
        QObject::connect(pushButton, SIGNAL(clicked()), Eliminar_Profesor, SLOT(close()));

        QMetaObject::connectSlotsByName(Eliminar_Profesor);
    } // setupUi

    void retranslateUi(QDialog *Eliminar_Profesor)
    {
        Eliminar_Profesor->setWindowTitle(QApplication::translate("Eliminar_Profesor", "Eliminar Profesor", nullptr));
        pushButton->setText(QApplication::translate("Eliminar_Profesor", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminar_Profesor: public Ui_Eliminar_Profesor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_PROFESOR_H
