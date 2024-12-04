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
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_Form
{
public:

    void setupUi(QWidget *user_Form)
    {
        if (user_Form->objectName().isEmpty())
            user_Form->setObjectName("user_Form");
        user_Form->resize(348, 274);

        retranslateUi(user_Form);

        QMetaObject::connectSlotsByName(user_Form);
    } // setupUi

    void retranslateUi(QWidget *user_Form)
    {
        user_Form->setWindowTitle(QCoreApplication::translate("user_Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_Form: public Ui_user_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FORM_H
