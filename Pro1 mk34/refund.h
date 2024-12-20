#ifndef REFUND_H
#define REFUND_H

#include <QWidget>
#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>

#include <change.h>

namespace Ui {
class Refund;
}

class Refund : public QWidget
{
    Q_OBJECT

public:
    int id;
    explicit Refund(QWidget *parent = nullptr,int id=0);
    ~Refund();
signals:
    void back();
private slots:
    void on_pushButton_clicked();
    void on_Tickets_clicked();

    void on_orders_clicked(const QModelIndex &index);

    void on_cancelButton_clicked();

    void on_changeButton_clicked();

private:
    Ui::Refund *ui;
    QSqlTableModel *m;
    QSqlDatabase db;
    QModelIndex current;
    change* c;
};

#endif // REFUND_H
