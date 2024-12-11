#include "admin_form.h"
#include "ui_admin_form.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>

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

void admin_form::on_pushButton_5_clicked()
{
    QSqlQuery query;
    QString flightId,departurePlace,arrivalPlace;
    int baseFare=ui->lineEdit_baseFare->text().toInt();
    flightId=ui->lineEdit_flightId->text();
    departurePlace=ui->lineEdit_departurePlace->text();
    arrivalPlace=ui->lineEdit_arrivalPlace->text();
    QString date=ui->dateEdit_date->date().toString("yyyy-MM-dd");
    QString departureTime=ui->timeEdit_departureTime->time().toString();
    QString arrivalTime=ui->timeEdit_arrivalTime->time().toString();
    QString sql= QString("insert into flight (flight_id,departure_place,arrival_place,departure_time,arrival_time,date,base_fare) values('%1','%2','%3','%4','%5','%6','%7')").arg(flightId).arg(departurePlace).arg(arrivalPlace).arg(departureTime).arg(arrivalTime).arg(date).arg(baseFare);
    query.exec(sql);
    for(int i=1;i<=ui->lineEdit_seatAmountOfLvl1->text().toInt();i++){

        QString sqll="select seat_id from seats order by seat_id desc limit 1";
        QSqlQuery query2;
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
        QString sql2=QString("insert into seats(seat_id,flight_id,seat_type_id,seat_number) values('%1','%2','%3','%4')").arg(id).arg(flightId).arg(1).arg(code);
        qDebug()<<sql2;
        query.exec(sql2);
    }

    for(int i=1;i<=ui->lineEdit_seatAmountOfLvl2->text().toInt();i++){

        QString sqll="select seat_id from seats order by seat_id desc limit 1";
        QSqlQuery query2;
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
        QString sql2=QString("insert into seats(seat_id,flight_id,seat_type_id,seat_number) values('%1','%2','%3','%4')").arg(id).arg(flightId).arg(2).arg(code);
        qDebug()<<sql2;
        query.exec(sql2);
    }

    for(int i=1;i<=ui->lineEdit_seatAmountOfLvl3->text().toInt();i++){

        QString sqll="select seat_id from seats order by seat_id desc limit 1";
        QSqlQuery query2;
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
        QString sql2=QString("insert into seats(seat_id,flight_id,seat_type_id,seat_number) values('%1','%2','%3','%4')").arg(id).arg(flightId).arg(3).arg(code);
        qDebug()<<sql2;
        query.exec(sql2);
    }



}
