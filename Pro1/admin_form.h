#ifndef ADMIN_FORM_H
#define ADMIN_FORM_H

#include <QWidget>

namespace Ui {
class admin_Form;
}

class admin_Form : public QWidget
{
    Q_OBJECT

public:
    explicit admin_Form(QWidget *parent = nullptr);
    ~admin_Form();

private:
    Ui::admin_Form *ui;
};

#endif // ADMIN_FORM_H
