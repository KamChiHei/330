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
#include <QtWidgets/QApplication>
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

    void setupUi(QWidget *del_user)
    {
        if (del_user->objectName().isEmpty())
            del_user->setObjectName("del_user");
        del_user->resize(400, 300);
        delButton = new QPushButton(del_user);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(70, 240, 75, 23));
        nodelButton = new QPushButton(del_user);
        nodelButton->setObjectName("nodelButton");
        nodelButton->setGeometry(QRect(250, 240, 75, 23));
        label = new QLabel(del_user);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 170, 181, 41));
        user = new QLabel(del_user);
        user->setObjectName("user");
        user->setGeometry(QRect(130, 100, 121, 41));

        retranslateUi(del_user);

        QMetaObject::connectSlotsByName(del_user);
    } // setupUi

    void retranslateUi(QWidget *del_user)
    {
        del_user->setWindowTitle(QCoreApplication::translate("del_user", "Form", nullptr));
        delButton->setText(QCoreApplication::translate("del_user", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        nodelButton->setText(QCoreApplication::translate("del_user", "\345\206\215\350\200\203\350\231\221\344\270\200\344\270\213", nullptr));
        label->setText(QCoreApplication::translate("del_user", "\345\210\240\351\231\244\345\220\216\346\227\240\346\263\225\346\201\242\345\244\215\357\274\214\350\257\267\350\260\250\346\205\216\346\223\215\344\275\234", nullptr));
        user->setText(QCoreApplication::translate("del_user", "username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class del_user: public Ui_del_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_USER_H
