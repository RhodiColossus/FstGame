#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
     void play(bool gamer);




private:

    Ui::Dialog *ui;

private slots:
    void krest_drow();
    void nol_drow();

};

#endif // DIALOG_H
