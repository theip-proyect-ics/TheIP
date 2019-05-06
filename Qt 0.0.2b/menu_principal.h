#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H

#include <QDialog>

namespace Ui {
class Menu_Principal;
}

class Menu_Principal : public QDialog
{
    Q_OBJECT

public:
    explicit Menu_Principal(QWidget *parent = nullptr);
    ~Menu_Principal();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

	void on_pushButton_3_clicked();

	void on_pushButton_4_clicked();
private:
    Ui::Menu_Principal *ui;
};

#endif // MENU_PRINCIPAL_H
