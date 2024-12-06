#include "admin_form.h"
#include "ui_admin_form.h"

admin_form::admin_form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin_form)
{
    ui->setupUi(this);
}

admin_form::~admin_form()
{
    delete ui;
}


void admin_form::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button==ui->pushButton)
        ui->stackedWidget->setCurrentIndex(0);
    else if(button==ui->pushButton_2)
        ui->stackedWidget->setCurrentIndex(1);
    else if(button==ui->pushButton_3)
        ui->stackedWidget->setCurrentIndex(2);
    else if(button==ui->pushButton_4)
        ui->stackedWidget->setCurrentIndex(3);
    int i = 0;
    ui->stackedWidget->widget(i);
}

void admin_form::on_pushButton_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_2_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_3_clicked()
{
    switchPage();
}

void admin_form::on_pushButton_4_clicked()
{
    switchPage();
}
