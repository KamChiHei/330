#ifndef BOOK_H
#define BOOK_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>



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
    void cl();
    void fin();
    void on_Back_clicked();
    void on_FindButton_clicked();


    void on_AllButton_clicked();

    void on_FindButton_ft_clicked();


    void on_BookButton_clicked();

    void on_Tickets_doubleClicked(const QModelIndex &index);

    void on_Tickets_clicked(const QModelIndex &index);

    void on_flight_idEdit_textChanged();

    void on_fEdit_textChanged();

    void on_tEdit_textChanged();

private:
    Ui::Book *ui;
    QSqlDatabase db;
    QSqlTableModel *m;
    QSqlTableModel *n;
    QModelIndex current;
};

#endif // BOOK_H
