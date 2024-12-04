#include "login.h"
#include "ui_login.h"
#include"user_form.h"
#include"admin_form.h"
#include"register_form.h"
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_button_clicked()
{
    //connect with SQL

    //SQL 查询用户名
    QString opt = QString("select /pwd,level/ from /tablename/ where name='%1'").arg(ui->login_name->text().trimmed());
    QSqlQuery qopt;
    qopt.exec(opt);

    //返回 行数=0 --->用户名错误
    //返回 行数=1 --->比较密码是否正确
    if(qopt.ValuesAsRows==0){//用户名错误
        QMessageBox::information(this,tr(" "),tr("用户名错误"));
    }else{
        if(ui->login_pwd->text() != qopt.value(0)){//密码错误
            QMessageBox::information(this,tr(" "),tr("密码错误"));
        }else{
            if(qopt.value(1)==0){// normal user
                user_Form uF;
                uF.show();
                this->close();
            }else{//admin
                admin_Form aF;
                aF.show();
                this->close();
            }
        }
    }

}


void MainWindow::on_register_button_clicked()
{
    register_Form regF;
    regF.show();
}

