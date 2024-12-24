#include "admin_form.h"
#include "ui_admin_form.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>

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
{
    ui->setupUi(this);
    QStringList labels = {"航班号", "出发时间", "到达时间", "经济舱票价", "商务舱票价", "头等舱票价", "经济舱座位数", "商务舱座位数", "头等舱座位数"};

    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(labels);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    loadData();
}



void admin_form::setTableItem(int row, int column, const QString &text) {
    ui->tableWidget->setItem(row, column, new QTableWidgetItem(text));
    ui->tableWidget->item(row, column)->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
}

void admin_form::loadData() {
    QSqlDatabase db = initializeDatabase();
    ui->tableWidget->clearContents();
    QString sqlstr = "select flight_id, departure_time, arrival_time, base_fare from flight";
    QSqlQuery query(db);
    query.prepare(sqlstr);
    int i = 0;
    if (query.exec()) {
        while (query.next()) {
            ui->tableWidget->setRowCount(i + 1);
            setTableItem(i, 0, query.value(0).toString());
            setTableItem(i, 1, query.value(1).toString());
            setTableItem(i, 2, query.value(2).toString());
            setTableItem(i, 3, query.value(3).toString());

            int moneyOfLvl2 = query.value(3).toInt() * 2;
            int moneyOfLvl3 = query.value(3).toInt() * 3;
            setTableItem(i, 4, QString::number(moneyOfLvl2));
            setTableItem(i, 5, QString::number(moneyOfLvl3));

            setSeatCount(i, query.value(0).toString(), "1", 6);
            setSeatCount(i, query.value(0).toString(), "2", 7);
            setSeatCount(i, query.value(0).toString(), "3", 8);
            i++;
        }
    }
    db.close();
}


void admin_form::setSeatCount(int row, const QString &flightId, const QString &seatTypeId, int column) {
    QSqlDatabase db = initializeDatabase();
    QSqlQuery query(db);
    QString sql = QString("select count(flight_id) from seats where flight_id='%1' and seat_type_id='%2'").arg(flightId, seatTypeId);
    query.prepare(sql);
    if (query.exec() && query.next()) {
        setTableItem(row, column, query.value(0).toString());
    }
    db.close();
}

admin_form::~admin_form() {
    delete ui;
}

void admin_form::switchPage() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button == ui->pushButton_addFlight)
        ui->stackedWidget->setCurrentIndex(0);
    else if (button == ui->pushButton_deleteFlight)
        ui->stackedWidget->setCurrentIndex(1);
    else if (button == ui->pushButton_searchFlight)
        ui->stackedWidget->setCurrentIndex(2);
    else if (button == ui->pushButton_4)
        ui->stackedWidget->setCurrentIndex(3);
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
    loadFilteredData();
}

void admin_form::on_lineEdit_selectedArrivalPlace_textChanged(const QString &arg1) {
    loadFilteredData();
}

void admin_form::on_dateEdit_selectedDate_dateChanged(const QDate &date) {
    loadFilteredData();
}

void admin_form::loadFilteredData() {
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    QSqlDatabase db = initializeDatabase();
    ui->tableWidget->clearContents();
    QString selectedDeparturePlace = ui->lineEdit_selectedDeparturePlace->text(), selectedArrivalPlace = ui->lineEdit_selectedArrivalPlace->text(), selectedDate = ui->dateEdit_selectedDate->date().toString("yyyy-MM-dd");
    QString sqlstr = QString("select flight_id, departure_time, arrival_time, base_fare from flight WHERE departure_place like '%%1%' AND arrival_place like '%%2%' AND date like '%%3%'").arg(selectedDeparturePlace, selectedArrivalPlace, selectedDate);
    QSqlQuery query(db);
    query.prepare(sqlstr);
    int i = 0;
    if (query.exec()) {
        while (query.next()) {
            ui->tableWidget->setRowCount(i + 1);
            setTableItem(i, 0, query.value(0).toString());
            setTableItem(i, 1, query.value(1).toString());
            setTableItem(i, 2, query.value(2).toString());
            setTableItem(i, 3, query.value(3).toString());

            int moneyOfLvl2 = query.value(3).toInt() * 2;
            int moneyOfLvl3 = query.value(3).toInt() * 3;
            setTableItem(i, 4, QString::number(moneyOfLvl2));
            setTableItem(i, 5, QString::number(moneyOfLvl3));

            setSeatCount(i, query.value(0).toString(), "1", 6);
            setSeatCount(i, query.value(0).toString(), "2", 7);
            setSeatCount(i, query.value(0).toString(), "3", 8);
            i++;
        }
    }
    db.close();
}

void admin_form::on_pushButton_clear_clicked() {
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->clearContents();
    ui->lineEdit_selectedDeparturePlace->clear();
    ui->lineEdit_selectedArrivalPlace->clear();
    ui->dateEdit_selectedDate->setDate(QDate(2024, 1, 1));
    loadData();
}
