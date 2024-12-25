/********************************************************************************
** Form generated from reading UI file 'user_form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_FORM_H
#define UI_USER_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_Form
{
public:
    QCommandLinkButton *del_uid;
    QPushButton *BookButton;
    QPushButton *RefundButton;
    QFrame *frame;

    void setupUi(QWidget *user_Form)
    {
        if (user_Form->objectName().isEmpty())
            user_Form->setObjectName("user_Form");
        user_Form->resize(400, 300);
        user_Form->setMinimumSize(QSize(400, 300));
        user_Form->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        user_Form->setWindowIcon(icon);
        user_Form->setAutoFillBackground(true);
        user_Form->setStyleSheet(QString::fromUtf8(""));
        del_uid = new QCommandLinkButton(user_Form);
        del_uid->setObjectName("del_uid");
        del_uid->setGeometry(QRect(330, 260, 71, 40));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        del_uid->setIcon(icon1);
        BookButton = new QPushButton(user_Form);
        BookButton->setObjectName("BookButton");
        BookButton->setGeometry(QRect(0, 90, 200, 100));
        BookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 100);\n"
" \n"
"}"));
        RefundButton = new QPushButton(user_Form);
        RefundButton->setObjectName("RefundButton");
        RefundButton->setGeometry(QRect(200, 90, 200, 100));
        RefundButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 100);\n"
" \n"
"}"));
        frame = new QFrame(user_Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, -1, 402, 302));
        frame->setAutoFillBackground(true);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/new/prefix2/iconANDpic/login.jpg);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        RefundButton->raise();
        BookButton->raise();
        del_uid->raise();

        retranslateUi(user_Form);

        QMetaObject::connectSlotsByName(user_Form);
    } // setupUi

    void retranslateUi(QWidget *user_Form)
    {
        user_Form->setWindowTitle(QCoreApplication::translate("user_Form", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        del_uid->setText(QCoreApplication::translate("user_Form", "\346\263\250\351\224\200", nullptr));
        BookButton->setText(QCoreApplication::translate("user_Form", "\350\264\255\347\245\250", nullptr));
        RefundButton->setText(QCoreApplication::translate("user_Form", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_Form: public Ui_user_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FORM_H
