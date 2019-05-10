#ifndef GESTIONAR_ALUMNOS_H
#define GESTIONAR_ALUMNOS_H

#include <QDialog>

namespace Ui {
	class Gestionar_Alumnos;
}

class Gestionar_Alumnos : public QDialog
{
    Q_OBJECT

public:
    explicit Gestionar_Alumnos(QWidget *parent = nullptr);
    ~Gestionar_Alumnos();

private slots:
    void on_Insertar_clicked();

    void on_Modificar_clicked();

    void on_Eliminar_clicked();

    void on_Tutorias_clicked();

private:
    Ui::Gestionar_Alumnos *ui;
};

#endif // GESTIONAR_ALUMNOS_H
