#ifndef MODIFICAR_ALUMNO_H
#define MODIFICAR_ALUMNO_H

#include <QDialog>

namespace Ui {
	class Modificar_Alumno;
}

class Modificar_Alumno : public QDialog
{
	Q_OBJECT

public:
	explicit Modificar_Alumno(QWidget *parent = nullptr);
	~Modificar_Alumno();

private:
	Ui::Modificar_Alumno *ui;
};

#endif // MODIFICAR_ALUMNO_H