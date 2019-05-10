#ifndef CREAR_TUTORIA_H
#define CREAR_TUTORIA_H

#include <QDialog>

namespace Ui {
	class Crear_Tutoria;
}

class Crear_Tutoria : public QDialog
{
	Q_OBJECT

public:
	explicit Crear_Tutoria(QWidget *parent = nullptr);
	~Crear_Tutoria();

private:
	Ui::Crear_Tutoria *ui;
};

#endif // CREAR_TUTORIA_H