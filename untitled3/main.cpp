#include "admin_form.h"

#include <QApplication>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    admin_form w;
    w.show();
    QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("persondb");
    bool ok=db.open();
    if(!ok){
        qDebug()<<"Error,persondatabase数据库文件打开失败！";

    }
    else{
        qDebug()<<"Success,persondatabase数据库文件打开成功！";
    }
    return a.exec();
}

