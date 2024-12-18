/********************************************************************************
** Form generated from reading UI file 'register_form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_FORM_H
#define UI_REGISTER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_Form
{
public:
    QLineEdit *name;
    QLineEdit *pwd1;
    QLineEdit *pwd2;
    QPushButton *B1;
    QPushButton *B2;
    QLabel *pwdtips2;
    QLabel *nametips;
    QLabel *pwdtips1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *register_Form)
    {
        if (register_Form->objectName().isEmpty())
            register_Form->setObjectName("register_Form");
        register_Form->resize(328, 355);
        name = new QLineEdit(register_Form);
        name->setObjectName("name");
        name->setGeometry(QRect(120, 90, 113, 20));
        pwd1 = new QLineEdit(register_Form);
        pwd1->setObjectName("pwd1");
        pwd1->setGeometry(QRect(120, 140, 113, 20));
        pwd2 = new QLineEdit(register_Form);
        pwd2->setObjectName("pwd2");
        pwd2->setGeometry(QRect(120, 190, 113, 20));
        B1 = new QPushButton(register_Form);
        B1->setObjectName("B1");
        B1->setGeometry(QRect(120, 250, 61, 21));
        B2 = new QPushButton(register_Form);
        B2->setObjectName("B2");
        B2->setGeometry(QRect(120, 280, 61, 21));
        pwdtips2 = new QLabel(register_Form);
        pwdtips2->setObjectName("pwdtips2");
        pwdtips2->setGeometry(QRect(120, 220, 151, 16));
        nametips = new QLabel(register_Form);
        nametips->setObjectName("nametips");
        nametips->setGeometry(QRect(120, 120, 131, 16));
        pwdtips1 = new QLabel(register_Form);
        pwdtips1->setObjectName("pwdtips1");
        pwdtips1->setGeometry(QRect(120, 170, 151, 16));
        layoutWidget = new QWidget(register_Form);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 90, 74, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);


        retranslateUi(register_Form);

        QMetaObject::connectSlotsByName(register_Form);
    } // setupUi

    void retranslateUi(QWidget *register_Form)
    {
        register_Form->setWindowTitle(QCoreApplication::translate("register_Form", "Form", nullptr));
        B1->setText(QCoreApplication::translate("register_Form", "\346\263\250\345\206\214", nullptr));
        B2->setText(QCoreApplication::translate("register_Form", "\345\217\226\346\266\210", nullptr));
        pwdtips2->setText(QCoreApplication::translate("register_Form", "3", nullptr));
        nametips->setText(QCoreApplication::translate("register_Form", "1", nullptr));
        pwdtips1->setText(QCoreApplication::translate("register_Form", "2", nullptr));
        label->setText(QCoreApplication::translate("register_Form", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("register_Form", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("register_Form", "\345\206\215\346\254\241\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_Form: public Ui_register_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FORM_H
