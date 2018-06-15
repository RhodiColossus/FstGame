#include "dialog.h"
#include "ui_dialog.h"
#include <unistd.h>




Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{


    ui->setupUi(this);
    ui->sq_one_one->setFixedSize(50,50);
    ui->sq_one_two->setFixedSize(50,50);
    ui->sq_one_three->setFixedSize(50,50);
    ui->sq_two_one->setFixedSize(50,50);
    ui->sq_two_two->setFixedSize(50,50);
    ui->sq_two_three->setFixedSize(50,50);
    ui->sq_three_one->setFixedSize(50,50);
    ui->sq_three_two->setFixedSize(50,50);
    ui->sq_three_three->setFixedSize(50,50);


    connect(ui->sq_one_one,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_one_two,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_one_three,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_two_one,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_two_two,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_two_three,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_three_one,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_three_two,SIGNAL(clicked()),SLOT(turn()));
    connect(ui->sq_three_three,SIGNAL(clicked()),SLOT(turn()));
}





Dialog::~Dialog()
{
    delete ui;
}


void Dialog::turn(){
    QPushButton* sq_button = (QPushButton*) sender();
       if (gamer == true){
           sq_button->setIcon(QIcon(":/new/prefix1/krestus"));
           sq_button->setIconSize(QSize(50,50));
       }
       else{
           sq_button->setIcon(QIcon(":/new/prefix1/lus"));
           sq_button->setIconSize(QSize(50,50));
       }
       gamer = !gamer;
   }






void Dialog::krest_drow(){
    this->gamer=true;
    QPushButton* sq_button = (QPushButton*) sender();
     sq_button->setIcon(QIcon(":/new/prefix1/krestus"));
     sq_button->setIconSize(QSize(50,50));







}
void Dialog::nol_drow( ){
    this->gamer = false;
    QPushButton* sq_button = (QPushButton*) sender(); 
     sq_button->setIcon(QIcon(":/new/prefix1/lus"));
     sq_button->setIconSize(QSize(50,50));



}




