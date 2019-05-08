#ifndef INSERTAR_PROFESOR_H
#define INSERTAR_PROFESOR_H

#include <QDialog>

namespace Ui {
	class Insertar_Profesor;
}

class Insertar_Profesor : public QDialog
{
	Q_OBJECT

public:
	explicit Insertar_Profesor(QWidget *parent = nullptr);
	~Insertar_Profesor();

private:
	Ui::Insertar_Profesor *ui;
};

#endif // INSERTAR_PROFESOR_H