#ifndef PARRILLA_DE_PRESENTACIONES_H
#define PARRILLA_DE_PRESENTACIONES_H

#include <QDialog>

namespace Ui {
	class Parrilla_De_Presentaciones;
}

class Parrilla_De_Presentaciones : public QDialog
{
	Q_OBJECT

public:
	explicit Parrilla_De_Presentaciones(QWidget *parent = nullptr);
	~Parrilla_De_Presentaciones();

private slots:
	void on_Generar_clicked();

	void on_Ver_clicked();

	void on_Buscar_clicked();
private:
	Ui::Parrilla_De_Presentaciones *ui;
};

#endif // PARRILLA_DE_PRESENTACIONES_H