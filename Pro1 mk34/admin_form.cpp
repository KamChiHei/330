//testsssssssssssssssssssssssss




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
    QStringList labels;
    labels<<"航班号"<<"出发时间"<<"到达时间"<<"经济舱票价"<<"商务舱票价"<<"头等舱票价"<<"经济舱座位数"<<"商务舱座位数"<<"头等舱座位数";

    //设置行与列
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(0);
    //创建表头
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    //设置为只读模式
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    ui->tableWidget->clearContents();
    QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight ");//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
    qDebug()<<sqlstr;
    QSqlQuery query(db);
    query.prepare(sqlstr);//准备
    int i=0;
    if(query.exec())
    {

        while(query.next())
        {

            ui->tableWidget->setRowCount(i+1);//设置表格行数，每一次加一行
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString())); //将从数据库中表获取的数据写入到tableWidget 表中
            ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            int moneyOfLvl2= query.value(3).toInt()*2;
            int moneyOfLvl3=query.value(3).toInt()*3;
            QString s = QString::number(moneyOfLvl2);
            QString q = QString::number(moneyOfLvl3);

            ui->tableWidget->setItem(i,4,new QTableWidgetItem(s));
            ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);


            ui->tableWidget->setItem(i,5,new QTableWidgetItem(q));
            ui->tableWidget->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            QSqlQuery query1;
            QString sql=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='1';").arg(query.value(0).toString());
            query1.prepare(sql);
            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,6,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='2';").arg(query.value(0).toString());
            query1.prepare(sqll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,7,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,7)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqlll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='3';").arg(query.value(0).toString());
            query1.prepare(sqlll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,8,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,8)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }
            i++;
        }

    }
    db.close();


}

admin_form::~admin_form()
{
    delete ui;
}


void admin_form::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button==ui->pushButton_addFlight)
        ui->stackedWidget->setCurrentIndex(0);
    else if(button==ui->pushButton_deleteFlight)
        ui->stackedWidget->setCurrentIndex(1);
    else if(button==ui->pushButton_searchFlight)
        ui->stackedWidget->setCurrentIndex(2);
    else if(button==ui->pushButton_4)
        ui->stackedWidget->setCurrentIndex(3);
    int i = 0;
    ui->stackedWidget->widget(i);
}

void admin_form::on_pushButton_addFlight_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_deleteFlight_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_searchFlight_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_4_clicked()
{
    switchPage();
}




char  admin_form::getRandomChar() {
    // 随机生成字母（A-Z）
    return 'A' + QRandomGenerator::global()->bounded(26); // 0 - 25
}

char  admin_form::getRandomDigit() {
    // 随机生成数字（0-9）
    return '0' + QRandomGenerator::global()->bounded(10); // 0 - 9
}

QString  admin_form::generateCode() {
    QString code = "";
    // 生成一个字母
    code += getRandomChar();
    // 生成5个数字
    for (int i = 0; i < 5; i++) {
        code += getRandomDigit();
    }
    return code;
}

void admin_form::addSeat(QString flightId,QString seatTypeId,int seatAmount){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称

    db.open();
    for(int i=1;i<=seatAmount;i++){

        QString sqll="select seat_id from seats order by seat_id desc limit 1";
        QSqlQuery query2(db),query3(db);
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
    db.close();
}
void admin_form::addFlight(QString flightId,QString departurePlace,QString arrivalPlace,QString date,QString departureTime,QString arrivalTime,int baseFare,int seatAmountOfLvl1,int seatAmountOfLvl2,int seatAmountOfLvl3){
    addSeat(flightId,"1",seatAmountOfLvl1);
    addSeat(flightId,"2",seatAmountOfLvl2);
    addSeat(flightId,"3",seatAmountOfLvl3);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    QSqlQuery query(db);
    QString sql= QString("insert into flight (flight_id,departure_place,arrival_place,departure_time,arrival_time,date,base_fare) values('%1','%2','%3','%4','%5','%6','%7')").arg(flightId,departurePlace,arrivalPlace,departureTime,arrivalTime,date).arg(baseFare);
    qDebug()<<sql;
    query.exec(sql);
    db.close();
}

void admin_form::clear(){
    ui->dateEdit_date->setDate(QDate(2024,1,1));
    ui->lineEdit_departurePlace->clear();
    ui->lineEdit_arrivalPlace->clear();
    ui->lineEdit_flightId->clear();
    ui->lineEdit_baseFare->clear();
    ui->lineEdit_moneyOfLvl2->clear();
    ui->lineEdit_moneyOfLvl3->clear();
    ui->lineEdit_seatAmountOfLvl1->clear();
    ui->lineEdit_seatAmountOfLvl2->clear();
    ui->lineEdit_seatAmountOfLvl3->clear();
    ui->timeEdit_arrivalTime->setTime(QTime(0,0));
    ui->timeEdit_departureTime->setTime(QTime(0,0));
}
void admin_form::on_pushButton_add_clicked()
{
    QString flightId=ui->lineEdit_flightId->text(),departurePlace=ui->lineEdit_departurePlace->text(),arrivalPlace=ui->lineEdit_arrivalPlace->text(),date=ui->dateEdit_date->date().toString("yyyy-MM-dd"),departureTime=ui->timeEdit_departureTime->time().toString(),arrivalTime=ui->timeEdit_arrivalTime->time().toString();
    int baseFare=ui->lineEdit_baseFare->text().toInt(),seatAmountOfLvl1=ui->lineEdit_seatAmountOfLvl1->text().toInt(),seatAmountOfLvl2=ui->lineEdit_seatAmountOfLvl2->text().toInt(),seatAmountOfLvl3=ui->lineEdit_seatAmountOfLvl3->text().toInt();
    addFlight(flightId,departurePlace,arrivalPlace,date,departureTime,arrivalTime,baseFare,seatAmountOfLvl1,seatAmountOfLvl2,seatAmountOfLvl3);
    clear();
}




void  admin_form::delSeat(QString delFlightId){

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    QSqlQuery query1(db);
    QString sqll=QString("Delete from seats  where flight_id='%1'").arg(delFlightId);
    query1.exec(sqll);
    qDebug()<<sqll;
    db.close();
}

void  admin_form::delFlight(QString delFlightId){
    delSeat(delFlightId);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    QSqlQuery query(db);
    QString sql=QString("Delete from flight where flight_id ='%1'").arg(delFlightId);
    query.exec(sql);
    qDebug()<<sql;
    db.close();

}

void admin_form::clear2(){
    ui->lineEdit_delFlightId->clear();
}
void admin_form::on_pushButton_delete_clicked()
{
    QString delFlightId=ui->lineEdit_delFlightId->text();
    delFlight(delFlightId);
    clear2();
}



// void admin_form::on_pushButton_search_clicked()
// {
//     QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
//     db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
//     db.setPort(3306);                          // 端口号，默认
//     db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
//     db.open();
//     ui->tableWidget->clearContents();
//     QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
//     QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight where departure_place='%1'and arrival_place='%2'and date='%3';").arg(selectedDeparturePlace,selectedArrivalPlace,selectedDate);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
//     qDebug()<<sqlstr;
//     QSqlQuery query(db);
//     query.prepare(sqlstr);//准备
//     int i=0;
//      if(query.exec())
//      {

//          while(query.next())
//         {

//             ui->tableWidget->setRowCount(i+1);//设置表格行数，每一次加一行
//              ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

//             ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
//             ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

//              ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
//              ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
//        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
//              ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
//              int moneyOfLvl2= query.value(3).toInt()*2;
//              int moneyOfLvl3=query.value(3).toInt()*3;
//              QString s = QString::number(moneyOfLvl2);
//             QString q = QString::number(moneyOfLvl3);

//              ui->tableWidget->setItem(i,4,new QTableWidgetItem(s));

//         ui->tableWidget->setItem(i,5,new QTableWidgetItem(q));
//             ui->tableWidget->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
//              QSqlQuery query1;
//              QString sql=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='1';").arg(query.value(0).toString());
//              query1.prepare(sql);
//              if(query1.exec()){
//                  while(query1.next()){
//                      ui->tableWidget->setItem(i,6,new QTableWidgetItem(query1.value(0).toString()));
//                     ui->tableWidget->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

//                  }
//            }

//             QString sqll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='2';").arg(query.value(0).toString());
//              query1.prepare(sqll);

//              if(query1.exec()){
//                 while(query1.next()){
//                      ui->tableWidget->setItem(i,7,new QTableWidgetItem(query1.value(0).toString()));
//                      ui->tableWidget->item(i,7)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

//                 }
//            }
//             QString sqlll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='3';").arg(query.value(0).toString());
//             query1.prepare(sqlll);

//              if(query1.exec()){
//                 while(query1.next()){
//                      ui->tableWidget->setItem(i,8,new QTableWidgetItem(query1.value(0).toString()));
//                    ui->tableWidget->item(i,8)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

//                }
//             }
//             i++;
//         }

//      }
//      db.close();
// }






void admin_form::on_lineEdit_baseFare_editingFinished()
{
    int seatMoneyOfLvl2=ui->lineEdit_baseFare->text().toInt()*2;
    int seatMoneyOfLvl3=ui->lineEdit_baseFare->text().toInt()*3;
    QString s = QString::number(seatMoneyOfLvl2);
    QString q = QString::number(seatMoneyOfLvl3);
    if(!ui->lineEdit_baseFare->text().isEmpty()){
        ui->lineEdit_moneyOfLvl2->setText(s);
        ui->lineEdit_moneyOfLvl3->setText(q);
    }
}

void admin_form::clear3(){
    ui->lineEdit_needToUpdateFlightId->clear();
    ui->lineEdit_needToUpdateArrivalPlace->clear();
    ui->timeEdit_needToUpdateArrivalTime->setTime(QTime(0,0));
    ui->lineEdit_needToUpdateBaseFare->clear();
    ui->lineEdit_needToUpdateDeparturePlace->clear();
    ui->timeEdit_needToUpdateDepartureTime->clear();
    ui->dateEdit_needToUpdateDate->setDate(QDate(2024,1,1));
}

void admin_form::on_pushButton_update_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    QSqlQuery query(db);
    QString needToUpdateFlightId=ui->lineEdit_needToUpdateFlightId->text(),needToUpdateDate=ui->dateEdit_needToUpdateDate->date().toString("yyyy-MM-dd"),needToUpdateDepartureTime=ui->timeEdit_needToUpdateDepartureTime->text(),needToUpdateArrivalTime=ui->timeEdit_needToUpdateArrivalTime->text(),needToUpdateDeparturePlace=ui->lineEdit_needToUpdateDeparturePlace->text(),needToUpdateArrivalPlace=ui->lineEdit_needToUpdateArrivalPlace->text(),needToUpdateBaseFare=ui->lineEdit_needToUpdateBaseFare->text();
    QString sql=QString("UPDATE flight SET date='%1',departure_time='%2',arrival_time='%3',departure_place='%4',arrival_place='%5',base_fare='%6' where flight_id='%7'").arg(needToUpdateDate,needToUpdateDepartureTime,needToUpdateArrivalTime,needToUpdateDeparturePlace,needToUpdateArrivalPlace,needToUpdateBaseFare,needToUpdateFlightId);
    qDebug()<<sql;
    query.exec(sql);
    db.close();
    clear3();
}



void admin_form::on_lineEdit_selectedDeparturePlace_textChanged(const QString &arg1)
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    ui->tableWidget->clearContents();
    QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%' AND date like '%%3%'").arg(selectedDeparturePlace,selectedArrivalPlace,selectedDate);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
    qDebug()<<sqlstr;
    QSqlQuery query(db);
    query.prepare(sqlstr);//准备
    int i=0;
    if(query.exec())
    {

        while(query.next())
        {

            ui->tableWidget->setRowCount(i+1);//设置表格行数，每一次加一行
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString())); //将从数据库中表获取的数据写入到tableWidget 表中
            ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            int moneyOfLvl2= query.value(3).toInt()*2;
            int moneyOfLvl3=query.value(3).toInt()*3;
            QString s = QString::number(moneyOfLvl2);
            QString q = QString::number(moneyOfLvl3);

            ui->tableWidget->setItem(i,4,new QTableWidgetItem(s));
            ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);


            ui->tableWidget->setItem(i,5,new QTableWidgetItem(q));
            ui->tableWidget->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            QSqlQuery query1;
            QString sql=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='1';").arg(query.value(0).toString());
            query1.prepare(sql);
            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,6,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='2';").arg(query.value(0).toString());
            query1.prepare(sqll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,7,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,7)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqlll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='3';").arg(query.value(0).toString());
            query1.prepare(sqlll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,8,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,8)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }
            i++;
        }

    }
    db.close();
}


void admin_form::on_lineEdit_selectedArrivalPlace_textChanged(const QString &arg1)
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    ui->tableWidget->clearContents();
    QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%' AND date like '%%3%'").arg(selectedDeparturePlace,selectedArrivalPlace,selectedDate);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
    qDebug()<<sqlstr;
    QSqlQuery query(db);
    query.prepare(sqlstr);//准备
    int i=0;
    if(query.exec())
    {

        while(query.next())
        {

            ui->tableWidget->setRowCount(i+1);//设置表格行数，每一次加一行
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString())); //将从数据库中表获取的数据写入到tableWidget 表中
            ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            int moneyOfLvl2= query.value(3).toInt()*2;
            int moneyOfLvl3=query.value(3).toInt()*3;
            QString s = QString::number(moneyOfLvl2);
            QString q = QString::number(moneyOfLvl3);

            ui->tableWidget->setItem(i,4,new QTableWidgetItem(s));
            ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);


            ui->tableWidget->setItem(i,5,new QTableWidgetItem(q));
            ui->tableWidget->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            QSqlQuery query1;
            QString sql=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='1';").arg(query.value(0).toString());
            query1.prepare(sql);
            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,6,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='2';").arg(query.value(0).toString());
            query1.prepare(sqll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,7,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,7)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqlll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='3';").arg(query.value(0).toString());
            query1.prepare(sqlll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,8,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,8)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }
            i++;
        }

    }
    db.close();
}


void admin_form::on_dateEdit_selectedDate_dateChanged(const QDate &date)
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    ui->tableWidget->clearContents();
    QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%' AND date like '%%3%'").arg(selectedDeparturePlace,selectedArrivalPlace,selectedDate);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
    qDebug()<<sqlstr;
    QSqlQuery query(db);
    query.prepare(sqlstr);//准备
    int i=0;
    if(query.exec())
    {

        while(query.next())
        {

            ui->tableWidget->setRowCount(i+1);//设置表格行数，每一次加一行
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString())); //将从数据库中表获取的数据写入到tableWidget 表中
            ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            int moneyOfLvl2= query.value(3).toInt()*2;
            int moneyOfLvl3=query.value(3).toInt()*3;
            QString s = QString::number(moneyOfLvl2);
            QString q = QString::number(moneyOfLvl3);

            ui->tableWidget->setItem(i,4,new QTableWidgetItem(s));
            ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);


            ui->tableWidget->setItem(i,5,new QTableWidgetItem(q));
            ui->tableWidget->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            QSqlQuery query1;
            QString sql=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='1';").arg(query.value(0).toString());
            query1.prepare(sql);
            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,6,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='2';").arg(query.value(0).toString());
            query1.prepare(sqll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,7,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,7)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqlll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='3';").arg(query.value(0).toString());
            query1.prepare(sqlll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,8,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,8)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }
            i++;
        }

    }
    db.close();
}


void admin_form::on_pushButton_clear_clicked()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    ui->lineEdit_selectedDeparturePlace->clear();
    ui->lineEdit_selectedArrivalPlace->clear();
    ui->dateEdit_selectedDate->setDate(QDate(2024,1,1));
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    db.setPort(3306);                          // 端口号，默认
    db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
    db.open();
    ui->tableWidget->clearContents();
    QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight ");//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
    qDebug()<<sqlstr;
    QSqlQuery query(db);
    query.prepare(sqlstr);//准备
    int i=0;
    if(query.exec())
    {

        while(query.next())
        {

            ui->tableWidget->setRowCount(i+1);//设置表格行数，每一次加一行
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString())); //将从数据库中表获取的数据写入到tableWidget 表中
            ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->item(i,3)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            int moneyOfLvl2= query.value(3).toInt()*2;
            int moneyOfLvl3=query.value(3).toInt()*3;
            QString s = QString::number(moneyOfLvl2);
            QString q = QString::number(moneyOfLvl3);

            ui->tableWidget->setItem(i,4,new QTableWidgetItem(s));
            ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);


            ui->tableWidget->setItem(i,5,new QTableWidgetItem(q));
            ui->tableWidget->item(i,5)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);
            QSqlQuery query1;
            QString sql=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='1';").arg(query.value(0).toString());
            query1.prepare(sql);
            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,6,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,6)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='2';").arg(query.value(0).toString());
            query1.prepare(sqll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,7,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,7)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }

            QString sqlll=QString("select count(flight_id) from seats where flight_id='%1'and seat_type_id='3';").arg(query.value(0).toString());
            query1.prepare(sqlll);

            if(query1.exec()){
                while(query1.next()){
                    ui->tableWidget->setItem(i,8,new QTableWidgetItem(query1.value(0).toString()));
                    ui->tableWidget->item(i,8)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

                }
            }
            i++;
        }

    }
    db.close();
}

