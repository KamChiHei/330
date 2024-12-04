#ifndef USER_FORM_H
#define USER_FORM_H

#include <QWidget>

namespace Ui {
class user_Form;
}

class user_Form : public QWidget
{
    Q_OBJECT

public:
    explicit user_Form(QWidget *parent = nullptr);
    ~user_Form();

private:
    Ui::user_Form *ui;
};

#endif // USER_FORM_H
