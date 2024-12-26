/********************************************************************************
** Form generated from reading UI file 'refund.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFUND_H
#define UI_REFUND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Refund
{
public:
    QPushButton *pushButton;
    QTableView *orders;
    QPushButton *Tickets;
    QPushButton *cancelButton;
    QPushButton *changeButton;
    QFrame *frame;

    void setupUi(QWidget *Refund)
    {
        if (Refund->objectName().isEmpty())
            Refund->setObjectName("Refund");
        Refund->resize(800, 600);
        Refund->setMinimumSize(QSize(800, 600));
        Refund->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Refund->setWindowIcon(icon);
        pushButton = new QPushButton(Refund);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 560, 150, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        orders = new QTableView(Refund);
        orders->setObjectName("orders");
        orders->setGeometry(QRect(100, 20, 600, 400));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(10);
        font.setBold(true);
        orders->setFont(font);
        orders->horizontalHeader()->setMinimumSectionSize(199);
        orders->horizontalHeader()->setDefaultSectionSize(199);
        Tickets = new QPushButton(Refund);
        Tickets->setObjectName("Tickets");
        Tickets->setGeometry(QRect(100, 460, 200, 40));
        Tickets->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        cancelButton = new QPushButton(Refund);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(300, 460, 200, 40));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        changeButton = new QPushButton(Refund);
        changeButton->setObjectName("changeButton");
        changeButton->setGeometry(QRect(500, 460, 200, 40));
        changeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        frame = new QFrame(Refund);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 0, 802, 601));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);\n"
"background-image: url(:/new/prefix2/iconANDpic/ordermanage.jpg);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        pushButton->raise();
        orders->raise();
        Tickets->raise();
        cancelButton->raise();
        changeButton->raise();

        retranslateUi(Refund);

        QMetaObject::connectSlotsByName(Refund);
    } // setupUi

    void retranslateUi(QWidget *Refund)
    {
        Refund->setWindowTitle(QCoreApplication::translate("Refund", "\344\270\252\344\272\272\350\256\242\345\215\225", nullptr));
        pushButton->setText(QCoreApplication::translate("Refund", "\350\277\224\345\233\236", nullptr));
        Tickets->setText(QCoreApplication::translate("Refund", "\345\210\267\346\226\260", nullptr));
        cancelButton->setText(QCoreApplication::translate("Refund", "\351\200\200\347\245\250", nullptr));
        changeButton->setText(QCoreApplication::translate("Refund", "\346\224\271\347\255\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Refund: public Ui_Refund {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFUND_H
