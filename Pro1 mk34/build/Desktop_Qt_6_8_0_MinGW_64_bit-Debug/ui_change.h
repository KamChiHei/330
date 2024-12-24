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
#include <QtWidgets/QApplication>
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

    void setupUi(QWidget *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName("change");
        change->resize(705, 600);
        ensureB = new QPushButton(change);
        ensureB->setObjectName("ensureB");
        ensureB->setGeometry(QRect(210, 560, 56, 18));
        cancelB = new QPushButton(change);
        cancelB->setObjectName("cancelB");
        cancelB->setGeometry(QRect(440, 560, 56, 18));
        mytable = new QTableWidget(change);
        mytable->setObjectName("mytable");
        mytable->setGeometry(QRect(0, 0, 705, 550));
        label = new QLabel(change);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 560, 40, 12));

        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QWidget *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "Form", nullptr));
        ensureB->setText(QCoreApplication::translate("change", "\347\241\256\350\256\244", nullptr));
        cancelB->setText(QCoreApplication::translate("change", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("change", "\346\224\271\347\255\276\346\210\220\345\212\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
