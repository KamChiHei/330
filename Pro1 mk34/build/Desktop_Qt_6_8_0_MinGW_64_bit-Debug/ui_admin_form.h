/********************************************************************************
** Form generated from reading UI file 'admin_form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_FORM_H
#define UI_ADMIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
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
    QLabel *label;
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
    QWidget *page_4;
    QLabel *label_2;
    QLabel *label_16;
    QLineEdit *lineEdit_delFlightId;
    QPushButton *pushButton_delete;
    QWidget *page_3;
    QLabel *label_3;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit_selectedDeparturePlace;
    QLineEdit *lineEdit_selectedArrivalPlace;
    QDateEdit *dateEdit_selectedDate;
    QTableWidget *tableWidget;
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
    QPushButton *pushButton_addFlight;
    QPushButton *pushButton_deleteFlight;
    QPushButton *pushButton_searchFlight;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_form)
    {
        if (admin_form->objectName().isEmpty())
            admin_form->setObjectName("admin_form");
        admin_form->resize(1230, 529);
        centralwidget = new QWidget(admin_form);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(150, 50, 961, 431));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 53, 15));
        pushButton_add = new QPushButton(page);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(170, 390, 80, 18));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 60, 40, 12));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(9, 110, 51, 20));
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 160, 40, 12));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 50, 40, 12));
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(239, 100, 51, 20));
        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(250, 160, 40, 12));
        dateEdit_date = new QDateEdit(page);
        dateEdit_date->setObjectName("dateEdit_date");
        dateEdit_date->setGeometry(QRect(60, 60, 110, 22));
        dateEdit_date->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(16, 0, 0)));
        lineEdit_flightId = new QLineEdit(page);
        lineEdit_flightId->setObjectName("lineEdit_flightId");
        lineEdit_flightId->setGeometry(QRect(300, 50, 113, 20));
        timeEdit_departureTime = new QTimeEdit(page);
        timeEdit_departureTime->setObjectName("timeEdit_departureTime");
        timeEdit_departureTime->setGeometry(QRect(60, 110, 118, 22));
        lineEdit_departurePlace = new QLineEdit(page);
        lineEdit_departurePlace->setObjectName("lineEdit_departurePlace");
        lineEdit_departurePlace->setGeometry(QRect(60, 160, 113, 20));
        lineEdit_arrivalPlace = new QLineEdit(page);
        lineEdit_arrivalPlace->setObjectName("lineEdit_arrivalPlace");
        lineEdit_arrivalPlace->setGeometry(QRect(290, 160, 113, 20));
        timeEdit_arrivalTime = new QTimeEdit(page);
        timeEdit_arrivalTime->setObjectName("timeEdit_arrivalTime");
        timeEdit_arrivalTime->setGeometry(QRect(300, 100, 118, 22));
        label_11 = new QLabel(page);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(80, 220, 40, 12));
        label_12 = new QLabel(page);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 220, 40, 12));
        label_13 = new QLabel(page);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(320, 220, 40, 12));
        label_14 = new QLabel(page);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 250, 40, 12));
        label_15 = new QLabel(page);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 320, 40, 12));
        lineEdit_baseFare = new QLineEdit(page);
        lineEdit_baseFare->setObjectName("lineEdit_baseFare");
        lineEdit_baseFare->setGeometry(QRect(60, 250, 71, 20));
        lineEdit_seatAmountOfLvl1 = new QLineEdit(page);
        lineEdit_seatAmountOfLvl1->setObjectName("lineEdit_seatAmountOfLvl1");
        lineEdit_seatAmountOfLvl1->setGeometry(QRect(60, 320, 71, 20));
        lineEdit_seatAmountOfLvl3 = new QLineEdit(page);
        lineEdit_seatAmountOfLvl3->setObjectName("lineEdit_seatAmountOfLvl3");
        lineEdit_seatAmountOfLvl3->setGeometry(QRect(310, 320, 71, 20));
        lineEdit_seatAmountOfLvl2 = new QLineEdit(page);
        lineEdit_seatAmountOfLvl2->setObjectName("lineEdit_seatAmountOfLvl2");
        lineEdit_seatAmountOfLvl2->setGeometry(QRect(170, 320, 71, 20));
        lineEdit_moneyOfLvl2 = new QLineEdit(page);
        lineEdit_moneyOfLvl2->setObjectName("lineEdit_moneyOfLvl2");
        lineEdit_moneyOfLvl2->setGeometry(QRect(170, 250, 71, 20));
        lineEdit_moneyOfLvl3 = new QLineEdit(page);
        lineEdit_moneyOfLvl3->setObjectName("lineEdit_moneyOfLvl3");
        lineEdit_moneyOfLvl3->setGeometry(QRect(300, 260, 71, 20));
        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_2 = new QLabel(page_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 53, 15));
        label_16 = new QLabel(page_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(50, 90, 40, 12));
        lineEdit_delFlightId = new QLineEdit(page_4);
        lineEdit_delFlightId->setObjectName("lineEdit_delFlightId");
        lineEdit_delFlightId->setGeometry(QRect(90, 90, 113, 20));
        pushButton_delete = new QPushButton(page_4);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(220, 90, 80, 18));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 0, 53, 15));
        label_17 = new QLabel(page_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(220, 50, 61, 16));
        label_18 = new QLabel(page_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 90, 40, 12));
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(140, 90, 40, 12));
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(280, 82, 40, 20));
        pushButton_search = new QPushButton(page_3);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setGeometry(QRect(430, 120, 80, 18));
        lineEdit_selectedDeparturePlace = new QLineEdit(page_3);
        lineEdit_selectedDeparturePlace->setObjectName("lineEdit_selectedDeparturePlace");
        lineEdit_selectedDeparturePlace->setGeometry(QRect(10, 120, 71, 20));
        lineEdit_selectedArrivalPlace = new QLineEdit(page_3);
        lineEdit_selectedArrivalPlace->setObjectName("lineEdit_selectedArrivalPlace");
        lineEdit_selectedArrivalPlace->setGeometry(QRect(120, 120, 91, 20));
        dateEdit_selectedDate = new QDateEdit(page_3);
        dateEdit_selectedDate->setObjectName("dateEdit_selectedDate");
        dateEdit_selectedDate->setGeometry(QRect(250, 120, 110, 22));
        tableWidget = new QTableWidget(page_3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 170, 931, 192));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 20, 53, 15));
        label_21 = new QLabel(page_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(30, 70, 81, 21));
        lineEdit_needToUpdateFlightId = new QLineEdit(page_2);
        lineEdit_needToUpdateFlightId->setObjectName("lineEdit_needToUpdateFlightId");
        lineEdit_needToUpdateFlightId->setGeometry(QRect(120, 70, 113, 20));
        dateEdit_needToUpdateDate = new QDateEdit(page_2);
        dateEdit_needToUpdateDate->setObjectName("dateEdit_needToUpdateDate");
        dateEdit_needToUpdateDate->setGeometry(QRect(160, 120, 110, 22));
        timeEdit_needToUpdateDepartureTime = new QTimeEdit(page_2);
        timeEdit_needToUpdateDepartureTime->setObjectName("timeEdit_needToUpdateDepartureTime");
        timeEdit_needToUpdateDepartureTime->setGeometry(QRect(70, 170, 118, 22));
        timeEdit_needToUpdateArrivalTime = new QTimeEdit(page_2);
        timeEdit_needToUpdateArrivalTime->setObjectName("timeEdit_needToUpdateArrivalTime");
        timeEdit_needToUpdateArrivalTime->setGeometry(QRect(250, 170, 118, 22));
        lineEdit_needToUpdateDeparturePlace = new QLineEdit(page_2);
        lineEdit_needToUpdateDeparturePlace->setObjectName("lineEdit_needToUpdateDeparturePlace");
        lineEdit_needToUpdateDeparturePlace->setGeometry(QRect(70, 220, 113, 20));
        lineEdit_needToUpdateArrivalPlace = new QLineEdit(page_2);
        lineEdit_needToUpdateArrivalPlace->setObjectName("lineEdit_needToUpdateArrivalPlace");
        lineEdit_needToUpdateArrivalPlace->setGeometry(QRect(260, 220, 113, 20));
        pushButton_update = new QPushButton(page_2);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setGeometry(QRect(200, 290, 80, 18));
        lineEdit_needToUpdateBaseFare = new QLineEdit(page_2);
        lineEdit_needToUpdateBaseFare->setObjectName("lineEdit_needToUpdateBaseFare");
        lineEdit_needToUpdateBaseFare->setGeometry(QRect(170, 260, 113, 20));
        label_22 = new QLabel(page_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(80, 120, 40, 12));
        label_23 = new QLabel(page_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(10, 170, 40, 12));
        label_24 = new QLabel(page_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(10, 230, 40, 12));
        label_25 = new QLabel(page_2);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(200, 180, 40, 12));
        label_26 = new QLabel(page_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(200, 220, 40, 12));
        label_27 = new QLabel(page_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(110, 260, 40, 12));
        stackedWidget->addWidget(page_2);
        pushButton_addFlight = new QPushButton(centralwidget);
        pushButton_addFlight->setObjectName("pushButton_addFlight");
        pushButton_addFlight->setGeometry(QRect(50, 90, 75, 23));
        pushButton_deleteFlight = new QPushButton(centralwidget);
        pushButton_deleteFlight->setObjectName("pushButton_deleteFlight");
        pushButton_deleteFlight->setGeometry(QRect(50, 210, 75, 23));
        pushButton_searchFlight = new QPushButton(centralwidget);
        pushButton_searchFlight->setObjectName("pushButton_searchFlight");
        pushButton_searchFlight->setGeometry(QRect(40, 300, 75, 23));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 370, 75, 23));
        admin_form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_form);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1230, 24));
        admin_form->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_form);
        statusbar->setObjectName("statusbar");
        admin_form->setStatusBar(statusbar);

        retranslateUi(admin_form);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(admin_form);
    } // setupUi

    void retranslateUi(QMainWindow *admin_form)
    {
        admin_form->setWindowTitle(QCoreApplication::translate("admin_form", "admin_form", nullptr));
        label->setText(QCoreApplication::translate("admin_form", "\346\267\273\345\212\240\347\225\214\351\235\242", nullptr));
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
        label_2->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244\347\225\214\351\235\242", nullptr));
        label_16->setText(QCoreApplication::translate("admin_form", "\350\210\252\347\217\255\345\217\267", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244", nullptr));
        label_3->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\347\225\214\351\235\242", nullptr));
        label_17->setText(QCoreApplication::translate("admin_form", "\350\210\252\347\217\255\346\220\234\347\264\242", nullptr));
        label_18->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_19->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_20->setText(QCoreApplication::translate("admin_form", "\346\227\245\346\234\237", nullptr));
        pushButton_search->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242", nullptr));
        label_4->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271\347\225\214\351\235\242", nullptr));
        label_21->setText(QCoreApplication::translate("admin_form", "\351\234\200\350\246\201\344\277\256\346\224\271\347\232\204\350\210\252\347\217\255", nullptr));
        pushButton_update->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271", nullptr));
        label_22->setText(QCoreApplication::translate("admin_form", "\346\227\245\346\234\237", nullptr));
        label_23->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_24->setText(QCoreApplication::translate("admin_form", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_25->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        label_26->setText(QCoreApplication::translate("admin_form", "\345\210\260\350\276\276\345\234\260", nullptr));
        label_27->setText(QCoreApplication::translate("admin_form", "\345\237\272\347\241\200\344\273\267\346\240\274", nullptr));
        pushButton_addFlight->setText(QCoreApplication::translate("admin_form", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        pushButton_deleteFlight->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        pushButton_searchFlight->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271\350\210\252\347\217\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_form: public Ui_admin_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_FORM_H
