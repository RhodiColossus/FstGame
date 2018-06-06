#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->sq_one_one->setIcon(QIcon(":/new/prefix1/lus"));
    ui->sq_one_one->setFixedSize(50,50);
    ui->sq_one_one->setIconSize(QSize(50,50));

}
Dialog::~Dialog()
{
    delete ui;
}
