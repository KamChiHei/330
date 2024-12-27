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
    qDebug() << this->styleSheet();
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
    dbu= QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    dbu.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    dbu.setPort(3306);                          // 端口号，默认
    dbu.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    dbu.open();

    //SQL 查询用户名
    QString opt = QString("select order_id from orders where user_id='%1'and order_status='已支付'").arg(uid);
    QSqlQuery qopt(dbu);
    qopt.exec(opt);

    //disconnect


    if(qopt.next()){   //订单未完成
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
        duF.setdatabase(dbu);
        qDebug()<<uid<<username;
        duF.Dgetinfo(uid,username);
        duF.show();

    }
}

//

void user_Form::on_BookButton_clicked()
{
    //qDebug()<<uid;
    dbu.close();
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
    dbu.close();
    this->r = new Refund(nullptr,uid);
    connect(this->r,&Refund::back,[=](){
        this->r->hide();
        this->show();
    });
    this->hide();
    this->r->show();
}



void user_Form::on_user_Form_destroyed()
{

}

