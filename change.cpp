//testssssssssssssss


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
    ui->mytable->setSelectionBehavior(QAbstractItemView::SelectRows);  // 选中整行


   // 显示可改签的票



}

change::~change()
{
    delete ui;
}

void change::getdatabase(QSqlDatabase d){
    dbc=d;
}

void change::getinfo(int oid,int sid){
    orderid = oid;
    seatid = sid;
    qDebug()<<orderid<<seatid;

    QString opt = QString("select flight_id from seats where seat_id= %1").arg(seatid);
    QSqlQuery qopt(dbc);
    qopt.exec(opt);
    qopt.next();
    QString flid = qopt.value(0).toString();
    qDebug()<<flid;

    QString opt0 = QString("select departure_place,arrival_place,base_fare from flight where flight_id = '%1'").arg(flid);
    qopt.exec(opt0);
    qopt.next();
    from = qopt.value(0).toString();
    to = qopt.value(1).toString();
    fee = qopt.value(2).toInt();
    qDebug()<<from<<to<<fee;

    QString opt2 = QString("SELECT * FROM flight WHERE departure_place LIKE '%1%' AND arrival_place LIKE '%2%'").arg(from).arg(to);
    QSqlQuery qopt2(dbc);
    if (qopt2.exec(opt2)) {
        while (qopt2.next()) {
            int currentRowCount = ui->mytable->rowCount();
            ui->mytable->setRowCount(currentRowCount + 1);
            for (int i = 0; i < 7; i++) {
                QTableWidgetItem *item = new QTableWidgetItem(qopt2.value(i).toString());
                ui->mytable->setItem(currentRowCount, i, item);
                item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
            }
        }
    }
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


    QString opt = QString("select seat_id from seats where flight_id = '%1'").arg(newflid);
    QSqlQuery qopt(dbc);
    qopt.exec(opt);
    qopt.next();
    int newsid = qopt.value(0).toInt();
    qDebug()<<newsid;


    opt = QString("update orders set seat_id = %1 WHERE seat_id = %2").arg(newsid).arg(seatid);
    qDebug()<<opt;
    qopt.exec(opt);

    ui->label->show();
}


void change::on_cancelB_clicked()
{

    emit this->back();
}

