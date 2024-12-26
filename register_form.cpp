#include "register_form.h"
#include "ui_register_form.h"
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlError>



register_Form::register_Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::register_Form)
{
    ui->setupUi(this);

    ui->nametips->hide();
    ui->pwdtips1->hide();
    ui->pwdtips2->hide();
    ui->B1->setEnabled(false);

}

register_Form::~register_Form()
{
    delete ui;
}

void register_Form::regButtonisOn(Ui::register_Form *ui){//控制注册按钮是否启用
    if(nflag && p1flag && p2flag){
        ui->B1->setEnabled(true);
    }else{
        ui->B1->setEnabled(false);
    }
}




void register_Form::on_name_textChanged(const QString &arg1)
{
    if(ui->name->text().trimmed().isEmpty()){//用户名为空时

        ui->nametips->setText("用户名不能为空");
        ui->nametips->show();
    }else{
        ui->nametips->hide();
        //connect with SQL
        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
        db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
        db.setPort(3306);                          // 端口号，默认
        db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
        db.setUserName("root");
        db.setPassword("Kam2379765202*");
        db.open();

        //SQL 查询用户名
        QString opt = QString("select password from users where username='%0'").arg(ui->name->text().trimmed());
        QSqlQuery qopt(db);
        qopt.exec(opt);

        if(qopt.next()){
            ui->nametips->setText("用户名已存在");
            ui->nametips->show();
            nflag = false;
        }else{
           nflag = true;
        }

        //disconnect with SQL
        db.close();
    }

    regButtonisOn(ui);
}


void register_Form::on_pwd1_textChanged(const QString &arg1)
{
    if(ui->pwd1->text().trimmed().isEmpty()){//pwd为空时

        ui->pwdtips1->setText("密码不能为空");
        ui->pwdtips1->show();
        p1flag = false;
    }else{
        ui->pwdtips1->hide();
        p1flag = true;
    }

    if(ui->pwd1->text()!=ui->pwd2->text()){//密码不一致
        ui->pwdtips2->setText("请确认输入的密码一致");
        ui->pwdtips2->show();
        p2flag = false;
    }else{
        ui->pwdtips2->hide();
        p2flag = true;
    }
    regButtonisOn(ui);
}


void register_Form::on_pwd2_textChanged(const QString &arg1)
{
    if(ui->pwd1->text()!=ui->pwd2->text()){//密码不一致

        ui->pwdtips2->setText("请确认输入的密码一致");
        ui->pwdtips2->show();
        p2flag = false;
    }else{
        ui->pwdtips2->hide();
        p2flag = true;
    }
    regButtonisOn(ui);
}


void register_Form::on_B2_clicked()
{
    this->close();
}


void register_Form::on_B1_clicked()
{
    if(nflag&&p1flag&&p2flag){
        //connect with SQL
        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
        db.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
        db.setPort(3306);                          // 端口号，默认
        db.setDatabaseName("flight_ticket_system");           // ODBC 数据源名称
        db.open();

        //SQL 插入数据
        QString opt = QString("insert into users (username,password,level) values ('%0','%1',0)").arg(ui->name->text().trimmed(),ui->pwd1->text());
        QSqlQuery qopt(db);
        qopt.exec(opt);

        //disconnect with SQL
        db.close();

    }

    this->close();
}

