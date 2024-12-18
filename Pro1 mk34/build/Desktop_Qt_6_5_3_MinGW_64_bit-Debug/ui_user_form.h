/********************************************************************************
** Form generated from reading UI file 'user_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_FORM_H
#define UI_USER_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_Form
{
public:
    QCommandLinkButton *del_uid;

    void setupUi(QWidget *user_Form)
    {
        if (user_Form->objectName().isEmpty())
            user_Form->setObjectName("user_Form");
        user_Form->resize(495, 430);
        del_uid = new QCommandLinkButton(user_Form);
        del_uid->setObjectName("del_uid");
        del_uid->setGeometry(QRect(420, 380, 71, 41));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::EditDelete")));
        del_uid->setIcon(icon);

        retranslateUi(user_Form);

        QMetaObject::connectSlotsByName(user_Form);
    } // setupUi

    void retranslateUi(QWidget *user_Form)
    {
        user_Form->setWindowTitle(QCoreApplication::translate("user_Form", "Form", nullptr));
        del_uid->setText(QCoreApplication::translate("user_Form", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_Form: public Ui_user_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FORM_H
