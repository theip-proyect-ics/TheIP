/********************************************************************************
** Form generated from reading UI file 'gestionar_grados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAR_GRADOS_H
#define UI_GESTIONAR_GRADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Grados
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Gestionar_Grados)
    {
        if (Gestionar_Grados->objectName().isEmpty())
			Gestionar_Grados->setObjectName(QString::fromUtf8("Gestionar_Grados"));
		Gestionar_Grados->resize(400, 300);
        pushButton = new QPushButton(Gestionar_Grados);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));

        retranslateUi(Gestionar_Grados);
        QObject::connect(pushButton, SIGNAL(clicked()), Gestionar_Grados, SLOT(close()));

        QMetaObject::connectSlotsByName(Gestionar_Grados);
    } // setupUi

    void retranslateUi(QDialog *Gestionar_Grados)
    {
		Gestionar_Grados->setWindowTitle(QApplication::translate("Gestionar_Grados", "Gestionar Grados", nullptr));
        pushButton->setText(QApplication::translate("Gestionar_Grados", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestionar_Grados : public Ui_Gestionar_Grados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_GRADOS_H
