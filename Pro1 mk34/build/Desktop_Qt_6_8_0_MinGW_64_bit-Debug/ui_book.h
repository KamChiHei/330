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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QWidget *centralwidget;
    QTableView *Tickets;
    QFrame *frame;
    QLineEdit *flight_idEdit;
    QLineEdit *fEdit;
    QLineEdit *tEdit;
    QPushButton *BookButton;
    QPushButton *Back;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QMainWindow *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName("Book");
        Book->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Book->setWindowIcon(icon);
        centralwidget = new QWidget(Book);
        centralwidget->setObjectName("centralwidget");
        Tickets = new QTableView(centralwidget);
        Tickets->setObjectName("Tickets");
        Tickets->setGeometry(QRect(300, 0, 751, 600));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 0, 1282, 721));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"\n"
"background-color: rgba(255, 255, 255, 100);\n"
"background-image: url(:/new/prefix2/iconANDpic/book.jpg);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        flight_idEdit = new QLineEdit(frame);
        flight_idEdit->setObjectName("flight_idEdit");
        flight_idEdit->setGeometry(QRect(110, 40, 160, 40));
        flight_idEdit->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        fEdit = new QLineEdit(frame);
        fEdit->setObjectName("fEdit");
        fEdit->setGeometry(QRect(109, 90, 160, 40));
        fEdit->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        tEdit = new QLineEdit(frame);
        tEdit->setObjectName("tEdit");
        tEdit->setGeometry(QRect(109, 140, 160, 40));
        tEdit->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        BookButton = new QPushButton(frame);
        BookButton->setObjectName("BookButton");
        BookButton->setGeometry(QRect(50, 200, 200, 40));
        BookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        Back = new QPushButton(frame);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(50, 270, 200, 40));
        Back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(9, 40, 101, 40));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 80, 40));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 80, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Book->setCentralWidget(centralwidget);
        frame->raise();
        Tickets->raise();

        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QMainWindow *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "\350\264\255\347\245\250", nullptr));
        tEdit->setText(QString());
        BookButton->setText(QCoreApplication::translate("Book", "\350\256\242\345\272\247", nullptr));
        Back->setText(QCoreApplication::translate("Book", "\350\277\224\345\233\236", nullptr));
        label_4->setText(QCoreApplication::translate("Book", "\350\210\252\347\217\255\347\274\226\345\217\267:", nullptr));
        label_3->setText(QCoreApplication::translate("Book", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Book", "\345\207\272\345\217\221\345\234\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
