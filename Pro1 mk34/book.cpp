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

    db.setDatabaseName("flight_ticket_system");    // ODBC 数据源名称
    db.setHostName("127.0.0.1");
    db.setPort(3306);

    if(db.open()){
        //QMessageBox::information(this,"连接提示","连接成功");
        m= new QSqlTableModel;
        m->setTable("flight");
        n = new QSqlTableModel;
        n->setTable("seat_types");
        ui->Tickets->setModel(m);
        ui->Seats_types->setModel(n);
        n->select();


    }
    else {
        //QMessageBox::warning(this,"连接提示","连接失败");
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




void Book::on_AllButton_clicked()
{
    m->setQuery("SELECT * FROM flight",db);
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

    if(current.isValid()){

        qDebug()<<id;
        int a=current.row();
        QModelIndex i = m->index(a, 0),j = m->index(a,1);
        QVariant data = m->data(i),fid= m->data(j);
        int seatid=data.toInt();
        QString flightid=fid.toString();
        if(seatid){

            // m->setTable("seats");
            // ui->Tickets->setModel(m);

            QString query = QString("UPDATE `flight_ticket_system`.`seats` SET `seatchoosed` = '1' WHERE (`seat_id` = '%1');").arg(seatid);
            qDebug() << query;
            m->setQuery(query, db);

            QString queryString = QString("INSERT INTO `flight_ticket_system`.`orders` (`user_id`, `seat_id`, `order_status`) VALUES ('%1', '%2', '已支付')").arg(id).arg(seatid);
            qDebug() << queryString;
            m->setQuery(queryString, db);



            QString query2 = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0").arg(flightid);
            qDebug() << query2;
            m->setQuery(query2, db);

            current = QModelIndex();
        }
    }







}


void Book::on_Tickets_doubleClicked(const QModelIndex &index)
{
    qDebug()<<"双击一次";
    int a=index.row();
    QModelIndex i = m->index(a, 0);
    QVariant data = m->data(i);
    qDebug()<<data;
    int var=data.type();
    qDebug()<< var;


    if(var== QVariant::String){
        QString flightid = data.toString();
        QString queryString = QString("SELECT * FROM seats WHERE flight_id = '%1' AND seatchoosed = 0 ").arg(flightid);
        qDebug() << queryString;
        m->setQuery(queryString, db);
    }
}



    void Book::on_Tickets_clicked(const QModelIndex &index)
    {
        current=index;
        qDebug()<<current;
    }


    void Book::on_flight_idEdit_textChanged(const QString &arg1)
    {
        QString a=ui->flight_idEdit->text();
        if(a==""){
            return ;
        }else{
            QString queryString = QString("SELECT * FROM flight WHERE flight_id like '%%1%'").arg(a);
            qDebug() << queryString;
            m->setQuery(queryString, db);
        }
        qDebug() << a;
        a="\"%"+a+"%\"";

    }


    void Book::on_fEdit_textChanged(const QString &arg1)
    {
        this->fromtxt = ui->fEdit->text().trimmed();
        QString queryString = QString("SELECT * FROM flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%'").arg(fromtxt,totxt);
        qDebug() << queryString;
        m->setQuery(queryString, db);
    }




    void Book::on_tEdit_textChanged(const QString &arg1)
    {
        this->totxt = ui->tEdit->text().trimmed();
        QString queryString = QString("SELECT * FROM flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%'").arg(fromtxt,totxt);
        qDebug() << queryString;
        m->setQuery(queryString, db);
    }

