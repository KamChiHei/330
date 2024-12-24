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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Refund
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *orders;
    QPushButton *Tickets;
    QPushButton *cancelButton;
    QPushButton *changeButton;

    void setupUi(QWidget *Refund)
    {
        if (Refund->objectName().isEmpty())
            Refund->setObjectName("Refund");
        Refund->resize(516, 486);
        lineEdit = new QLineEdit(Refund);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 80, 113, 25));
        pushButton = new QPushButton(Refund);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 410, 93, 28));
        orders = new QTableView(Refund);
        orders->setObjectName("orders");
        orders->setGeometry(QRect(90, 140, 341, 251));
        Tickets = new QPushButton(Refund);
        Tickets->setObjectName("Tickets");
        Tickets->setGeometry(QRect(30, 400, 121, 31));
        cancelButton = new QPushButton(Refund);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(170, 400, 92, 28));
        changeButton = new QPushButton(Refund);
        changeButton->setObjectName("changeButton");
        changeButton->setGeometry(QRect(280, 400, 92, 28));

        retranslateUi(Refund);

        QMetaObject::connectSlotsByName(Refund);
    } // setupUi

    void retranslateUi(QWidget *Refund)
    {
        Refund->setWindowTitle(QCoreApplication::translate("Refund", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("Refund", "\351\200\200\347\245\250\357\274\201", nullptr));
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
