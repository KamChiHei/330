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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QWidget *centralwidget;
    QPushButton *Back;
    QTableView *Tickets;
    QPushButton *BookButton;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QGroupBox *groupBox;
    QRadioButton *jjBt;
    QRadioButton *swBt;
    QRadioButton *tdBt;
    QTableView *Seats;
    QLabel *errorLb;
    QLineEdit *flight_idEdit;
    QLineEdit *fEdit;
    QLineEdit *tEdit;
    QFrame *frame;

    void setupUi(QMainWindow *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName("Book");
        Book->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Book->setWindowIcon(icon);
        Book->setStyleSheet(QString::fromUtf8("QMainWindow#Book{\n"
"background-image: url(:/new/prefix2/iconANDpic/book.jpg);\n"
"}\n"
""));
        centralwidget = new QWidget(Book);
        centralwidget->setObjectName("centralwidget");
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(50, 630, 200, 40));
        Back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"\n"
"background-color: rgba(0, 159, 252,100);\n"
"\n"
"   border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"\n"
"background-color: rgba(0, 159, 252,200);\n"
" \n"
"}"));
        Tickets = new QTableView(centralwidget);
        Tickets->setObjectName("Tickets");
        Tickets->setGeometry(QRect(300, 50, 751, 621));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(10);
        font.setBold(true);
        Tickets->setFont(font);
        BookButton = new QPushButton(centralwidget);
        BookButton->setObjectName("BookButton");
        BookButton->setGeometry(QRect(50, 290, 200, 40));
        BookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"\n"
"background-color: rgba(0, 159, 252,100);\n"
"\n"
"   border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"\n"
"\n"
"background-color: rgba(0, 159, 252,200);\n"
" \n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 190, 80, 40));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 120, 80, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(9, 50, 81, 40));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(1070, 50, 200, 300));
        groupBox->setStyleSheet(QString::fromUtf8("font: 700 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        jjBt = new QRadioButton(groupBox);
        jjBt->setObjectName("jjBt");
        jjBt->setGeometry(QRect(30, 45, 120, 40));
        jjBt->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        swBt = new QRadioButton(groupBox);
        swBt->setObjectName("swBt");
        swBt->setGeometry(QRect(30, 130, 121, 40));
        swBt->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tdBt = new QRadioButton(groupBox);
        tdBt->setObjectName("tdBt");
        tdBt->setGeometry(QRect(30, 215, 121, 40));
        tdBt->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Seats = new QTableView(centralwidget);
        Seats->setObjectName("Seats");
        Seats->setGeometry(QRect(1070, 370, 201, 300));
        Seats->horizontalHeader()->setDefaultSectionSize(200);
        errorLb = new QLabel(centralwidget);
        errorLb->setObjectName("errorLb");
        errorLb->setGeometry(QRect(50, 250, 200, 40));
        flight_idEdit = new QLineEdit(centralwidget);
        flight_idEdit->setObjectName("flight_idEdit");
        flight_idEdit->setGeometry(QRect(90, 50, 200, 40));
        flight_idEdit->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        fEdit = new QLineEdit(centralwidget);
        fEdit->setObjectName("fEdit");
        fEdit->setGeometry(QRect(90, 120, 200, 40));
        fEdit->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        tEdit = new QLineEdit(centralwidget);
        tEdit->setObjectName("tEdit");
        tEdit->setGeometry(QRect(90, 190, 200, 40));
        tEdit->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 0, 1282, 722));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        Book->setCentralWidget(centralwidget);
        frame->raise();
        Back->raise();
        Tickets->raise();
        BookButton->raise();
        label_3->raise();
        label_2->raise();
        label_5->raise();
        groupBox->raise();
        Seats->raise();
        errorLb->raise();
        flight_idEdit->raise();
        fEdit->raise();
        tEdit->raise();

        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QMainWindow *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "\350\264\255\347\245\250", nullptr));
        Back->setText(QCoreApplication::translate("Book", "\350\277\224\345\233\236", nullptr));
        BookButton->setText(QCoreApplication::translate("Book", "\350\256\242\345\272\247", nullptr));
        label_3->setText(QCoreApplication::translate("Book", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Book", "\345\207\272\345\217\221\345\234\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Book", "\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Book", "\345\272\247\344\275\215\347\261\273\345\236\213", nullptr));
        jjBt->setText(QCoreApplication::translate("Book", "\347\273\217\346\265\216\350\210\261", nullptr));
        swBt->setText(QCoreApplication::translate("Book", "\345\225\206\345\212\241\350\210\261", nullptr));
        tdBt->setText(QCoreApplication::translate("Book", "\345\244\264\347\255\211\350\210\261", nullptr));
        errorLb->setText(QString());
        tEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
