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
    static bool nflag;
    static bool p1flag;
    static bool p2flag;
    void regButtonisOn(Ui::register_Form *ui);

private slots:
    void on_pushButton_clicked();

    void on_name_textChanged(const QString &arg1);

    void on_pwd1_textChanged(const QString &arg1);

    void on_pwd2_textChanged(const QString &arg1);



private:
    Ui::register_Form *ui;
};

#endif // REGISTER_FORM_H
