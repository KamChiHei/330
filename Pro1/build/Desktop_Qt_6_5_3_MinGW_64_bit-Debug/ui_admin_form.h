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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_Form
{
public:

    void setupUi(QWidget *admin_Form)
    {
        if (admin_Form->objectName().isEmpty())
            admin_Form->setObjectName("admin_Form");
        admin_Form->resize(400, 300);

        retranslateUi(admin_Form);

        QMetaObject::connectSlotsByName(admin_Form);
    } // setupUi

    void retranslateUi(QWidget *admin_Form)
    {
        admin_Form->setWindowTitle(QCoreApplication::translate("admin_Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_Form: public Ui_admin_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_FORM_H
