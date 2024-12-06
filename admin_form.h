#ifndef ADMIN_FORM_H
#define ADMIN_FORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class admin_form;
}
QT_END_NAMESPACE

class admin_form : public QMainWindow
{
    Q_OBJECT

public:
    admin_form(QWidget *parent = nullptr);
    ~admin_form();



private slots:
    void switchPage();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::admin_form *ui;
};
#endif // ADMIN_FORM_H
