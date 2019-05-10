#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H

#include <QDialog>

namespace Ui {
class Menu_Principal;
}

class Menu_Principal : public QDialog
{
    Q_OBJECT

public:
    explicit Menu_Principal(QWidget *parent = nullptr);
    ~Menu_Principal();

private slots:
    void on_Gestionar_Alumnos_clicked();

    void on_Gestionar_Profesores_clicked();

    void on_Gestionar_Grados_clicked();

    void on_Generar_Parrilla_clicked();

private:
    Ui::Menu_Principal *ui;
};

#endif // MENU_PRINCIPAL_H
