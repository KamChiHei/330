#include "admin_form.h"
#include "ui_admin_form.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>




admin_form::admin_form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin_form)
{
    ui->setupUi(this);
}

admin_form::~admin_form()
{
    delete ui;
}


void admin_form::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button==ui->pushButton)
        ui->stackedWidget->setCurrentIndex(0);
    else if(button==ui->pushButton_2)
        ui->stackedWidget->setCurrentIndex(1);
    else if(button==ui->pushButton_3)
        ui->stackedWidget->setCurrentIndex(2);
    else if(button==ui->pushButton_4)
        ui->stackedWidget->setCurrentIndex(3);
    int i = 0;
    ui->stackedWidget->widget(i);
}


void admin_form::on_pushButton_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_2_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_3_clicked()
{
    switchPage();
}

void admin_form::on_pushButton_4_clicked()
{
    switchPage();

}


char getRandomChar() {
    // 随机生成字母（A-Z）
    return 'A' + QRandomGenerator::global()->bounded(26); // 0 - 25
}

char getRandomDigit() {
    // 随机生成数字（0-9）
    return '0' + QRandomGenerator::global()->bounded(10); // 0 - 9
}

QString generateCode() {
    QString code = "";
    // 生成一个字母
    code += getRandomChar();
    // 生成5个数字
    for (int i = 0; i < 5; i++) {
        code += getRandomDigit();
    }
    return code;
}

void addSeat(QString flightId,QString seatTypeId,int seatAmount){
    for(int i=1;i<=seatAmount;i++){

        QString sqll="select seat_id from seats order by seat_id desc limit 1";
        QSqlQuery query2,query3;
        query2.prepare(sqll);
        if (query2.exec()) {
            // 如果查詢成功，獲取第一行的最後一列的值
            if (query2.next()) {
                QVariant value = query2.value(0);  // 獲取結果中的第一列
                qDebug() << "The value of the first row, last column is:" << value.toString();



            }
        }
        int id=query2.value(0).toInt()+1;

        // 生成并输出随机代码
        QString code = generateCode();
        QString sql2=QString("insert into seats(seat_id,flight_id,seat_type_id,seat_number) values('%1','%2','%3','%4')").arg(id).arg(flightId,seatTypeId,code);
        qDebug()<<sql2;
        query3.exec(sql2);
    }
}
void addFlight(QString flightId,QString departurePlace,QString arrivalPlace,QString date,QString departureTime,QString arrivalTime,int baseFare,int seatAmountOfLvl1,int seatAmountOfLvl2,int seatAmountOfLvl3){
    QSqlQuery query;
    QString sql= QString("insert into flight (flight_id,departure_place,arrival_place,departure_time,arrival_time,date,base_fare) values('%1','%2','%3','%4','%5','%6','%7')").arg(flightId,departurePlace,arrivalPlace,departureTime,arrivalTime,date).arg(baseFare);
    qDebug()<<sql;
    query.exec(sql);
    addSeat(flightId,"1",seatAmountOfLvl1);
    addSeat(flightId,"2",seatAmountOfLvl2);
    addSeat(flightId,"3",seatAmountOfLvl3);
}


void admin_form::on_pushButton_5_clicked()
{
    QString flightId=ui->lineEdit_flightId->text(),departurePlace=ui->lineEdit_departurePlace->text(),arrivalPlace=ui->lineEdit_arrivalPlace->text(),date=ui->dateEdit_date->date().toString("yyyy-MM-dd"),departureTime=ui->timeEdit_departureTime->time().toString(),arrivalTime=ui->timeEdit_arrivalTime->time().toString();
    int baseFare=ui->lineEdit_baseFare->text().toInt(),seatAmountOfLvl1=ui->lineEdit_seatAmountOfLvl1->text().toInt(),seatAmountOfLvl2=ui->lineEdit_seatAmountOfLvl2->text().toInt(),seatAmountOfLvl3=ui->lineEdit_seatAmountOfLvl3->text().toInt();
    addFlight(flightId,departurePlace,arrivalPlace,date,departureTime,arrivalTime,baseFare,seatAmountOfLvl1,seatAmountOfLvl2,seatAmountOfLvl3);
}

void delFlight(){
    QSqlQuery query;
    QString sql=QString("Delete from flight");
}

void admin_form::on_pushButton_6_clicked()
{
    QString delFlightId=ui->lineEdit_delFlightId->text();
}

