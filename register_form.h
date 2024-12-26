#ifndef REGISTER_FORM_H
#define REGISTER_FORM_H

#include <QWidget>

namespace Ui {
class register_Form;
}

class register_Form : public QWidget
{
    Q_OBJECT

public:

    explicit register_Form(QWidget *parent = nullptr);
    ~register_Form();
    bool nflag = false;
    bool p1flag = false;
    bool p2flag = false;
    void regButtonisOn(Ui::register_Form *ui);

private slots:

    void on_name_textChanged(const QString &arg1);

    void on_pwd1_textChanged(const QString &arg1);

    void on_pwd2_textChanged(const QString &arg1);



    void on_B2_clicked();

    void on_B1_clicked();

private:
    Ui::register_Form *ui;
};

#endif // REGISTER_FORM_H
