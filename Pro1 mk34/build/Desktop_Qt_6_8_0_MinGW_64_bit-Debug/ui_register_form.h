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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QFrame *frame;

    void setupUi(QWidget *register_Form)
    {
        if (register_Form->objectName().isEmpty())
            register_Form->setObjectName("register_Form");
        register_Form->resize(400, 300);
        register_Form->setMinimumSize(QSize(400, 300));
        register_Form->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        register_Form->setWindowIcon(icon);
        register_Form->setStyleSheet(QString::fromUtf8(""));
        name = new QLineEdit(register_Form);
        name->setObjectName("name");
        name->setGeometry(QRect(100, 10, 200, 30));
        name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: transparent;\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}"));
        pwd1 = new QLineEdit(register_Form);
        pwd1->setObjectName("pwd1");
        pwd1->setGeometry(QRect(100, 80, 200, 30));
        pwd1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: transparent;\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}"));
        pwd2 = new QLineEdit(register_Form);
        pwd2->setObjectName("pwd2");
        pwd2->setGeometry(QRect(100, 140, 200, 30));
        pwd2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: transparent;\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}"));
        B1 = new QPushButton(register_Form);
        B1->setObjectName("B1");
        B1->setGeometry(QRect(100, 230, 200, 30));
        B1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgb(0, 159, 252);\n"
"    \n"
"	\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(0, 170, 255); \n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    \n"
"	background-color: rgb(0, 159, 252);\n"
"       \n"
"    font: 14pt \"\351\273\221\344\275\223\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        B2 = new QPushButton(register_Form);
        B2->setObjectName("B2");
        B2->setGeometry(QRect(100, 260, 200, 30));
        B2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"		\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"	color: rgb(0, 0, 0);\n"
"border: 1px solid  rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     \n"
"    font: 14pt \"\351\273\221\344\275\223\";\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        pwdtips2 = new QLabel(register_Form);
        pwdtips2->setObjectName("pwdtips2");
        pwdtips2->setGeometry(QRect(100, 170, 250, 30));
        pwdtips2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        nametips = new QLabel(register_Form);
        nametips->setObjectName("nametips");
        nametips->setGeometry(QRect(100, 40, 200, 30));
        nametips->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        pwdtips1 = new QLabel(register_Form);
        pwdtips1->setObjectName("pwdtips1");
        pwdtips1->setGeometry(QRect(100, 110, 200, 30));
        pwdtips1->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        layoutWidget = new QWidget(register_Form);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 86, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        frame = new QFrame(register_Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 1, 402, 302));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"background-image: url(:/new/prefix2/iconANDpic/login.jpg);\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        name->raise();
        pwd1->raise();
        pwd2->raise();
        B1->raise();
        B2->raise();
        pwdtips2->raise();
        nametips->raise();
        pwdtips1->raise();
        layoutWidget->raise();

        retranslateUi(register_Form);

        QMetaObject::connectSlotsByName(register_Form);
    } // setupUi

    void retranslateUi(QWidget *register_Form)
    {
        register_Form->setWindowTitle(QCoreApplication::translate("register_Form", "\346\263\250\345\206\214", nullptr));
        B1->setText(QCoreApplication::translate("register_Form", "\346\263\250\345\206\214", nullptr));
        B2->setText(QCoreApplication::translate("register_Form", "\345\217\226\346\266\210", nullptr));
        pwdtips2->setText(QCoreApplication::translate("register_Form", "3", nullptr));
        nametips->setText(QCoreApplication::translate("register_Form", "1", nullptr));
        pwdtips1->setText(QCoreApplication::translate("register_Form", "2", nullptr));
        label->setText(QCoreApplication::translate("register_Form", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("register_Form", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("register_Form", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_Form: public Ui_register_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_FORM_H
