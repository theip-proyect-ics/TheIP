#ifndef MODIFICAR_PROFESOR_H
#define MODIFICAR_PROFESOR_H

#include <QDialog>

namespace Ui {
	class Modificar_Profesor;
}

class Modificar_Profesor : public QDialog
{
	Q_OBJECT

public:
	explicit Modificar_Profesor(QWidget *parent = nullptr);
	~Modificar_Profesor();

private:
	Ui::Modificar_Profesor *ui;
};

#endif // MODIFICAR_PROFESOR_H