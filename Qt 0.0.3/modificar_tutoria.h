#ifndef MODIFICAR_TUTORIA_H
#define MODIFICAR_TUTORIA_H

#include <QDialog>

namespace Ui {
	class Modificar_Tutoria;
}

class Modificar_Tutoria : public QDialog
{
	Q_OBJECT

public:
	explicit Modificar_Tutoria(QWidget *parent = nullptr);
	~Modificar_Tutoria();

private:
	Ui::Modificar_Tutoria *ui;
};

#endif // MODIFICAR_TUTORIA_H