/********************************************************************************
** Form generated from reading UI file 'gestionar_grados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONAR_GRADOS_H
#define UI_GESTIONAR_GRADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Gestionar_Grados
{
public:
    QPushButton *pushButton;
    QPushButton *Insertar;
    QPushButton *Eliminar;
    QListWidget *listWidget;
    QTextEdit *textEdit;

    void setupUi(QDialog *Gestionar_Grados)
    {
        if (Gestionar_Grados->objectName().isEmpty())
            Gestionar_Grados->setObjectName(QString::fromUtf8("Gestionar_Grados"));
        Gestionar_Grados->resize(400, 300);
        pushButton = new QPushButton(Gestionar_Grados);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 10, 21, 23));
        pushButton->setFocusPolicy(Qt::TabFocus);
        Insertar = new QPushButton(Gestionar_Grados);
        Insertar->setObjectName(QString::fromUtf8("Insertar"));
        Insertar->setGeometry(QRect(280, 100, 93, 28));
        Insertar->setFocusPolicy(Qt::TabFocus);
        Eliminar = new QPushButton(Gestionar_Grados);
        Eliminar->setObjectName(QString::fromUtf8("Eliminar"));
        Eliminar->setGeometry(QRect(280, 170, 93, 28));
        Eliminar->setFocusPolicy(Qt::WheelFocus);
        listWidget = new QListWidget(Gestionar_Grados);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 256, 201));
        listWidget->setFocusPolicy(Qt::NoFocus);
        textEdit = new QTextEdit(Gestionar_Grados);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 10, 131, 31));
        QFont font;
        font.setPointSize(9);
        textEdit->setFont(font);
        textEdit->setFocusPolicy(Qt::TabFocus);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit->setTabChangesFocus(true);
        textEdit->setLineWrapMode(QTextEdit::NoWrap);
        QWidget::setTabOrder(textEdit, pushButton);
        QWidget::setTabOrder(pushButton, Insertar);
        QWidget::setTabOrder(Insertar, Eliminar);
        QWidget::setTabOrder(Eliminar, listWidget);

        retranslateUi(Gestionar_Grados);
        QObject::connect(pushButton, SIGNAL(clicked()), Gestionar_Grados, SLOT(close()));

        QMetaObject::connectSlotsByName(Gestionar_Grados);
    } // setupUi

    void retranslateUi(QDialog *Gestionar_Grados)
    {
        Gestionar_Grados->setWindowTitle(QApplication::translate("Gestionar_Grados", "Gestionar Grados", nullptr));
        pushButton->setText(QApplication::translate("Gestionar_Grados", "<", nullptr));
        Insertar->setText(QApplication::translate("Gestionar_Grados", "Insertar", nullptr));
        Eliminar->setText(QApplication::translate("Gestionar_Grados", "Eliminar", nullptr));
        textEdit->setHtml(QApplication::translate("Gestionar_Grados", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("Gestionar_Grados", "BARRA DE BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestionar_Grados: public Ui_Gestionar_Grados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONAR_GRADOS_H
