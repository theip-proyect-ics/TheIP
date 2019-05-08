#ifndef ELIMINAR_GRADO_H
#define ELIMINAR_GRADO_H

#include <QDialog>

namespace Ui {
	class Eliminar_Grado;
}

class Eliminar_Grado : public QDialog
{
	Q_OBJECT

public:
	explicit Eliminar_Grado(QWidget *parent = nullptr);
	~Eliminar_Grado();

private:
	Ui::Eliminar_Grado *ui;
};

#endif // ELIMINAR_GRADO_H