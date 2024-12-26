#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"admin_form.h"
#include"register_form.h"
#include<user_form.h>
#include<QWidget>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int level;

private slots:
    void on_login_button_clicked();


    void on_commandLinkButton_clicked();


    void on_commandLinkButton_2_clicked();

    void on_commandLinkButton_3_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    admin_form aF;
    user_Form uF;

    register_Form regF;
};
#endif // LOGIN_H
