#include"user_form.h"
#include "ui_user_form.h"
#include<QMessageBox>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QDebug>

user_Form::user_Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::user_Form)
{
    ui->setupUi(this);
}

user_Form::~user_Form()
{
    delete ui;
}

void user_Form::getinfo(int id,QString uname){
    uid = id;
    username = uname;
}

bool user_Form::haveTikets(int uid){
    //connect with SQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();

    //SQL 查询用户名
    QString opt = QString("select order_id from order where user_id='%1'").arg(uid);
    QSqlQuery qopt(db);
    qopt.exec(opt);

    //disconnect
    db.close();

    if(qopt.size()>0){   //订单未完成
        return true;
    }else{
        return false;
    }


}

void user_Form::on_del_uid_clicked()
{
    if(haveTikets(uid)){               //有订单不给注销
        QMessageBox::information(this,tr(" "),tr("该账户订单未完成，无法注销。"));
    }else{

        qDebug()<<uid<<username;
        duF.Dgetinfo(uid,username);
        duF.show();

    }
}

//

void user_Form::on_BookButton_clicked()
{
    //qDebug()<<uid;
    this->b = new Book(nullptr,uid);
    connect(this->b,&Book::back,[=](){
        this->b->hide();
        this->show();
    });
    this->hide();
    this->b->show();
}


void user_Form::on_RefundButton_clicked()
{
    this->r = new Refund(nullptr,uid);
    connect(this->r,&Refund::back,[=](){
        this->r->hide();
        this->show();
    });
    this->hide();
    this->r->show();
}


