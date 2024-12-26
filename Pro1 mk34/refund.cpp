#include "refund.h"
#include "qsqltablemodel.h"
#include "ui_refund.h"

Refund::Refund(QWidget *parent,int i)
    : QWidget(parent)
    , ui(new Ui::Refund)
{
    id=i;
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("flight_ticket_system");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    if(db.open()){
        //QMessageBox::information(this,"连接提示","连接成功");
        m= new QSqlTableModel;
        m->setTable("orders");

        QString sql = QString("SELECT o.*, f.flight_id FROM orders o "
                              "JOIN seats s ON o.seat_id = s.seat_id "
                              "JOIN flight f ON s.flight_id = f.flight_id "
                              "WHERE o.user_id = '%1' AND o.order_status = '已支付'").arg(id);
        m->setQuery(sql,db);

        ui->orders->setModel(m);
        m->setHeaderData(0,Qt::Horizontal,"订单编号");
        m->setHeaderData(1,Qt::Horizontal,"订单人");
        m->setHeaderData(2,Qt::Horizontal,"座位号");
        m->setHeaderData(3,Qt::Horizontal,"支付状态");
        m->setHeaderData(4,Qt::Horizontal,"航班号");


        ui->orders->hideColumn(0);
        ui->orders->hideColumn(1);

    }
    else {
        //QMessageBox::warning(this,"连接提示","连接失败");
    }

}

Refund::~Refund()
{
    delete ui;
}

void Refund::on_pushButton_clicked()
{
    if(db.isOpen()){
       // QMessageBox::information(this,"!","关闭成功！");
        db.close();}
    emit this->back();

}


void Refund::on_Tickets_clicked()
{

    QString sql = QString("SELECT o.*, f.flight_id FROM orders o "
                          "JOIN seats s ON o.seat_id = s.seat_id "
                          "JOIN flight f ON s.flight_id = f.flight_id "
                          "WHERE o.user_id = '%1' AND o.order_status = '已支付'").arg(id);
    m->setQuery(sql,db);
}


void Refund::on_orders_clicked(const QModelIndex &index)
{
    current=index;
    qDebug()<<current;
}


void Refund::on_cancelButton_clicked()
{
    if(current.isValid()){



        qDebug()<<id;
        int a=current.row();
        QModelIndex k = m->index(a,0),i = m->index(a, 2),j = m->index(a,3);
        QVariant data0 = m->data(k),data2 = m->data(i),data3= m->data(j);
        int seatid=data2.toInt();
        int orderid=data0.toInt();
        QString ordersta=data3.toString();


        QString query = QString("UPDATE `flight_ticket_system`.`seats` SET `seatchoosed` = '0' WHERE (`seat_id` = '%1');").arg(seatid);
        qDebug() << query;
        m->setQuery(query, db);


        QString query2 = QString("UPDATE `flight_ticket_system`.`orders` SET `order_status` = '已取消' WHERE (`order_id` = '%1');").arg(orderid);
        qDebug() << query2;
        m->setQuery(query2, db);

        //QMessageBox::information(this,"退票提示","退票成功！");


        QString sql = QString("SELECT o.*, f.flight_id FROM orders o "
                              "JOIN seats s ON o.seat_id = s.seat_id "
                              "JOIN flight f ON s.flight_id = f.flight_id "
                              "WHERE o.user_id = '%1' AND o.order_status = '已支付'").arg(id);
        m->setQuery(sql,db);


        ui->orders->hideColumn(0);
        ui->orders->hideColumn(1);
        current=QModelIndex();
    }
}


void Refund::on_changeButton_clicked()
{




    this->c = new change();
    connect(this->c,&change::back,[=](){
        // db.open();
        this->c->hide();
        this->show();
        QString sql = QString("SELECT o.*, f.flight_id FROM orders o "
                              "JOIN seats s ON o.seat_id = s.seat_id "
                              "JOIN flight f ON s.flight_id = f.flight_id "
                              "WHERE o.user_id = '%1' AND o.order_status = '已支付'").arg(id);
        m->setQuery(sql,db);
    });
    c->getdatabase(db);
    if(current.isValid()){



        qDebug()<<id;
        int a=current.row();
        QModelIndex k = m->index(a,0),i = m->index(a, 2),j = m->index(a,3);
        QVariant data0 = m->data(k),data2 = m->data(i),data3= m->data(j);
        int seatid=data2.toInt();
        int orderid=data0.toInt();
        qDebug()<<orderid<<seatid;
        c->getinfo(orderid,seatid);

    }

    // db.close();
    // if(!db.isOpen()){
    //     QMessageBox::information(this,"!","关闭成功");
    // }

    this->hide();
    this->c->show();
}
