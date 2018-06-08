#include "dialog.h"
#include "ui_dialog.h"
#include <unistd.h>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->sq_one_one->setFixedSize(50,50);
    connect(ui->sq_one_one,SIGNAL(clicked()),SLOT(krest01()));

}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::krest01(){
    ui->sq_one_one->setIcon(QIcon(":/new/prefix1/krestus"));
    ui->sq_one_one->setIconSize(QSize(10,10));
    sleep(1);
    ui->sq_one_one->setIcon(QIcon(":/new/prefix1/krestus"));
    ui->sq_one_one->setIconSize(QSize(20,20));
    sleep(1);
    ui->sq_one_one->setIcon(QIcon(":/new/prefix1/krestus"));
    ui->sq_one_one->setIconSize(QSize(30,30));
    sleep(1);
    ui->sq_one_one->setIcon(QIcon(":/new/prefix1/krestus"));
    ui->sq_one_one->setIconSize(QSize(40,40));
    sleep(1);



}
void Dialog::nol01(){
    ui->sq_one_one->setIcon(QIcon(":/new/prefix1/lus"));
    ui->sq_one_one->setIconSize(QSize(50,50));
}
