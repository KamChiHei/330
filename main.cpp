#include "login.h"

#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QMessageBox>
#include <QApplication>
#include<QProcess>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    int ret = a.exec(); //注销后重启，回到注册界面
    if (ret == 773) {
        QProcess::startDetached(qApp->applicationFilePath(), QStringList());
        return 0;
    }

    return a.exec();
}
