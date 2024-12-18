#ifndef USER_FORM_H
#define USER_FORM_H

#include <QWidget>
#include<del_user.h>
#include<book.h>
#include<refund.h>
namespace Ui {
class user_Form;
}

class user_Form : public QWidget
{
    Q_OBJECT

public:
    explicit user_Form(QWidget *parent = nullptr);
    ~user_Form();
    void getinfo(int id=0,QString uname="");
    bool haveTikets(int uid);
    int uid;
    QString username;
    //
    Book* b=NULL;
    Refund* r=NULL;


private slots:
    void on_del_uid_clicked();

    void on_BookButton_clicked();

    void on_RefundButton_clicked();


private:
    Ui::user_Form *ui;
    del_user duF;
};

#endif // USER_FORM_H
