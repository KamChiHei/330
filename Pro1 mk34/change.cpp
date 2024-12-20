#include "change.h"
#include "ui_change.h"
#include<QSqlDatabase>
#include<qsqlquery.h>
#include<QModelIndex>
change::change(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::change)
{
    ui->setupUi(this);
    ui->label->hide();

    QStringList labels;
    labels<<"航班号"<<"起始地点"<<"到达地点"<<"出发时间"<<"到达时间"<<"日期"<<"费用";

    //设置行与列
    ui->mytable->setColumnCount(7);

    //创建表头
    ui->mytable->setHorizontalHeaderLabels(labels);

    //设置为只读模式
    ui->mytable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->mytable->setSelectionMode(QAbstractItemView::SingleSelection);  // 只能选中一项
    ui->mytable->setSelectionBehavior(QAbstractItemView::SelectRows);   // 选中整行

    //connect with SQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.setUserName("root");
    db.setPassword("admin");
    db.open();

    //显示可改签的票

    QString opt = QString("select * from flight where departure_place like %1 AND arrival_place like %2").arg(from,to);
    QSqlQuery qopt(db);
    qopt.exec();
    while(qopt.next()){

        for(int i = 0;i<=7;i++){
            ui->mytable->setRowCount(ui->mytable->rowCount()+1);
            ui->mytable->setItem(ui->mytable->rowCount(),i,new QTableWidgetItem(qopt.value(i).toString()));
            ui->mytable->item(ui->mytable->rowCount(),i)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
        }
    }

}

change::~change()
{
    delete ui;
}

void change::getinfo(int oid,int sid){
    orderid = oid;
    seatid = sid;

    //connect with SQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.setUserName("root");
    db.setPassword("admin");
    db.open();

    //SQL 删除

    QString opt = QString("select flight_id from seats where seats_id=%1").arg(seatid);
    QSqlQuery qopt(db);
    qopt.exec(opt);
    qopt.next();
    QString flid = qopt.value(0).toString();

    opt = QString("select departure_place,arrival_place,base_fare from flight where seats_id=%1").arg(flid);
    qopt.exec(opt);
    qopt.next();
    from = qopt.value(0).toString();
    to = qopt.value(1).toString();
    fee = qopt.value(2).toInt();


    //disconnect
    db.close();
}

void change::on_mytable_itemSelectionChanged()
{
    QModelIndexList selectedIndexes = ui->mytable->selectionModel()->selectedRows();
    if(!selectedIndexes.empty()){
        int row = selectedIndexes.first().row();
        QTableWidgetItem *item = ui->mytable->item(row, 0);
        if (item) {
            newflid = item->text();
        }
    }
}

void change::on_ensureB_clicked()
{
    //connect with SQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.setUserName("root");
    db.setPassword("admin");
    db.open();

    QString opt = QString("select seat_id from seats where flight_id ='%1").arg(newflid);
    QSqlQuery qopt(db);
    qopt.exec(opt);
    qopt.next();
    int newsid = qopt.value(0).toInt();


    opt = QString("update orders set seat_id = '%1' WHERE seat_id like '%1'").arg(newsid,seatid);
    qopt.exec(opt);

    ui->label->show();
}


void change::on_cancelB_clicked()
{
    this->close();
}

