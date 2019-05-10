#ifndef INSERTAR_GRADO_H
#define INSERTAR_GRADO_H

#include <QDialog>

namespace Ui {
	class Insertar_Grado;
}

class Insertar_Grado : public QDialog
{
	Q_OBJECT

public:
	explicit Insertar_Grado(QWidget *parent = nullptr);
	~Insertar_Grado();

private:
	Ui::Insertar_Grado *ui;
};

#endif // INSERTAR_GRADO_H