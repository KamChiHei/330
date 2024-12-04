#include "register_form.h"
#include "ui_register_form.h"
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
register_Form::register_Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::register_Form)
{

    // bool static nflag = false;
    // bool static p1flag = false;
    // bool static p2flag = false;
    ui->setupUi(this);

    ui->nametips->hide();
    ui->pwdtips1->hide();
    ui->pwdtips2->hide();
    ui->B1->setEnabled(false);

}

register_Form::~register_Form()
{
    delete ui;
}

void regButtonisOn(Ui::register_Form *ui){
    if(register_Form::nflag && register_Form::p1flag && register_Form::p2flag){
        ui->B1->setEnabled(true);
    }
}

void register_Form::on_pushButton_clicked()
{  
    if(nflag&&p1flag&&p2flag){
        //connect with SQL

        //SQL opt
        QString opt = QString("insert into /tablename/ /(name,pwd)/ values ('%0','%1')").arg(ui->name->text().trimmed(),ui->pwd1->text());
        QSqlQuery qopt;
        qopt.exec(opt);


    }
}


void register_Form::on_name_textChanged(const QString &arg1)
{
    if(ui->name->text().trimmed().isEmpty()){//用户名为空时

        ui->nametips->text()="用户名不能为空";
        ui->nametips->show();
    }else{
        nflag = true;
    }
    regButtonisOn(ui);
}


void register_Form::on_pwd1_textChanged(const QString &arg1)
{
    if(ui->pwd1->text().trimmed().isEmpty()){//pwd为空时

        ui->pwdtips1->text()="密码不能为空";
        ui->pwdtips1->show();
    }else{
        p1flag = true;
    }
    regButtonisOn(ui);
}


void register_Form::on_pwd2_textChanged(const QString &arg1)
{
    if(ui->pwd1->text()!=ui->pwd2->text()){//密码不一致

        ui->pwdtips2->text()="请两次输入的确认密码一致";
        ui->pwdtips2->show();
    }else{
        p2flag = true;
    }
    regButtonisOn(ui);
}

