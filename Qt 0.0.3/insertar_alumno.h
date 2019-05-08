#ifndef INSERTAR_ALUMNO_H
#define INSERTAR_ALUMNO_H

#include <QDialog>

namespace Ui {
	class Insertar_Alumno;
}

class Insertar_Alumno : public QDialog
{
	Q_OBJECT

public:
	explicit Insertar_Alumno(QWidget *parent = nullptr);
	~Insertar_Alumno();

private:
	Ui::Insertar_Alumno *ui;
};

#endif // INSERTAR_ALUMNO_H