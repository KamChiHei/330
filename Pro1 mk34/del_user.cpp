#include "del_user.h"
#include "ui_del_user.h"
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QMessageBox>
#include<QDebug>
del_user::del_user(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::del_user)
{

    ui->setupUi(this);

}

del_user::~del_user()
{
    delete ui;
}

void del_user::Dgetinfo(int id,QString uname){
    uid = id;
    ui->user->setText("用户名:"+uname);
}

void del_user::on_delButton_clicked()
{
    //connect with SQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();

    //SQL 删除

    QString opt = QString("delete from users where user_id=%1").arg(uid);
    QSqlQuery qopt(db);
    qopt.exec(opt);

    //disconnect
    db.close();

    //注销回到登入界面
    qApp->exit(773);
}


void del_user::on_nodelButton_clicked()
{
    this->close();
}

void del_user::setdatabase(QSqlDatabase  d){
    dbd=d;
}
