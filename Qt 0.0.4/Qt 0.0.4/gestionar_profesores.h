#ifndef GESTIONAR_PROFESORES_H
#define GESTIONAR_PROFESORES_H

#include <QDialog>

namespace Ui {
class Gestionar_Profesores;
}

class Gestionar_Profesores : public QDialog
{
    Q_OBJECT

public:
    explicit Gestionar_Profesores(QWidget *parent = nullptr);
    ~Gestionar_Profesores();

private slots:
    void on_Insertar_clicked();

    void on_Modificar_clicked();

    void on_Eliminar_clicked();

    void on_Tutorias_clicked();

private:
    Ui::Gestionar_Profesores *ui;
};

#endif // GESTIONAR_PROFESORES_H
