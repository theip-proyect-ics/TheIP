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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Alumnos
{
public:
    QPushButton *pushButton;
    QPushButton *Insertar;
    QPushButton *Modificar;
    QPushButton *Eliminar;
    QListWidget *listWidget;
    QPushButton *Tutorias;
    QTextEdit *textEdit;

    void setupUi(QDialog *Gestionar_Alumnos)
    {
        if (Gestionar_Alumnos->objectName().isEmpty())
            Gestionar_Alumnos->setObjectName(QString::fromUtf8("Gestionar_Alumnos"));
        Gestionar_Alumnos->resize(400, 300);
        pushButton = new QPushButton(Gestionar_Alumnos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));
        pushButton->setFocusPolicy(Qt::TabFocus);
        Insertar = new QPushButton(Gestionar_Alumnos);
        Insertar->setObjectName(QString::fromUtf8("Insertar"));
        Insertar->setGeometry(QRect(290, 70, 93, 28));
        Insertar->setFocusPolicy(Qt::TabFocus);
        Modificar = new QPushButton(Gestionar_Alumnos);
        Modificar->setObjectName(QString::fromUtf8("Modificar"));
        Modificar->setGeometry(QRect(290, 120, 93, 28));
        Modificar->setFocusPolicy(Qt::TabFocus);
        Eliminar = new QPushButton(Gestionar_Alumnos);
        Eliminar->setObjectName(QString::fromUtf8("Eliminar"));
        Eliminar->setGeometry(QRect(290, 170, 93, 28));
        Eliminar->setFocusPolicy(Qt::TabFocus);
        listWidget = new QListWidget(Gestionar_Alumnos);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 256, 211));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setFocusPolicy(Qt::NoFocus);
        Tutorias = new QPushButton(Gestionar_Alumnos);
        Tutorias->setObjectName(QString::fromUtf8("Tutorias"));
        Tutorias->setGeometry(QRect(290, 220, 93, 28));
        Tutorias->setFocusPolicy(Qt::TabFocus);
        textEdit = new QTextEdit(Gestionar_Alumnos);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 10, 131, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(9);
        textEdit->setFont(font);
        textEdit->setFocusPolicy(Qt::TabFocus);
        textEdit->setInputMethodHints(Qt::ImhNone);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setTabChangesFocus(true);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        QWidget::setTabOrder(textEdit, pushButton);
        QWidget::setTabOrder(pushButton, Insertar);
        QWidget::setTabOrder(Insertar, Modificar);
        QWidget::setTabOrder(Modificar, Eliminar);
        QWidget::setTabOrder(Eliminar, Tutorias);

        retranslateUi(Gestionar_Alumnos);
        QObject::connect(pushButton, SIGNAL(clicked()), Gestionar_Alumnos, SLOT(close()));

        QMetaObject::connectSlotsByName(Gestionar_Alumnos);
    } // setupUi

    void retranslateUi(QDialog *Gestionar_Alumnos)
    {
        Gestionar_Alumnos->setWindowTitle(QApplication::translate("Gestionar_Alumnos", "Gestionar Alumnos", nullptr));
        pushButton->setText(QApplication::translate("Gestionar_Alumnos", "<", nullptr));
        Insertar->setText(QApplication::translate("Gestionar_Alumnos", "Insertar", nullptr));
        Modificar->setText(QApplication::translate("Gestionar_Alumnos", "Modificar", nullptr));
        Eliminar->setText(QApplication::translate("Gestionar_Alumnos", "Eliminar", nullptr));
        Tutorias->setText(QApplication::translate("Gestionar_Alumnos", "Tutor\303\255as", nullptr));
        textEdit->setHtml(QApplication::translate("Gestionar_Alumnos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("Gestionar_Alumnos", "BARRA DE BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestionar_Alumnos: public Ui_Gestionar_Alumnos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_ALUMNOS_H
