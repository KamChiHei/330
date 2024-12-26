#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();
    int orderid;
    int seatid;
    QString from;
    QString to;
    int fee;
    QString newflid;
    void getinfo(int orderid,int seatid);
    QSqlDatabase dbc;
    void getdatabase(QSqlDatabase d);

signals:
    void back();
private slots:
    void on_mytable_itemSelectionChanged();

    void on_ensureB_clicked();

    void on_cancelB_clicked();


private:
    Ui::change *ui;
};

#endif // CHANGE_H
