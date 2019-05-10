/********************************************************************************
** Form generated from reading UI file 'insertar_profesor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTAR_PROFESOR_H
#define UI_INSERTAR_PROFESOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Insertar_Profesor
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Insertar_Profesor)
    {
        if (Insertar_Profesor->objectName().isEmpty())
            Insertar_Profesor->setObjectName(QString::fromUtf8("Insertar_Profesor"));
        Insertar_Profesor->resize(400, 300);
        pushButton = new QPushButton(Insertar_Profesor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Insertar_Profesor);
        QObject::connect(pushButton, SIGNAL(clicked()), Insertar_Profesor, SLOT(close()));

        QMetaObject::connectSlotsByName(Insertar_Profesor);
    } // setupUi

    void retranslateUi(QDialog *Insertar_Profesor)
    {
        Insertar_Profesor->setWindowTitle(QApplication::translate("Insertar_Profesor", "Insertar Profesor", nullptr));
        pushButton->setText(QApplication::translate("Insertar_Profesor", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insertar_Profesor: public Ui_Insertar_Profesor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTAR_PROFESOR_H
