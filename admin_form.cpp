#include "admin_form.h"
#include "ui_admin_form.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>

const int BATCH_SIZE = 50;

// Initialize database connection
QSqlDatabase initializeDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("flight_ticket_system");
    if (!db.open()) {
        qDebug() << "Error: Unable to connect to database.";
    }
    return db;
}

admin_form::admin_form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::admin_form)
    , currentOffset(0)
    ,currentoffset2(0)
    ,currentoffset3(0)


{
    ui->setupUi(this);
    QStringList labels = {"航班号", "出发时间", "到达时间", "经济舱票价", "商务舱票价", "头等舱票价", "经济舱座位数", "商务舱座位数", "头等舱座位数"};

    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(labels);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->clearContents();

    QStringList labels2 = {"用户id", "用户名", "密码"};

    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setHorizontalHeaderLabels(labels2    );
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->clearContents();

    QStringList labels3 = {"订单id", "用户id", "座位id","订单状态"};

    ui->tableWidget_3->setColumnCount(4);
    ui->tableWidget_3->setRowCount(0);
    ui->tableWidget_3->setHorizontalHeaderLabels(labels3);
    ui->tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_3->clearContents();

    connect(ui->nextButton, &QPushButton::clicked, this, &admin_form::loadNextBatch);
    connect(ui->prevButton, &QPushButton::clicked, this, &admin_form::loadPrevBatch);
    sss=false;
    sss1=false;

}



void admin_form::load(int offset){
    QSqlDatabase db = initializeDatabase();
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight where date='2024-01-01' limit %1 offset %2").arg(BATCH_SIZE).arg(offset);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
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

void admin_form::load2(int offset){
    QSqlDatabase db = initializeDatabase();
    QString selectedDeparturePlace=ui->lineEdit_selectedDeparturePlace->text(),selectedArrivalPlace=ui->lineEdit_selectedArrivalPlace->text(),selectedDate=ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%' AND date like '%%3%' limit %4 offset %5").arg(selectedDeparturePlace,selectedArrivalPlace,selectedDate).arg(BATCH_SIZE).arg(offset);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
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

void admin_form::loada(int offset){
    QSqlDatabase db = initializeDatabase();
    QString sqlstr=QString("select flight_id,departure_time,arrival_time,base_fare from flight limit %1 offset %2").arg(BATCH_SIZE).arg(offset);//使用MYSQL查询语句获取表的数据 ，写入tableWidget中
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

admin_form::~admin_form() {
    delete ui;
}

void admin_form::loadNextBatch() {
    if(sss){
        currentoffset2 += BATCH_SIZE;
        load2(currentoffset2);
    }
    else if(sss1){
        currentoffset3 += BATCH_SIZE;
        loada(currentoffset3);
    }
    else{
        currentOffset += BATCH_SIZE;
        load(currentOffset);
    }


}

void admin_form::loadPrevBatch() {
    if(sss){
        if (currentoffset2 >= BATCH_SIZE) {
            currentoffset2 -= BATCH_SIZE;
        }
        else {
            currentoffset2 = 0;
        }
        load2(currentoffset2);
    }
    else if(sss1){
        if (currentoffset3 >= BATCH_SIZE) {
            currentoffset3 -= BATCH_SIZE;
        }
        else {
            currentoffset3 = 0;
        }
        loada(currentoffset3);
    }
    else{
        if (currentOffset >= BATCH_SIZE) {
            currentOffset -= BATCH_SIZE;
        } else {
            currentOffset = 0;
        }
        load(currentOffset);
    }
}

void admin_form::switchPage() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button == ui->pushButton_addFlight)
        ui->stackedWidget->setCurrentIndex(0);
    else if (button == ui->pushButton_deleteFlight)
        ui->stackedWidget->setCurrentIndex(1);
    else if (button == ui->pushButton_searchFlight){
         ui->stackedWidget->setCurrentIndex(2);
        load(currentOffset);
    }

    else if (button == ui->pushButton_4)
        ui->stackedWidget->setCurrentIndex(3);
    else if (button == ui->pushButton_user)
    ui->stackedWidget->setCurrentIndex(4);
    else if (button == ui->pushButton_order)
        ui->stackedWidget->setCurrentIndex(5);
}

void admin_form::on_pushButton_addFlight_clicked() {
    switchPage();
}

void admin_form::on_pushButton_deleteFlight_clicked() {
    switchPage();
}

void admin_form::on_pushButton_searchFlight_clicked() {
    switchPage();
}

void admin_form::on_pushButton_4_clicked() {
    switchPage();
}


char admin_form::getRandomChar() {
    return 'A' + QRandomGenerator::global()->bounded(26);
}

char admin_form::getRandomDigit() {
    return '0' + QRandomGenerator::global()->bounded(10);
}

QString admin_form::generateCode() {
    QString code ;
    code += getRandomChar();
    for (int i = 0; i < 5; i++) {
        code += getRandomDigit();
    }
    return code;
}

void admin_form::addSeat(const QString &flightId, const QString &seatTypeId, int seatAmount) {
    QSqlDatabase db = initializeDatabase();
    for (int i = 1; i <= seatAmount; i++) {
        QString sqll = "select seat_id from seats order by seat_id desc limit 1";
        QSqlQuery query2(db), query3(db);
        query2.prepare(sqll);
        if (query2.exec() && query2.next()) {
            int id = query2.value(0).toInt() + 1;
            QString code = generateCode();
            QString sql2 = QString("insert into seats(seat_id, flight_id, seat_type_id, seat_number) values('%1', '%2', '%3', '%4')").arg(id).arg(flightId).arg(seatTypeId).arg(code);
            query3.exec(sql2);
        }
    }
    db.close();
}

void admin_form::addFlight(const QString &flightId, const QString &departurePlace, const QString &arrivalPlace, const QString &date, const QString &departureTime, const QString &arrivalTime, int baseFare, int seatAmountOfLvl1, int seatAmountOfLvl2, int seatAmountOfLvl3) {
    addSeat(flightId, "1", seatAmountOfLvl1);
    addSeat(flightId, "2", seatAmountOfLvl2);
    addSeat(flightId, "3", seatAmountOfLvl3);
    QSqlDatabase db = initializeDatabase();
    QSqlQuery query(db);
    QString sql = QString("insert into flight (flight_id, departure_place, arrival_place, departure_time, arrival_time, date, base_fare) values('%1', '%2', '%3', '%4', '%5', '%6', '%7')").arg(flightId, departurePlace, arrivalPlace, departureTime, arrivalTime, date, QString::number(baseFare));
    query.exec(sql);
    db.close();
}

void admin_form::clear() {
    ui->dateEdit_date->setDate(QDate(2024, 1, 1));
    ui->lineEdit_departurePlace->clear();
    ui->lineEdit_arrivalPlace->clear();
    ui->lineEdit_flightId->clear();
    ui->lineEdit_baseFare->clear();
    ui->lineEdit_moneyOfLvl2->clear();
    ui->lineEdit_moneyOfLvl3->clear();
    ui->lineEdit_seatAmountOfLvl1->clear();
    ui->lineEdit_seatAmountOfLvl2->clear();
    ui->lineEdit_seatAmountOfLvl3->clear();
    ui->timeEdit_arrivalTime->setTime(QTime(0, 0));
    ui->timeEdit_departureTime->setTime(QTime(0, 0));
}

void admin_form::on_pushButton_add_clicked() {
    QString flightId = ui->lineEdit_flightId->text(), departurePlace = ui->lineEdit_departurePlace->text(), arrivalPlace = ui->lineEdit_arrivalPlace->text(), date = ui->dateEdit_date->date().toString("yyyy-MM-dd"), departureTime = ui->timeEdit_departureTime->time().toString(), arrivalTime = ui->timeEdit_arrivalTime->time().toString();
    int baseFare = ui->lineEdit_baseFare->text().toInt(), seatAmountOfLvl1 = ui->lineEdit_seatAmountOfLvl1->text().toInt(), seatAmountOfLvl2 = ui->lineEdit_seatAmountOfLvl2->text().toInt(), seatAmountOfLvl3 = ui->lineEdit_seatAmountOfLvl3->text().toInt();
    addFlight(flightId, departurePlace, arrivalPlace, date, departureTime, arrivalTime, baseFare, seatAmountOfLvl1, seatAmountOfLvl2, seatAmountOfLvl3);
    clear();
}

void admin_form::delSeat(const QString &delFlightId) {
    QSqlDatabase db = initializeDatabase();
    QSqlQuery query(db);
    QString sql = QString("Delete from seats where flight_id='%1'").arg(delFlightId);
    query.exec(sql);
    db.close();
}

void admin_form::delFlight(const QString &delFlightId) {
    delSeat(delFlightId);
    QSqlDatabase db = initializeDatabase();
    QSqlQuery query(db);
    QString sql = QString("Delete from flight where flight_id='%1'").arg(delFlightId);
    query.exec(sql);
    db.close();
}

void admin_form::clear2() {
    ui->lineEdit_delFlightId->clear();
}

void admin_form::on_pushButton_delete_clicked() {
    QString delFlightId = ui->lineEdit_delFlightId->text();
    delFlight(delFlightId);
    clear2();
}

void admin_form::on_pushButton_update_clicked() {
    QSqlDatabase db = initializeDatabase();
    QSqlQuery query(db);
    QString needToUpdateFlightId = ui->lineEdit_needToUpdateFlightId->text(), needToUpdateDate = ui->dateEdit_needToUpdateDate->date().toString("yyyy-MM-dd"), needToUpdateDepartureTime = ui->timeEdit_needToUpdateDepartureTime->time().toString(), needToUpdateArrivalTime = ui->timeEdit_needToUpdateArrivalTime->time().toString(), needToUpdateDeparturePlace = ui->lineEdit_needToUpdateDeparturePlace->text(), needToUpdateArrivalPlace = ui->lineEdit_needToUpdateArrivalPlace->text(), needToUpdateBaseFare = ui->lineEdit_needToUpdateBaseFare->text();
    QString sql = QString("UPDATE flight SET date='%1', departure_time='%2', arrival_time='%3', departure_place='%4', arrival_place='%5', base_fare='%6' where flight_id='%7'").arg(needToUpdateDate, needToUpdateDepartureTime, needToUpdateArrivalTime, needToUpdateDeparturePlace, needToUpdateArrivalPlace, needToUpdateBaseFare, needToUpdateFlightId);
    query.exec(sql);
    db.close();
    clear3();
}

void admin_form::on_lineEdit_baseFare_editingFinished() {
    int seatMoneyOfLvl2 = ui->lineEdit_baseFare->text().toInt() * 2;
    int seatMoneyOfLvl3 = ui->lineEdit_baseFare->text().toInt() * 3;
    if (!ui->lineEdit_baseFare->text().isEmpty()) {
        ui->lineEdit_moneyOfLvl2->setText(QString::number(seatMoneyOfLvl2));
        ui->lineEdit_moneyOfLvl3->setText(QString::number(seatMoneyOfLvl3));
    }
}

void admin_form::clear3() {
    ui->lineEdit_needToUpdateFlightId->clear();
    ui->lineEdit_needToUpdateArrivalPlace->clear();
    ui->timeEdit_needToUpdateArrivalTime->setTime(QTime(0, 0));
    ui->lineEdit_needToUpdateBaseFare->clear();
    ui->lineEdit_needToUpdateDeparturePlace->clear();
    ui->timeEdit_needToUpdateDepartureTime->clear();
    ui->dateEdit_needToUpdateDate->setDate(QDate(2024, 1, 1));
}

void admin_form::on_lineEdit_selectedDeparturePlace_textChanged(const QString &arg1) {
    ui->tableWidget->clearContents();
    ui->label_status->setText("");
    sss=true;
    sss1=false;
    currentOffset=0;
    currentoffset2=0;
    currentoffset3=0;
    load2(currentoffset2);

}

void admin_form::on_lineEdit_selectedArrivalPlace_textChanged(const QString &arg1) {
    ui->tableWidget->clearContents();
    ui->label_status->setText("");
    sss=true;
    sss1=false;
    currentOffset=0;
    currentoffset2=0;
    currentoffset3=0;
    load2(currentoffset2);

}

void admin_form::on_dateEdit_selectedDate_dateChanged(const QDate &date) {
    ui->tableWidget->clearContents();
    ui->label_status->setText("");
    sss=true;
    sss1=false;
    currentOffset=0;
    currentoffset2=0;
    currentoffset3=0;
    load2(currentoffset2);


}


void admin_form::on_pushButton_clear_clicked() {
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    ui->lineEdit_selectedDeparturePlace->clear();
    ui->lineEdit_selectedArrivalPlace->clear();
    ui->dateEdit_selectedDate->setDate(QDate(2024, 1, 1));
    sss=false;
    sss1=false;
    currentOffset=0;
    currentoffset2=0;
    currentoffset3=0;
    load(currentOffset);
    ui->label_status->setText("");
}

void admin_form::on_pushButton_searchall_clicked()
{
    currentOffset=0;
    currentoffset2=0;
    currentoffset3=0;
    sss=false;
    sss1=true;
    ui->label_status->setText("正在显示所有航班");
    loada(currentoffset3);
}


void admin_form::on_pushButton_user_clicked()
{
    switchPage();
}


void admin_form::on_pushButton_order_clicked()
{
    switchPage();
}

