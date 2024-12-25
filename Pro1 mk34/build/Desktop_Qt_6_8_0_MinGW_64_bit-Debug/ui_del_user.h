/********************************************************************************
** Form generated from reading UI file 'del_user.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_USER_H
#define UI_DEL_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_del_user
{
public:
    QPushButton *delButton;
    QPushButton *nodelButton;
    QLabel *label;
    QLabel *user;
    QLabel *label_2;
    QFrame *frame;

    void setupUi(QWidget *del_user)
    {
        if (del_user->objectName().isEmpty())
            del_user->setObjectName("del_user");
        del_user->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(del_user->sizePolicy().hasHeightForWidth());
        del_user->setSizePolicy(sizePolicy);
        del_user->setMinimumSize(QSize(400, 300));
        del_user->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        del_user->setWindowIcon(icon);
        del_user->setStyleSheet(QString::fromUtf8(""));
        delButton = new QPushButton(del_user);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(50, 200, 125, 50));
        delButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"	\n"
"	\n"
"border: 1px solid   rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    \n"
"	\n"
"	background-color: rgba(0, 170, 255,50);\n"
"	\n"
"}"));
        nodelButton = new QPushButton(del_user);
        nodelButton->setObjectName("nodelButton");
        nodelButton->setGeometry(QRect(225, 200, 125, 50));
        nodelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"	\n"
"	background-color: rgb(0, 159, 252);\n"
"	\n"
"border: 1px solid   rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    \n"
"	\n"
"	\n"
"	background-color: rgba(0, 159, 252, 200);\n"
"	\n"
"}"));
        label = new QLabel(del_user);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 100, 300, 81));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        label->setLineWidth(2);
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        user = new QLabel(del_user);
        user->setObjectName("user");
        user->setGeometry(QRect(100, 50, 200, 50));
        user->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        user->setStyleSheet(QString::fromUtf8("font: 700 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        user->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(del_user);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 40, 40));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/iconANDpic/warning.png")));
        frame = new QFrame(del_user);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 0, 402, 302));
        frame->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 100);\n"
"background-image: url(:/new/prefix2/iconANDpic/login(400x300).png);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        delButton->raise();
        nodelButton->raise();
        label->raise();
        user->raise();
        label_2->raise();

        retranslateUi(del_user);

        QMetaObject::connectSlotsByName(del_user);
    } // setupUi

    void retranslateUi(QWidget *del_user)
    {
        del_user->setWindowTitle(QString());
        delButton->setText(QCoreApplication::translate("del_user", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        nodelButton->setText(QCoreApplication::translate("del_user", "\345\206\215\350\200\203\350\231\221\344\270\200\344\270\213", nullptr));
        label->setText(QCoreApplication::translate("del_user", "<html><head/><body><p align=\"center\">\345\210\240\351\231\244\345\220\216\346\227\240\346\263\225\346\201\242\345\244\215</p><p align=\"center\">\350\257\267\350\260\250\346\205\216\346\223\215\344\275\234</p></body></html>", nullptr));
        user->setText(QCoreApplication::translate("del_user", "username", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class del_user: public Ui_del_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_USER_H
