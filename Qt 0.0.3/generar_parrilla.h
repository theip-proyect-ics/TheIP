#ifndef GENERAR_PARRILLA_H
#define GENERAR_PARRILLA_H

#include <QDialog>

namespace Ui {
	class Generar_Parrilla;
}

class Generar_Parrilla : public QDialog
{
	Q_OBJECT

public:
	explicit Generar_Parrilla(QWidget *parent = nullptr);
	~Generar_Parrilla();

private:
	Ui::Generar_Parrilla *ui;
};

#endif // GENERAR_PARRILLA_H