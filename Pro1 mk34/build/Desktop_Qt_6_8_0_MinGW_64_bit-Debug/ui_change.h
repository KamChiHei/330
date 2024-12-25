/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change
{
public:
    QPushButton *ensureB;
    QPushButton *cancelB;
    QTableWidget *mytable;
    QLabel *label;
    QFrame *frame;

    void setupUi(QWidget *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName("change");
        change->resize(800, 600);
        change->setMinimumSize(QSize(800, 600));
        change->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        change->setWindowIcon(icon);
        ensureB = new QPushButton(change);
        ensureB->setObjectName("ensureB");
        ensureB->setGeometry(QRect(300, 470, 200, 40));
        ensureB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        cancelB = new QPushButton(change);
        cancelB->setObjectName("cancelB");
        cancelB->setGeometry(QRect(300, 520, 200, 40));
        cancelB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        mytable = new QTableWidget(change);
        mytable->setObjectName("mytable");
        mytable->setGeometry(QRect(50, 10, 705, 400));
        label = new QLabel(change);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 420, 200, 40));
        label->setStyleSheet(QString::fromUtf8("font: 700 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgba(0, 170, 0, 200);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(change);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 801, 601));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 50);\n"
"background-image: url(:/new/prefix2/iconANDpic/change.jpg);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        ensureB->raise();
        cancelB->raise();
        mytable->raise();
        label->raise();

        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QWidget *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "\346\224\271\347\255\276", nullptr));
        ensureB->setText(QCoreApplication::translate("change", "\347\241\256\350\256\244", nullptr));
        cancelB->setText(QCoreApplication::translate("change", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("change", "\346\224\271\347\255\276\346\210\220\345\212\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
