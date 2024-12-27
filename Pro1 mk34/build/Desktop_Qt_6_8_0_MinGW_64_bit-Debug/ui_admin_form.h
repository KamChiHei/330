/********************************************************************************
** Form generated from reading UI file 'admin_form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_FORM_H
#define UI_ADMIN_FORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_form
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_add;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QDateEdit *dateEdit_date;
    QLineEdit *lineEdit_flightId;
    QTimeEdit *timeEdit_departureTime;
    QLineEdit *lineEdit_departurePlace;
    QLineEdit *lineEdit_arrivalPlace;
    QTimeEdit *timeEdit_arrivalTime;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_baseFare;
    QLineEdit *lineEdit_seatAmountOfLvl1;
    QLineEdit *lineEdit_seatAmountOfLvl3;
    QLineEdit *lineEdit_seatAmountOfLvl2;
    QLineEdit *lineEdit_moneyOfLvl2;
    QLineEdit *lineEdit_moneyOfLvl3;
    QLabel *label;
    QLabel *label_Note;
    QPushButton *pushButton_clear_8;
    QWidget *page_13;
    QLabel *label_2;
    QLabel *label_16;
    QLineEdit *lineEdit_delFlightId;
    QPushButton *pushButton_delete;
    QLabel *label_Note_3;
    QPushButton *pushButton_clear_7;
    QWidget *page_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEdit_selectedDeparturePlace;
    QLineEdit *lineEdit_selectedArrivalPlace;
    QDateEdit *dateEdit_selectedDate;
    QTableWidget *tableWidget;
    QPushButton *pushButton_clear;
    QLabel *label_3;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QLabel *label_status;
    QPushButton *pushButton_searchall;
    QLineEdit *lineEdit_selectedFlightId;
    QLabel *label_29;
    QWidget *page_2;
    QLabel *label_4;
    QLabel *label_21;
    QLineEdit *lineEdit_needToUpdateFlightId;
    QDateEdit *dateEdit_needToUpdateDate;
    QTimeEdit *timeEdit_needToUpdateDepartureTime;
    QTimeEdit *timeEdit_needToUpdateArrivalTime;
    QLineEdit *lineEdit_needToUpdateDeparturePlace;
    QLineEdit *lineEdit_needToUpdateArrivalPlace;
    QPushButton *pushButton_update;
    QLineEdit *lineEdit_needToUpdateBaseFare;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_Note_4;
    QPushButton *pushButton_clear_9;
    QWidget *page_4;
    QTableWidget *tableWidget_2;
    QLabel *label_17;
    QLineEdit *lineEdit_username;
    QLabel *label_57;
    QLineEdit *lineEdit_password;
    QLabel *label_58;
    QPushButton *nextButton_3;
    QPushButton *prevButton_3;
    QPushButton *pushButton_clear_3;
    QLineEdit *lineEdit_userid_2;
    QLabel *label_62;
    QWidget *page_5;
    QTableWidget *tableWidget_3;
    QLabel *label_28;
    QLineEdit *lineEdit_orderid;
    QLabel *label_59;
    QLineEdit *lineEdit_userid;
    QLabel *label_60;
    QLineEdit *lineEdit_seatid;
    QLabel *label_61;
    QRadioButton *radioButton_all;
    QRadioButton *radioButton_cancel;
    QRadioButton *radioButton_paid;
    QPushButton *prevButton_4;
    QPushButton *pushButton_clear_4;
    QPushButton *nextButton_4;
    QPushButton *pushButton_addFlight;
    QPushButton *pushButton_deleteFlight;
    QPushButton *pushButton_searchFlight;
    QPushButton *pushButton_4;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_user;
    QPushButton *pushButton_order;

    void setupUi(QMainWindow *admin_form)
    {
        if (admin_form->objectName().isEmpty())
            admin_form->setObjectName("admin_form");
        admin_form->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        admin_form->setWindowIcon(icon);
        admin_form->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(admin_form);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	\n"
"	background-image: url(:/new/prefix2/iconANDpic/adminF(1280x720).png);\n"
"\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(200, 0, 1080, 720));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        pushButton_add = new QPushButton(page);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(440, 470, 200, 40));
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 100, 80, 40));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(229, 160, 91, 40));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(240, 220, 80, 40));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(560, 100, 80, 40));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(549, 160, 91, 40));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(560, 220, 80, 40));
        label_10->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dateEdit_date = new QDateEdit(page);
        dateEdit_date->setObjectName("dateEdit_date");
        dateEdit_date->setGeometry(QRect(320, 100, 200, 40));
        dateEdit_date->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        dateEdit_date->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(16, 0, 0)));
        dateEdit_date->setDate(QDate(2024, 1, 1));
        lineEdit_flightId = new QLineEdit(page);
        lineEdit_flightId->setObjectName("lineEdit_flightId");
        lineEdit_flightId->setGeometry(QRect(640, 100, 200, 40));
        lineEdit_flightId->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        timeEdit_departureTime = new QTimeEdit(page);
        timeEdit_departureTime->setObjectName("timeEdit_departureTime");
        timeEdit_departureTime->setGeometry(QRect(320, 160, 200, 40));
        timeEdit_departureTime->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_departurePlace = new QLineEdit(page);
        lineEdit_departurePlace->setObjectName("lineEdit_departurePlace");
        lineEdit_departurePlace->setGeometry(QRect(320, 220, 200, 40));
        lineEdit_departurePlace->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_arrivalPlace = new QLineEdit(page);
        lineEdit_arrivalPlace->setObjectName("lineEdit_arrivalPlace");
        lineEdit_arrivalPlace->setGeometry(QRect(640, 220, 200, 40));
        lineEdit_arrivalPlace->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        timeEdit_arrivalTime = new QTimeEdit(page);
        timeEdit_arrivalTime->setObjectName("timeEdit_arrivalTime");
        timeEdit_arrivalTime->setGeometry(QRect(640, 160, 200, 40));
        timeEdit_arrivalTime->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_11 = new QLabel(page);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(380, 290, 80, 40));
        label_11->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(page);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(500, 290, 80, 40));
        label_12->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(page);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(620, 290, 80, 40));
        label_13->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_14 = new QLabel(page);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(280, 330, 80, 40));
        label_14->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_15 = new QLabel(page);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(280, 400, 80, 40));
        label_15->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_baseFare = new QLineEdit(page);
        lineEdit_baseFare->setObjectName("lineEdit_baseFare");
        lineEdit_baseFare->setGeometry(QRect(380, 330, 80, 40));
        lineEdit_baseFare->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_seatAmountOfLvl1 = new QLineEdit(page);
        lineEdit_seatAmountOfLvl1->setObjectName("lineEdit_seatAmountOfLvl1");
        lineEdit_seatAmountOfLvl1->setGeometry(QRect(380, 400, 80, 40));
        lineEdit_seatAmountOfLvl1->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_seatAmountOfLvl3 = new QLineEdit(page);
        lineEdit_seatAmountOfLvl3->setObjectName("lineEdit_seatAmountOfLvl3");
        lineEdit_seatAmountOfLvl3->setGeometry(QRect(620, 400, 80, 40));
        lineEdit_seatAmountOfLvl3->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_seatAmountOfLvl2 = new QLineEdit(page);
        lineEdit_seatAmountOfLvl2->setObjectName("lineEdit_seatAmountOfLvl2");
        lineEdit_seatAmountOfLvl2->setGeometry(QRect(500, 400, 80, 40));
        lineEdit_seatAmountOfLvl2->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_moneyOfLvl2 = new QLineEdit(page);
        lineEdit_moneyOfLvl2->setObjectName("lineEdit_moneyOfLvl2");
        lineEdit_moneyOfLvl2->setGeometry(QRect(500, 330, 80, 40));
        lineEdit_moneyOfLvl2->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        lineEdit_moneyOfLvl3 = new QLineEdit(page);
        lineEdit_moneyOfLvl3->setObjectName("lineEdit_moneyOfLvl3");
        lineEdit_moneyOfLvl3->setGeometry(QRect(620, 330, 80, 40));
        lineEdit_moneyOfLvl3->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 81, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/point1.png")));
        label_Note = new QLabel(page);
        label_Note->setObjectName("label_Note");
        label_Note->setGeometry(QRect(330, 40, 341, 40));
        label_Note->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_Note->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_clear_8 = new QPushButton(page);
        pushButton_clear_8->setObjectName("pushButton_clear_8");
        pushButton_clear_8->setGeometry(QRect(710, 360, 200, 40));
        pushButton_clear_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        stackedWidget->addWidget(page);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        label_2 = new QLabel(page_13);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 80, 80, 80));
        label_2->setAutoFillBackground(false);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/point2.png")));
        label_2->setScaledContents(false);
        label_16 = new QLabel(page_13);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(330, 320, 111, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        label_16->setFont(font);
        label_16->setAutoFillBackground(false);
        label_16->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_delFlightId = new QLineEdit(page_13);
        lineEdit_delFlightId->setObjectName("lineEdit_delFlightId");
        lineEdit_delFlightId->setGeometry(QRect(440, 320, 200, 40));
        lineEdit_delFlightId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        pushButton_delete = new QPushButton(page_13);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(440, 380, 200, 40));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_Note_3 = new QLabel(page_13);
        label_Note_3->setObjectName("label_Note_3");
        label_Note_3->setGeometry(QRect(350, 210, 421, 40));
        label_Note_3->setFont(font);
        label_Note_3->setAutoFillBackground(false);
        label_Note_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_Note_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_clear_7 = new QPushButton(page_13);
        pushButton_clear_7->setObjectName("pushButton_clear_7");
        pushButton_clear_7->setGeometry(QRect(670, 320, 200, 40));
        pushButton_clear_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        stackedWidget->addWidget(page_13);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_18 = new QLabel(page_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(339, 20, 101, 40));
        label_18->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(339, 80, 101, 40));
        label_19->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_19->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(339, 140, 101, 40));
        label_20->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_selectedDeparturePlace = new QLineEdit(page_3);
        lineEdit_selectedDeparturePlace->setObjectName("lineEdit_selectedDeparturePlace");
        lineEdit_selectedDeparturePlace->setGeometry(QRect(440, 20, 200, 40));
        lineEdit_selectedDeparturePlace->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        lineEdit_selectedArrivalPlace = new QLineEdit(page_3);
        lineEdit_selectedArrivalPlace->setObjectName("lineEdit_selectedArrivalPlace");
        lineEdit_selectedArrivalPlace->setGeometry(QRect(440, 80, 200, 40));
        lineEdit_selectedArrivalPlace->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        dateEdit_selectedDate = new QDateEdit(page_3);
        dateEdit_selectedDate->setObjectName("dateEdit_selectedDate");
        dateEdit_selectedDate->setGeometry(QRect(440, 140, 200, 40));
        dateEdit_selectedDate->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
"\n"
""));
        dateEdit_selectedDate->setDate(QDate(2024, 1, 1));
        tableWidget = new QTableWidget(page_3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 200, 905, 511));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        font1.setBold(true);
        tableWidget->setFont(font1);
        pushButton_clear = new QPushButton(page_3);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(700, 30, 200, 40));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 240, 80, 80));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/point3.png")));
        prevButton = new QPushButton(page_3);
        prevButton->setObjectName("prevButton");
        prevButton->setGeometry(QRect(700, 140, 90, 40));
        prevButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        nextButton = new QPushButton(page_3);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(810, 140, 90, 40));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        label_status = new QLabel(page_3);
        label_status->setObjectName("label_status");
        label_status->setGeometry(QRect(70, 70, 251, 31));
        label_status->setStyleSheet(QString::fromUtf8("font: 700 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_searchall = new QPushButton(page_3);
        pushButton_searchall->setObjectName("pushButton_searchall");
        pushButton_searchall->setGeometry(QRect(700, 80, 200, 40));
        pushButton_searchall->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        lineEdit_selectedFlightId = new QLineEdit(page_3);
        lineEdit_selectedFlightId->setObjectName("lineEdit_selectedFlightId");
        lineEdit_selectedFlightId->setGeometry(QRect(141, 20, 200, 40));
        lineEdit_selectedFlightId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        label_29 = new QLabel(page_3);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(40, 20, 101, 40));
        label_29->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_29->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 160, 80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/point4.png")));
        label_21 = new QLabel(page_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(260, 100, 161, 40));
        label_21->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_needToUpdateFlightId = new QLineEdit(page_2);
        lineEdit_needToUpdateFlightId->setObjectName("lineEdit_needToUpdateFlightId");
        lineEdit_needToUpdateFlightId->setGeometry(QRect(440, 100, 200, 40));
        lineEdit_needToUpdateFlightId->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        dateEdit_needToUpdateDate = new QDateEdit(page_2);
        dateEdit_needToUpdateDate->setObjectName("dateEdit_needToUpdateDate");
        dateEdit_needToUpdateDate->setGeometry(QRect(600, 160, 200, 40));
        dateEdit_needToUpdateDate->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
""));
        dateEdit_needToUpdateDate->setDate(QDate(2024, 1, 1));
        timeEdit_needToUpdateDepartureTime = new QTimeEdit(page_2);
        timeEdit_needToUpdateDepartureTime->setObjectName("timeEdit_needToUpdateDepartureTime");
        timeEdit_needToUpdateDepartureTime->setGeometry(QRect(600, 210, 200, 40));
        timeEdit_needToUpdateDepartureTime->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
""));
        timeEdit_needToUpdateArrivalTime = new QTimeEdit(page_2);
        timeEdit_needToUpdateArrivalTime->setObjectName("timeEdit_needToUpdateArrivalTime");
        timeEdit_needToUpdateArrivalTime->setGeometry(QRect(600, 260, 200, 40));
        timeEdit_needToUpdateArrivalTime->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
""));
        lineEdit_needToUpdateDeparturePlace = new QLineEdit(page_2);
        lineEdit_needToUpdateDeparturePlace->setObjectName("lineEdit_needToUpdateDeparturePlace");
        lineEdit_needToUpdateDeparturePlace->setGeometry(QRect(300, 180, 200, 40));
        lineEdit_needToUpdateDeparturePlace->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        lineEdit_needToUpdateArrivalPlace = new QLineEdit(page_2);
        lineEdit_needToUpdateArrivalPlace->setObjectName("lineEdit_needToUpdateArrivalPlace");
        lineEdit_needToUpdateArrivalPlace->setGeometry(QRect(300, 240, 200, 40));
        lineEdit_needToUpdateArrivalPlace->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        pushButton_update = new QPushButton(page_2);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setGeometry(QRect(440, 380, 200, 40));
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lineEdit_needToUpdateBaseFare = new QLineEdit(page_2);
        lineEdit_needToUpdateBaseFare->setObjectName("lineEdit_needToUpdateBaseFare");
        lineEdit_needToUpdateBaseFare->setGeometry(QRect(440, 320, 200, 40));
        lineEdit_needToUpdateBaseFare->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";\n"
"border: 1px solid rgb(230, 230, 230);\n"
"border-radius: 5px;\n"
"\n"
"\n"
""));
        label_22 = new QLabel(page_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(509, 160, 91, 40));
        label_22->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_22->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_23 = new QLabel(page_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(509, 210, 91, 40));
        label_23->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_24 = new QLabel(page_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(220, 180, 80, 40));
        label_24->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_25 = new QLabel(page_2);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(509, 260, 91, 40));
        label_25->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_26 = new QLabel(page_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(220, 240, 80, 40));
        label_26->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_26->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_27 = new QLabel(page_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(349, 320, 91, 40));
        label_27->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_27->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_Note_4 = new QLabel(page_2);
        label_Note_4->setObjectName("label_Note_4");
        label_Note_4->setGeometry(QRect(420, 40, 281, 40));
        label_Note_4->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_Note_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_clear_9 = new QPushButton(page_2);
        pushButton_clear_9->setObjectName("pushButton_clear_9");
        pushButton_clear_9->setGeometry(QRect(700, 320, 200, 40));
        pushButton_clear_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        tableWidget_2 = new QTableWidget(page_4);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(170, 200, 725, 500));
        tableWidget_2->setFont(font1);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(240);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(240);
        label_17 = new QLabel(page_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, 320, 80, 80));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/point5.png")));
        lineEdit_username = new QLineEdit(page_4);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(360, 70, 200, 40));
        lineEdit_username->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_57 = new QLabel(page_4);
        label_57->setObjectName("label_57");
        label_57->setGeometry(QRect(200, 70, 161, 40));
        label_57->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_57->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_password = new QLineEdit(page_4);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(360, 130, 200, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_58 = new QLabel(page_4);
        label_58->setObjectName("label_58");
        label_58->setGeometry(QRect(200, 130, 161, 40));
        label_58->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_58->setAlignment(Qt::AlignmentFlag::AlignCenter);
        nextButton_3 = new QPushButton(page_4);
        nextButton_3->setObjectName("nextButton_3");
        nextButton_3->setGeometry(QRect(740, 130, 90, 40));
        nextButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        prevButton_3 = new QPushButton(page_4);
        prevButton_3->setObjectName("prevButton_3");
        prevButton_3->setGeometry(QRect(630, 130, 90, 40));
        prevButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        pushButton_clear_3 = new QPushButton(page_4);
        pushButton_clear_3->setObjectName("pushButton_clear_3");
        pushButton_clear_3->setGeometry(QRect(630, 10, 200, 40));
        pushButton_clear_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        lineEdit_userid_2 = new QLineEdit(page_4);
        lineEdit_userid_2->setObjectName("lineEdit_userid_2");
        lineEdit_userid_2->setGeometry(QRect(360, 10, 200, 40));
        lineEdit_userid_2->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_62 = new QLabel(page_4);
        label_62->setObjectName("label_62");
        label_62->setGeometry(QRect(200, 10, 161, 40));
        label_62->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_62->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        tableWidget_3 = new QTableWidget(page_5);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(240, 200, 605, 500));
        tableWidget_3->setFont(font1);
        tableWidget_3->horizontalHeader()->setMinimumSectionSize(150);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(150);
        label_28 = new QLabel(page_5);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(0, 400, 80, 80));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/point6.png")));
        lineEdit_orderid = new QLineEdit(page_5);
        lineEdit_orderid->setObjectName("lineEdit_orderid");
        lineEdit_orderid->setGeometry(QRect(480, 10, 200, 40));
        lineEdit_orderid->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_59 = new QLabel(page_5);
        label_59->setObjectName("label_59");
        label_59->setGeometry(QRect(340, 10, 141, 40));
        label_59->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_59->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_userid = new QLineEdit(page_5);
        lineEdit_userid->setObjectName("lineEdit_userid");
        lineEdit_userid->setGeometry(QRect(480, 60, 200, 40));
        lineEdit_userid->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_60 = new QLabel(page_5);
        label_60->setObjectName("label_60");
        label_60->setGeometry(QRect(340, 60, 141, 40));
        label_60->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_60->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_seatid = new QLineEdit(page_5);
        lineEdit_seatid->setObjectName("lineEdit_seatid");
        lineEdit_seatid->setGeometry(QRect(480, 110, 200, 40));
        lineEdit_seatid->setStyleSheet(QString::fromUtf8("\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"\n"
""));
        label_61 = new QLabel(page_5);
        label_61->setObjectName("label_61");
        label_61->setGeometry(QRect(340, 110, 141, 40));
        label_61->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_61->setAlignment(Qt::AlignmentFlag::AlignCenter);
        radioButton_all = new QRadioButton(page_5);
        radioButton_all->setObjectName("radioButton_all");
        radioButton_all->setGeometry(QRect(230, 10, 111, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        radioButton_all->setFont(font2);
        radioButton_all->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_cancel = new QRadioButton(page_5);
        radioButton_cancel->setObjectName("radioButton_cancel");
        radioButton_cancel->setGeometry(QRect(230, 60, 111, 40));
        radioButton_cancel->setFont(font2);
        radioButton_cancel->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_paid = new QRadioButton(page_5);
        radioButton_paid->setObjectName("radioButton_paid");
        radioButton_paid->setGeometry(QRect(230, 110, 111, 40));
        radioButton_paid->setFont(font2);
        radioButton_paid->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        prevButton_4 = new QPushButton(page_5);
        prevButton_4->setObjectName("prevButton_4");
        prevButton_4->setGeometry(QRect(710, 110, 90, 40));
        prevButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        pushButton_clear_4 = new QPushButton(page_5);
        pushButton_clear_4->setObjectName("pushButton_clear_4");
        pushButton_clear_4->setGeometry(QRect(710, 20, 200, 40));
        pushButton_clear_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        nextButton_4 = new QPushButton(page_5);
        nextButton_4->setObjectName("nextButton_4");
        nextButton_4->setGeometry(QRect(820, 110, 90, 40));
        nextButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"	background-color: rgba(0, 159, 252,100);\n"
"\n"
"	font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {  \n"
"	background-color: rgba(0, 159, 252,200);\n"
"}"));
        stackedWidget->addWidget(page_5);
        pushButton_addFlight = new QPushButton(centralwidget);
        pushButton_addFlight->setObjectName("pushButton_addFlight");
        pushButton_addFlight->setGeometry(QRect(0, 0, 200, 80));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(24);
        font3.setBold(true);
        pushButton_addFlight->setFont(font3);
        pushButton_addFlight->setAutoFillBackground(false);
        pushButton_addFlight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
" \n"
"}"));
        pushButton_addFlight->setFlat(true);
        pushButton_deleteFlight = new QPushButton(centralwidget);
        pushButton_deleteFlight->setObjectName("pushButton_deleteFlight");
        pushButton_deleteFlight->setGeometry(QRect(0, 80, 200, 80));
        pushButton_deleteFlight->setFont(font3);
        pushButton_deleteFlight->setAutoFillBackground(false);
        pushButton_deleteFlight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
" \n"
"}"));
        pushButton_deleteFlight->setFlat(true);
        pushButton_searchFlight = new QPushButton(centralwidget);
        pushButton_searchFlight->setObjectName("pushButton_searchFlight");
        pushButton_searchFlight->setGeometry(QRect(0, 240, 200, 80));
        pushButton_searchFlight->setFont(font3);
        pushButton_searchFlight->setAutoFillBackground(false);
        pushButton_searchFlight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
" \n"
"}"));
        pushButton_searchFlight->setFlat(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 160, 200, 80));
        pushButton_4->setFont(font3);
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
" \n"
"}"));
        pushButton_4->setFlat(true);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 200, 720));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color:  rgba(0, 159, 252, 150);"));
        pushButton_user = new QPushButton(centralwidget);
        pushButton_user->setObjectName("pushButton_user");
        pushButton_user->setGeometry(QRect(0, 320, 200, 80));
        pushButton_user->setFont(font3);
        pushButton_user->setAutoFillBackground(false);
        pushButton_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
" \n"
"}"));
        pushButton_user->setFlat(true);
        pushButton_order = new QPushButton(centralwidget);
        pushButton_order->setObjectName("pushButton_order");
        pushButton_order->setGeometry(QRect(0, 400, 200, 80));
        pushButton_order->setFont(font3);
        pushButton_order->setAutoFillBackground(false);
        pushButton_order->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
" \n"
"}"));
        pushButton_order->setFlat(true);
        admin_form->setCentralWidget(centralwidget);
        graphicsView->raise();
        stackedWidget->raise();
        pushButton_addFlight->raise();
        pushButton_deleteFlight->raise();
        pushButton_searchFlight->raise();
        pushButton_4->raise();
        pushButton_user->raise();
        pushButton_order->raise();

        retranslateUi(admin_form);

        stackedWidget->setCurrentIndex(2);
        pushButton_addFlight->setDefault(false);


        QMetaObject::connectSlotsByName(admin_form);
    } // setupUi

    void retranslateUi(QMainWindow *admin_form)
    {
        admin_form->setWindowTitle(QCoreApplication::translate("admin_form", "\347\263\273\347\273\237\346\225\260\346\215\256\347\256\241\347\220\206", nullptr));
        pushButton_add->setText(QCoreApplication::translate("admin_form", "\346\267\273\345\212\240", nullptr));
        label_5->setText(QCoreApplication::translate("admin_form", "\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_8->setText(QCoreApplication::translate("admin_form", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        label_10->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_11->setText(QCoreApplication::translate("admin_form", "\347\273\217\346\265\216\350\210\261", nullptr));
        label_12->setText(QCoreApplication::translate("admin_form", "\345\225\206\345\212\241\350\210\261", nullptr));
        label_13->setText(QCoreApplication::translate("admin_form", "\345\244\264\347\255\211\350\210\261", nullptr));
        label_14->setText(QCoreApplication::translate("admin_form", "\344\273\267\346\240\274", nullptr));
        label_15->setText(QCoreApplication::translate("admin_form", "\345\272\247\344\275\215\346\225\260", nullptr));
        label->setText(QString());
        label_Note->setText(QString());
        pushButton_clear_8->setText(QCoreApplication::translate("admin_form", "\346\270\205\351\231\244", nullptr));
        label_2->setText(QString());
        label_16->setText(QCoreApplication::translate("admin_form", "\350\210\252\347\217\255\345\217\267", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244", nullptr));
        label_Note_3->setText(QString());
        pushButton_clear_7->setText(QCoreApplication::translate("admin_form", "\346\270\205\351\231\244", nullptr));
        label_18->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_19->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_20->setText(QCoreApplication::translate("admin_form", "\346\227\245\346\234\237", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("admin_form", "\346\270\205\351\231\244", nullptr));
        label_3->setText(QString());
        prevButton->setText(QCoreApplication::translate("admin_form", "\344\270\212\344\270\200\351\241\265", nullptr));
        nextButton->setText(QCoreApplication::translate("admin_form", "\344\270\213\344\270\200\351\241\265", nullptr));
        label_status->setText(QString());
        pushButton_searchall->setText(QCoreApplication::translate("admin_form", "\346\230\276\347\244\272\346\211\200\346\234\211\346\227\245\346\234\237\347\232\204\350\210\252\347\217\255", nullptr));
        lineEdit_selectedFlightId->setText(QString());
        label_29->setText(QCoreApplication::translate("admin_form", "\350\210\252\347\217\255\345\217\267", nullptr));
        label_4->setText(QString());
        label_21->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\351\234\200\350\246\201\344\277\256\346\224\271\347\232\204\350\210\252\347\217\255</p></body></html>", nullptr));
        pushButton_update->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271", nullptr));
        label_22->setText(QCoreApplication::translate("admin_form", "\346\227\245\346\234\237", nullptr));
        label_23->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_24->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_25->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        label_26->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_27->setText(QCoreApplication::translate("admin_form", "\345\237\272\347\241\200\344\273\267\346\240\274", nullptr));
        label_Note_4->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton_clear_9->setText(QCoreApplication::translate("admin_form", "\346\270\205\351\231\244", nullptr));
        label_17->setText(QString());
        label_57->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215</p></body></html>", nullptr));
        label_58->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\345\257\206\347\240\201</p></body></html>", nullptr));
        nextButton_3->setText(QCoreApplication::translate("admin_form", "\344\270\213\344\270\200\351\241\265", nullptr));
        prevButton_3->setText(QCoreApplication::translate("admin_form", "\344\270\212\344\270\200\351\241\265", nullptr));
        pushButton_clear_3->setText(QCoreApplication::translate("admin_form", "\346\270\205\351\231\244", nullptr));
        label_62->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\347\224\250\346\210\267id</p></body></html>", nullptr));
        label_28->setText(QString());
        label_59->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\350\256\242\345\215\225id</p></body></html>", nullptr));
        label_60->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\347\224\250\346\210\267id</p></body></html>", nullptr));
        label_61->setText(QCoreApplication::translate("admin_form", "<html><head/><body><p>\345\272\247\344\275\215id</p></body></html>", nullptr));
        radioButton_all->setText(QCoreApplication::translate("admin_form", "\345\205\250\351\203\250\347\212\266\346\200\201", nullptr));
        radioButton_cancel->setText(QCoreApplication::translate("admin_form", "\345\267\262\345\217\226\346\266\210", nullptr));
        radioButton_paid->setText(QCoreApplication::translate("admin_form", "\345\267\262\346\224\257\344\273\230", nullptr));
        prevButton_4->setText(QCoreApplication::translate("admin_form", "\344\270\212\344\270\200\351\241\265", nullptr));
        pushButton_clear_4->setText(QCoreApplication::translate("admin_form", "\346\270\205\351\231\244", nullptr));
        nextButton_4->setText(QCoreApplication::translate("admin_form", "\344\270\213\344\270\200\351\241\265", nullptr));
        pushButton_addFlight->setText(QCoreApplication::translate("admin_form", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        pushButton_deleteFlight->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        pushButton_searchFlight->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271\350\210\252\347\217\255", nullptr));
        pushButton_user->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\347\224\250\346\210\267", nullptr));
        pushButton_order->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_form: public Ui_admin_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_FORM_H
