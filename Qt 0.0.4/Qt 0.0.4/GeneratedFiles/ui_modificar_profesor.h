/********************************************************************************
** Form generated from reading UI file 'modificar_profesor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_PROFESOR_H
#define UI_MODIFICAR_PROFESOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Modificar_Profesor
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Modificar_Profesor)
    {
        if (Modificar_Profesor->objectName().isEmpty())
            Modificar_Profesor->setObjectName(QString::fromUtf8("Modificar_Profesor"));
        Modificar_Profesor->resize(400, 300);
        pushButton = new QPushButton(Modificar_Profesor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Modificar_Profesor);
        QObject::connect(pushButton, SIGNAL(clicked()), Modificar_Profesor, SLOT(close()));

        QMetaObject::connectSlotsByName(Modificar_Profesor);
    } // setupUi

    void retranslateUi(QDialog *Modificar_Profesor)
    {
        Modificar_Profesor->setWindowTitle(QApplication::translate("Modificar_Profesor", "Modificar Profesor", nullptr));
        pushButton->setText(QApplication::translate("Modificar_Profesor", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modificar_Profesor: public Ui_Modificar_Profesor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_PROFESOR_H
