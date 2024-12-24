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

    void addSeat(const QString &flightId, const QString &seatTypeId, int seatAmount);

    void addFlight(const QString &flightId, const QString &departurePlace, const QString &arrivalPlace, const QString &date, const QString &departureTime, const QString &arrivalTime, int baseFare, int seatAmountOfLvl1, int seatAmountOfLvl2, int seatAmountOfLvl3);

    void on_pushButton_4_clicked();

    void delSeat(const QString &delFlightId);

    void delFlight(const QString &delFlightId);

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

    void loadData();

    void setTableItem(int row, int column, const QString &text);

    void setSeatCount(int row, const QString &flightId, const QString &seatTypeId, int column);

    void loadFilteredData();

private:
    Ui::admin_form *ui;
};
#endif // ADMIN_FORM_H
