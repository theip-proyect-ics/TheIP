/********************************************************************************
** Form generated from reading UI file 'gestionar_profesores.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAR_PROFESORES_H
#define UI_GESTIONAR_PROFESORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Profesores
{
public:
	QPushButton *pushButton;

	void setupUi(QDialog *Gestionar_Profesores)
	{
		if (Gestionar_Profesores->objectName().isEmpty())
			Gestionar_Profesores->setObjectName(QString::fromUtf8("Gestionar_Profesores"));
		Gestionar_Profesores->resize(400, 300);
		pushButton = new QPushButton(Gestionar_Profesores);
		pushButton->setObjectName(QString::fromUtf8("pushButton"));
		pushButton->setGeometry(QRect(370, 10, 21, 23));

		retranslateUi(Gestionar_Profesores);
		QObject::connect(pushButton, SIGNAL(clicked()), Gestionar_Profesores, SLOT(close()));

		QMetaObject::connectSlotsByName(Gestionar_Profesores);
	} // setupUi

	void retranslateUi(QDialog *Gestionar_Grados)
	{
		Gestionar_Grados->setWindowTitle(QApplication::translate("Gestionar_Profesores", "Gestionar Profesores", nullptr));
		pushButton->setText(QApplication::translate("Gestionar_Profesores", "<", nullptr));
	} // retranslateUi

};

namespace Ui {
	class Gestionar_Profesores : public Ui_Gestionar_Profesores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_PROFESORES_H
