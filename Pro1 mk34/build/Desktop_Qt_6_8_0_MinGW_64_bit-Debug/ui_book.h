/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *Back;
    QTableView *Tickets;
    QPushButton *BookButton;
    QLabel *label_3;
    QLabel *label_2;
    QTableView *Seats_types;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *flight_idEdit;
    QLineEdit *fEdit;
    QLineEdit *tEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName("Book");
        Book->resize(955, 628);
        centralwidget = new QWidget(Book);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(230, 10, 61, 31));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(550, 490, 93, 28));
        Tickets = new QTableView(centralwidget);
        Tickets->setObjectName("Tickets");
        Tickets->setGeometry(QRect(0, 40, 571, 351));
        BookButton = new QPushButton(centralwidget);
        BookButton->setObjectName("BookButton");
        BookButton->setGeometry(QRect(550, 420, 92, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 490, 60, 27));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 450, 60, 28));
        Seats_types = new QTableView(centralwidget);
        Seats_types->setObjectName("Seats_types");
        Seats_types->setGeometry(QRect(590, 100, 361, 141));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(740, 60, 71, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 420, 71, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 418, 144, 97));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        flight_idEdit = new QLineEdit(widget);
        flight_idEdit->setObjectName("flight_idEdit");

        verticalLayout->addWidget(flight_idEdit);

        fEdit = new QLineEdit(widget);
        fEdit->setObjectName("fEdit");

        verticalLayout->addWidget(fEdit);

        tEdit = new QLineEdit(widget);
        tEdit->setObjectName("tEdit");

        verticalLayout->addWidget(tEdit);

        Book->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Book);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 955, 24));
        Book->setMenuBar(menubar);
        statusbar = new QStatusBar(Book);
        statusbar->setObjectName("statusbar");
        Book->setStatusBar(statusbar);

        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QMainWindow *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Book", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\256\242\347\245\250\357\274\201</p></body></html>", nullptr));
        Back->setText(QCoreApplication::translate("Book", "\350\277\224\345\233\236", nullptr));
        BookButton->setText(QCoreApplication::translate("Book", "\350\256\242\345\272\247", nullptr));
        label_3->setText(QCoreApplication::translate("Book", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Book", "\345\207\272\345\217\221\345\234\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Book", "\345\272\247\344\275\215\347\261\273\345\236\213", nullptr));
        label_5->setText(QCoreApplication::translate("Book", "\350\210\252\347\217\255\347\274\226\345\217\267\357\274\232", nullptr));
        tEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
