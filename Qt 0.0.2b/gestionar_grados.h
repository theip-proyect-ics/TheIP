#ifndef GESTIONAR_GRADOS_H
#define GESTIONAR_GRADOS_H

#include <QDialog>

namespace Ui {
	class Gestionar_Grados;
}

class Gestionar_Grados : public QDialog
{
	Q_OBJECT

public:
	explicit Gestionar_Grados(QWidget *parent = nullptr);
	~Gestionar_Grados();

private:
	Ui::Gestionar_Grados *ui;
};

#endif // GESTIONAR_GRADOS_H