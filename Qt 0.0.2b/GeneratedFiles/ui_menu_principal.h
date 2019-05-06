/********************************************************************************
** Form generated from reading UI file 'menu_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_PRINCIPAL_H
#define UI_MENU_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu_Principal
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Menu_Principal)
    {
        if (Menu_Principal->objectName().isEmpty())
            Menu_Principal->setObjectName(QString::fromUtf8("Menu_Principal"));
        Menu_Principal->resize(400, 300);
        widget = new QWidget(Menu_Principal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 80, 241, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(Menu_Principal);

        QMetaObject::connectSlotsByName(Menu_Principal);
    } // setupUi

    void retranslateUi(QDialog *Menu_Principal)
    {
        Menu_Principal->setWindowTitle(QApplication::translate("Menu_Principal", "Menu Principal", nullptr));
        pushButton->setText(QApplication::translate("Menu_Principal", "Gestionar Alumnos", nullptr));
        pushButton_2->setText(QApplication::translate("Menu_Principal", "Gestionar Profesores", nullptr));
        pushButton_3->setText(QApplication::translate("Menu_Principal", "Gestionar Grados", nullptr));
        pushButton_4->setText(QApplication::translate("Menu_Principal", "Generar Parrilla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_Principal: public Ui_Menu_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_PRINCIPAL_H
