#ifndef BUSCAR_PARRILLA_H
#define BUSCAR_PARRILLA_H

#include <QDialog>

namespace Ui {
	class Buscar_Parrilla;
}

class Buscar_Parrilla : public QDialog
{
	Q_OBJECT

public:
	explicit Buscar_Parrilla(QWidget *parent = nullptr);
	~Buscar_Parrilla();

private:
	Ui::Buscar_Parrilla *ui;
};

#endif // BUSCAR_PARRILLA_H