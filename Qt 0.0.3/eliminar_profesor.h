#ifndef ELIMINAR_PROFESOR_H
#define ELIMINAR_PROFESOR_H

#include <QDialog>

namespace Ui {
	class Eliminar_Profesor;
}

class Eliminar_Profesor : public QDialog
{
	Q_OBJECT

public:
	explicit Eliminar_Profesor(QWidget *parent = nullptr);
	~Eliminar_Profesor();

private:
	Ui::Eliminar_Profesor *ui;
};

#endif // ELIMINAR_PROFESOR_H