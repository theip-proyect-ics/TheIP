#ifndef ELIMINAR_TUTORIA_H
#define ELIMINAR_TUTORIA_H

#include <QDialog>

namespace Ui {
	class Eliminar_Tutoria;
}

class Eliminar_Tutoria : public QDialog
{
	Q_OBJECT

public:
	explicit Eliminar_Tutoria(QWidget *parent = nullptr);
	~Eliminar_Tutoria();

private:
	Ui::Eliminar_Tutoria *ui;
};

#endif // ELIMINAR_TUTORIA_H