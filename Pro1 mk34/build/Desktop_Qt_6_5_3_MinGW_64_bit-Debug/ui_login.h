/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *login_button;
    QLabel *login_name;
    QLabel *login_pwd;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(335, 367);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login_button = new QPushButton(centralwidget);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(140, 250, 56, 18));
        login_name = new QLabel(centralwidget);
        login_name->setObjectName("login_name");
        login_name->setGeometry(QRect(50, 80, 40, 12));
        login_pwd = new QLabel(centralwidget);
        login_pwd->setObjectName("login_pwd");
        login_pwd->setGeometry(QRect(50, 130, 40, 12));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 80, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(110, 130, 113, 20));
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(250, 290, 81, 31));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::HelpAbout")));
        commandLinkButton->setIcon(icon);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 335, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\205\245", nullptr));
        login_name->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        login_pwd->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
