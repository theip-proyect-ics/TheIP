/********************************************************************************
** Form generated from reading UI file 'eliminar_grado.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_GRADO_H
#define UI_ELIMINAR_GRADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Eliminar_Grado
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Eliminar_Grado)
    {
        if (Eliminar_Grado->objectName().isEmpty())
            Eliminar_Grado->setObjectName(QString::fromUtf8("Eliminar_Grado"));
        Eliminar_Grado->resize(400, 300);
        pushButton = new QPushButton(Eliminar_Grado);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Eliminar_Grado);
        QObject::connect(pushButton, SIGNAL(clicked()), Eliminar_Grado, SLOT(close()));

        QMetaObject::connectSlotsByName(Eliminar_Grado);
    } // setupUi

    void retranslateUi(QDialog *Eliminar_Grado)
    {
        Eliminar_Grado->setWindowTitle(QApplication::translate("Eliminar_Grado", "Eliminar Grado", nullptr));
        pushButton->setText(QApplication::translate("Eliminar_Grado", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminar_Grado: public Ui_Eliminar_Grado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_GRADO_H
