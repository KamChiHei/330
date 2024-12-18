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


private:
    Ui::MainWindow *ui;
    user_Form uF;
    admin_form aF;
    register_Form regF;
};
#endif // LOGIN_H
