#ifndef DEL_USER_H
#define DEL_USER_H

#include <QWidget>

namespace Ui {
class del_user;
}

class del_user : public QWidget
{
    Q_OBJECT

public:
    explicit del_user(QWidget *parent = nullptr);
    ~del_user();
    void Dgetinfo(int id=0,QString uname="");
    int uid;

private slots:
    void on_delButton_clicked();

    void on_nodelButton_clicked();

private:
    Ui::del_user *ui;
};

#endif // DEL_USER_H
