#ifndef ELIMINAR_ALUMNO_H
#define ELIMINAR_ALUMNO_H

#include <QDialog>

namespace Ui {
	class Eliminar_Alumno;
}

class Eliminar_Alumno : public QDialog
{
	Q_OBJECT

public:
	explicit Eliminar_Alumno(QWidget *parent = nullptr);
	~Eliminar_Alumno();

private:
	Ui::Eliminar_Alumno *ui;
};

#endif // ELIMINAR_ALUMNO_H