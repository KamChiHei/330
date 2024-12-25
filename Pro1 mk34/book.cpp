#include "book.h"
#include "ui_book.h"



Book::Book(QWidget *parent,int i)
    : QMainWindow(parent)
    , ui(new Ui::Book)
{
    id=i;
    qDebug()<<id;
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");


    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");

    if(db.open()){
        //QMessageBox::information(this,"连接提示","连接成功");
        m= new QSqlTableModel();
        s = new QSqlTableModel();

        ui->errorLb->hide();





        ui->Tickets->setModel(m);
        ui->Tickets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->Seats->setModel(s);
        ui->Seats->setEditTriggers(QAbstractItemView::NoEditTriggers);

        s->setTable("seats");
        m->setTable("flight");

        s->setHeaderData(3,Qt::Horizontal,"座位号");
        ui->Seats->hideColumn(0);
        ui->Seats->hideColumn(1);
        ui->Seats->hideColumn(2);
        ui->Seats->hideColumn(4);

        m->setHeaderData(0,Qt::Horizontal,"航班号");
        m->setHeaderData(1,Qt::Horizontal,"出发地");
        m->setHeaderData(2,Qt::Horizontal,"到达地");
        m->setHeaderData(3,Qt::Horizontal,"出发时间");
        m->setHeaderData(4,Qt::Horizontal,"到达时间");
        m->setHeaderData(5,Qt::Horizontal,"日期");
        m->setHeaderData(6,Qt::Horizontal,"基础价位");






    }
    else {
        QMessageBox::warning(this,"连接提示","连接失败");
    }
    m->select();
    connect(ui->flight_idEdit,SIGNAL(returnPressed()),this,SLOT(on_FindButton_clicked()));
    connect(ui->fEdit,SIGNAL(returnPressed()),this,SLOT(on_FindButton_ft_clicked()));
    connect(ui->tEdit,SIGNAL(returnPressed()),this,SLOT(on_FindButton_ft_clicked()));

}

Book::~Book()
{
    delete ui;
}

void Book::on_Back_clicked()
{
    if(db.isOpen()){
        //QMessageBox::information(this,"!","关闭成功！");
        db.close();}
    emit this->back();
}


void Book::on_FindButton_clicked()
{
    QString a=ui->flight_idEdit->text();
    if(a==""){
        QMessageBox::warning(this,"错误!","订单编号不能为空!");
        return ;
    }
    qDebug() << a;
    a="\"%"+a+"%\"";



    QString queryString = QString("SELECT * FROM flight WHERE flight_id like %1").arg(a);
    qDebug() << queryString;
    m->setQuery(queryString, db);
}









void Book::on_FindButton_ft_clicked()
{
    QString a=ui->fEdit->text();
    QString b=ui->tEdit->text();


    if(a==""&&b==""){
        QMessageBox::warning(this,"错误!","出发地和目的地不能同时为空!");
        return ;
    }

    qDebug() << a;
    a="\"%"+a+"%\"";
    qDebug() << b;
    b="\"%"+b+"%\"";

    if(a==""&&b!=""){
        QString queryString = QString("SELECT * FROM flight WHERE arrival_place like %1").arg(b);
        qDebug() << queryString;
        m->setQuery(queryString, db);
    }
    if(b==""&&a!=""){
        QString queryString = QString("SELECT * FROM flight WHERE departure_place like %1").arg(a);
        qDebug() << queryString;
        m->setQuery(queryString, db);
    }
    if(b!=""&&a!=""){
        QString queryString = QString("SELECT * FROM flight WHERE departure_place like %1 AND arrival_place like %2").arg(a).arg(b);
        qDebug() << queryString;
        m->setQuery(queryString, db);
    }

}




void Book::on_BookButton_clicked()
{
    qDebug()<<current<<current_seat;
    if(current_seat.isValid()&&current.isValid()){

        qDebug()<<id;
        int a=current.row(),b=current_seat.row();

        qDebug()<<a<<" "<<b;
        QModelIndex i = s->index(b,0),j = m->index(a,0);
        QVariant data = s->data(i),fid= m->data(j);
        int seatid=data.toInt();
        QString flightid=fid.toString();
        qDebug()<<seatid<<flightid;
        if(seatid){

            // m->setTable("seats");
            // ui->Tickets->setModel(m);

            QString query = QString("UPDATE `flight_ticket_system`.`seats` SET `seatchoosed` = '1' WHERE (`seat_id` = '%1');").arg(seatid);
            qDebug() << query;
            s->setQuery(query, db);

            QString queryString = QString("INSERT INTO `flight_ticket_system`.`orders` (`user_id`, `seat_id`, `order_status`) VALUES ('%1', '%2', '已支付')").arg(id).arg(seatid);
            qDebug() << queryString;
            s->setQuery(queryString, db);



            QString query2 =  QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 AND seat_type_id = '%2'").arg(flightid).arg(seat_type);
            qDebug() << query2;
            s->setQuery(query2, db);


            ui->Seats->hideColumn(0);
            ui->Seats->hideColumn(1);
            ui->Seats->hideColumn(2);
            ui->Seats->hideColumn(4);

            current_seat = QModelIndex();
        }

    }
    else if(!current.isValid()){
        qDebug()<<"请选择航班！";
        ui->errorLb->show();
        ui->errorLb->setText("请选择航班！");
    }
    else if(seat_type==0){
        qDebug()<<"请选择座位类型！";
        ui->errorLb->show();
        ui->errorLb->setText("请选择座位类型！");
    }
    else if(!current_seat.isValid()){
        qDebug()<<"请选择座位！";
        ui->errorLb->show();
        ui->errorLb->setText("请选择座位！");
    }







}


// void Book::on_Tickets_doubleClicked(const QModelIndex &index)
// {

//     changeHead();

//     qDebug()<<"双击一次";
//     int a=index.row();
//     QModelIndex i = m->index(a, 0);
//     QVariant data = m->data(i);
//     qDebug()<<data;
//     int var=data.type();
//     qDebug()<< var;


//     if(var== QVariant::String){
//         QString flightid = data.toString();
//         QString queryString = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 ").arg(flightid);
//         qDebug() << queryString;
//         m->setQuery(queryString, db);
//         //ui->Tickets->hideColumn(0);
//         //ui->Tickets->hideColumn(3);
//     }
// }



void Book::on_Tickets_clicked(const QModelIndex &index)
{
    current=index;
    if(seat_type!=0){
        int a=index.row();
        QModelIndex i = m->index(a, 0);
        QVariant data = m->data(i);
        qDebug()<<data;
        QString flightid = data.toString();
        QString queryString = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 AND seat_type_id = '%2'").arg(flightid).arg(seat_type);
        qDebug() << queryString;
        s->setQuery(queryString, db);
    }
    qDebug()<<current;
}


void Book::on_flight_idEdit_textChanged()
{
    changeHead1();

    this->flid =ui->flight_idEdit->text();
    if(totxt==""&&fromtxt==""&&flid==""){
        cl();
        return ;
    }
    fin();
    qDebug() << flid;

}


void Book::on_fEdit_textChanged()
{
    changeHead1();
    this->fromtxt = ui->fEdit->text().trimmed();
    if(totxt==""&&fromtxt==""&&flid==""){
        cl();
        return ;
    }
    fin();
}




void Book::on_tEdit_textChanged()
{
    changeHead1();
    this->totxt = ui->tEdit->text().trimmed();
    if(totxt==""&&fromtxt==""&&flid==""){
        cl();
        return ;
    }
    fin();


}

void Book::cl(){
    QString queryString = QString("SELECT * FROM flight ");
    qDebug() << queryString;
    m->setQuery(queryString, db);
}

void Book::fin(){
    QString queryString = QString("SELECT * FROM flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%' AND flight_id like '%%3%'").arg(fromtxt,totxt,flid);
    qDebug() << queryString;
    m->setQuery(queryString, db);
}
void Book::changeHead1(){
    m->setHeaderData(0,Qt::Horizontal,"航班号");
    m->setHeaderData(1,Qt::Horizontal,"出发地");
    ui->Tickets->showColumn(1);
    m->setHeaderData(2,Qt::Horizontal,"到达地");
    m->setHeaderData(3,Qt::Horizontal,"出发时间");
    m->setHeaderData(4,Qt::Horizontal,"到达时间");
    ui->Tickets->showColumn(4);
    m->setHeaderData(5,Qt::Horizontal,"日期");
    m->setHeaderData(6,Qt::Horizontal,"基础价位");
}
void Book::changeHead(){
    m->setHeaderData(0,Qt::Horizontal,"座位id");
    m->setHeaderData(1,Qt::Horizontal,"航班号");
    ui->Tickets->hideColumn(1);
    m->setHeaderData(2,Qt::Horizontal,"座位类型");
    m->setHeaderData(3,Qt::Horizontal,"座位号");
    m->setHeaderData(4,Qt::Horizontal,"座位状态");
    ui->Tickets->hideColumn(4);
}

void Book::on_jjBt_clicked()
{
    seat_type=1;
    if(current.isValid()){
        int a=current.row();
        QModelIndex i = m->index(a, 0);
        QVariant data = m->data(i);
        qDebug()<<data;
        QString flightid = data.toString();
        QString queryString = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 AND seat_type_id = '%2'").arg(flightid).arg(seat_type);
        qDebug() << queryString;
        s->setQuery(queryString, db);
    }
    qDebug()<<seat_type;
}


void Book::on_swBt_clicked()
{
    seat_type=2;
    if(current.isValid()){
        int a=current.row();
        QModelIndex i = m->index(a, 0);
        QVariant data = m->data(i);
        qDebug()<<data;
        QString flightid = data.toString();
        QString queryString = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 AND seat_type_id = '%2'").arg(flightid).arg(seat_type);
        qDebug() << queryString;
        s->setQuery(queryString, db);
    }
    qDebug()<<seat_type;
}


void Book::on_tdBt_clicked()
{
    seat_type=3;
    if(current.isValid()){
        int a=current.row();
        QModelIndex i = m->index(a, 0);
        QVariant data = m->data(i);
        qDebug()<<data;
        QString flightid = data.toString();
        QString queryString = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 AND seat_type_id = '%2'").arg(flightid).arg(seat_type);
        qDebug() << queryString;
        s->setQuery(queryString, db);
    }
    qDebug()<<seat_type;
}


void Book::on_Seats_clicked(const QModelIndex &index)
{
    current_seat=index;
    ui->errorLb->hide();
    qDebug()<<current_seat;
}

