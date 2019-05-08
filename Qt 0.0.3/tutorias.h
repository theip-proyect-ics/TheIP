#ifndef TUTORIAS_H
#define TUTORIAS_H

#include <QDialog>

namespace Ui {
	class Tutorias;
}

class Tutorias : public QDialog
{
	Q_OBJECT

public:
	explicit Tutorias(QWidget *parent = nullptr);
	~Tutorias();

private slots:
    void on_Crear_clicked();

    void on_Modificar_clicked();

    void on_Eliminar_clicked();

private:
	Ui::Tutorias *ui;
};

#endif // TUTORIAS_H
