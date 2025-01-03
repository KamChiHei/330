#ifndef BOOK_H
#define BOOK_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>
#include<QStandardItem>



namespace Ui {
class Book;
}

class Book : public QMainWindow
{
    Q_OBJECT

public:
    int id;
    explicit Book(QWidget *parent = nullptr,int id=0);
    ~Book();
    QString flid;
    QString totxt;
    QString fromtxt;

signals:
    void back();
private slots:
    void changeHead1();
    void cl();
    void fin();
    void on_Back_clicked();



    void on_BookButton_clicked();


    void on_Tickets_clicked(const QModelIndex &index);

    void on_flight_idEdit_textChanged();

    void on_fEdit_textChanged();

    void on_tEdit_textChanged();

    void on_jjBt_clicked();



    void on_swBt_clicked();

    void on_tdBt_clicked();

    void on_Seats_clicked(const QModelIndex &index);

private:
    Ui::Book *ui;
    QSqlDatabase db;
    QSqlTableModel *m;
    QSqlTableModel *s;
    int seat_type=0;
    QModelIndex current=QModelIndex();
    QModelIndex current_seat=QModelIndex();
};

#endif // BOOK_H
