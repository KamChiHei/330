#ifndef ADMIN_FORM_H
#define ADMIN_FORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class admin_form;
}
QT_END_NAMESPACE

class admin_form : public QMainWindow
{
    Q_OBJECT

public:
    admin_form(QWidget *parent = nullptr);
    ~admin_form();



private slots:
    void clear();

    void clear2();

    void clear3();

    char getRandomChar();

    char getRandomDigit();

    QString generateCode() ;

    void switchPage();

    void addSeat(QString flightId,QString seatTypeId,int seatAmount);

    void addFlight(QString flightId,QString departurePlace,QString arrivalPlace,QString date,QString departureTime,QString arrivalTime,int baseFare,int seatAmountOfLvl1,int seatAmountOfLvl2,int seatAmountOfLvl3);

    void on_pushButton_4_clicked();

    void delSeat(QString delFlightId);

    void delFlight(QString delFlightId);

    void on_pushButton_delete_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_addFlight_clicked();

    void on_pushButton_deleteFlight_clicked();

    void on_pushButton_searchFlight_clicked();

    void on_lineEdit_baseFare_editingFinished();

    void on_pushButton_update_clicked();

    void on_lineEdit_selectedDeparturePlace_textChanged(const QString &arg1);

    void on_lineEdit_selectedArrivalPlace_textChanged(const QString &arg1);

    void on_dateEdit_selectedDate_dateChanged(const QDate &date);

    void on_pushButton_clear_clicked();

private:
    Ui::admin_form *ui;
};
#endif // ADMIN_FORM_H
