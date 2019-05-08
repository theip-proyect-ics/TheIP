#ifndef VER_PARRILLA_H
#define VER_PARRILLA_H

#include <QDialog>

namespace Ui {
	class Ver_Parrilla;
}

class Ver_Parrilla : public QDialog
{
	Q_OBJECT

public:
	explicit Ver_Parrilla(QWidget *parent = nullptr);
	~Ver_Parrilla();

private:
	Ui::Ver_Parrilla *ui;
};

#endif // VER_PARRILLA_H