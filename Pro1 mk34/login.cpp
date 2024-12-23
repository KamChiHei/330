
//ddd
//ccc

#include "login.h"
#include "ui_login.h"
#include"user_form.h"
#include"admin_form.h"
#include"register_form.h"
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QMessageBox>
#include<QDebug>
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
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();

    //SQL 查询用户名
    QString opt = QString("select password,level,user_id from users where username='%0'").arg(ui->lineEdit->text().trimmed());
    QSqlQuery qopt(db);
    qopt.exec(opt);

    //返回 行数=0 --->用户名错误
    //返回 行数=1 --->比较密码是否正确

    if( !qopt.next() ){//用户名错误
        QMessageBox::information(this,tr(" "),tr("用户名错误"));
    }else{

            if(ui->lineEdit_2->text().trimmed() != qopt.value(0).toString()){//密码错误
                QMessageBox::information(this,tr(" "),tr("密码错误"));

            }else{
                int uid = qopt.value(2).toInt();

                if(qopt.value(1).toInt()==0){     // normal user
                    level = 0;
                    uF.getinfo(uid,ui->lineEdit->text().trimmed());
                    uF.show();
                    this->close();
                }else{                            //admin
                    level = 1;

                    aF.show();
                    this->close();
                }

            }


    }
    db.close();

}





void MainWindow::on_commandLinkButton_clicked()
{
    regF.show();
}



