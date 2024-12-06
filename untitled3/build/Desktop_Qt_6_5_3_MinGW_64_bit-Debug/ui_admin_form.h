/********************************************************************************
** Form generated from reading UI file 'admin_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_FORM_H
#define UI_ADMIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_form
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_4;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QWidget *page_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_form)
    {
        if (admin_form->objectName().isEmpty())
            admin_form->setObjectName("admin_form");
        admin_form->resize(800, 600);
        centralwidget = new QWidget(admin_form);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(170, 50, 561, 451));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 120, 53, 15));
        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_2 = new QLabel(page_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 160, 53, 15));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 180, 53, 15));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 160, 53, 15));
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 90, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 210, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 300, 75, 23));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 370, 75, 23));
        admin_form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_form);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        admin_form->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_form);
        statusbar->setObjectName("statusbar");
        admin_form->setStatusBar(statusbar);

        retranslateUi(admin_form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admin_form);
    } // setupUi

    void retranslateUi(QMainWindow *admin_form)
    {
        admin_form->setWindowTitle(QCoreApplication::translate("admin_form", "admin_form", nullptr));
        label->setText(QCoreApplication::translate("admin_form", "\346\267\273\345\212\240\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244\347\225\214\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\347\225\214\351\235\242", nullptr));
        label_4->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("admin_form", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin_form", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin_form", "\346\237\245\350\257\242\350\210\252\347\217\255", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admin_form", "\344\277\256\346\224\271\350\210\252\347\217\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_form: public Ui_admin_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_FORM_H
