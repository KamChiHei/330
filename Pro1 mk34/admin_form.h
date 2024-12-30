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

    void load(int offset);

    void load2(int offset);

    void loada(int offset);


    void loadNextBatch();

    void loadPrevBatch();

    void loadNextBatch2();

    void loadPrevBatch2();


    void loadNextBatch3();

    void loadPrevBatch3();

    void on_pushButton_searchall_clicked();

    void on_pushButton_user_clicked();

    void on_pushButton_order_clicked();

    void loaduser(int offset);

    void loaduser2(int offset);

    void loadorder(int offset);

    void loadorder2(int offset);

    void loadorder3(int offset);

    void loadorder4(int offset);


    void on_lineEdit_username_textChanged(const QString &arg1);

    void on_lineEdit_password_textChanged(const QString &arg1);

    void on_pushButton_clear_7_clicked();

    void on_lineEdit_orderid_textChanged(const QString &arg1);

    void on_lineEdit_userid_textChanged(const QString &arg1);

    void on_lineEdit_seatid_textChanged(const QString &arg1);

    void on_pushButton_clear_4_clicked();

    void abc();

    void on_radioButton_all_clicked();

    void on_radioButton_cancel_clicked();

    void on_radioButton_paid_clicked();

    void on_lineEdit_userid_2_textChanged(const QString &arg1);

    void on_pushButton_clear_8_clicked();


    void on_lineEdit_needToUpdateFlightId_editingFinished();

    void on_pushButton_clear_9_clicked();

    void on_lineEdit_selectedFlightId_textChanged(const QString &arg1);

    void on_pushButton_clear_3_clicked();

    void delOrder(const QString &delFlightID);

    void loadall2(int offset);



    void on_lineEdit_baseFare_textChanged(const QString &arg1);
    void loadmoney();

private:
    Ui::admin_form *ui;

    int currentOffset;
    int currentoffset2;
    int currentoffset3;
    int currentoffset4;
    bool sss;
    bool sss1;
    bool sss2;

    int useroffset1;
    int useroffset2;
    bool aaa;


    int orderoffset1;
    int orderoffset2;
    int orderoffset3;
    int orderoffset4;
    bool bbb;
    bool bbb1;
    bool bbb2;

    int seatMoneyOfLvl2,seatMoneyOfLvl3;

};
#endif // ADMIN_FORM_H
