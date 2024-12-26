/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *login_button;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCommandLinkButton *commandLinkButton;
    QLabel *tip;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QFrame *frame;
    QFrame *frame_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconANDpic/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login_button = new QPushButton(centralwidget);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(100, 200, 200, 40));
        login_button->setAutoFillBackground(false);
        login_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	\n"
"	\n"
"	background-color: rgb(7, 195, 233);\n"
"	\n"
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
        login_button->setFlat(false);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 50, 200, 40));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: transparent;\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        lineEdit->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 110, 200, 40));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: transparent;\n"
"	font: 16pt \"Microsoft YaHei UI\";\n"
"    border: 1px solid rgb(230, 230, 230);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(150, 240, 91, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        commandLinkButton->setFont(font);
        commandLinkButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        commandLinkButton->setStyleSheet(QString::fromUtf8("\n"
"	\n"
"font: 700 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::UserAvailable));
        commandLinkButton->setIcon(icon1);
        commandLinkButton->setIconSize(QSize(0, 0));
        commandLinkButton->setAutoDefault(false);
        commandLinkButton->setDefault(false);
        tip = new QLabel(centralwidget);
        tip->setObjectName("tip");
        tip->setGeometry(QRect(100, 160, 200, 30));
        tip->setStyleSheet(QString::fromUtf8("font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        tip->setScaledContents(false);
        commandLinkButton_2 = new QCommandLinkButton(centralwidget);
        commandLinkButton_2->setObjectName("commandLinkButton_2");
        commandLinkButton_2->setGeometry(QRect(100, 50, 200, 40));
        commandLinkButton_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        commandLinkButton_2->setStyleSheet(QString::fromUtf8("QCommandLinkButton#commandLinkButton_2 {\n"
"    \n"
"	\n"
"    \n"
"	background-color: rgba(255, 255, 255, 50);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: White;\n"
"	\n"
"    border-radius: 5px;\n"
"	border: 1px solid rgb(230, 230, 230);\n"
"}\n"
"\n"
"QCommandLinkButton#commandLinkButton_2:hover {\n"
"\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: White;\n"
"    border: 1px solid rgb(230, 230, 230); \n"
"    background-color: transparent;   \n"
"}\n"
"\n"
""));
        commandLinkButton_2->setIconSize(QSize(0, 0));
        commandLinkButton_2->setDefault(false);
        commandLinkButton_3 = new QCommandLinkButton(centralwidget);
        commandLinkButton_3->setObjectName("commandLinkButton_3");
        commandLinkButton_3->setGeometry(QRect(100, 110, 200, 40));
        commandLinkButton_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        commandLinkButton_3->setStyleSheet(QString::fromUtf8("QCommandLinkButton#commandLinkButton_3 {\n"
"    \n"
"	\n"
"    \n"
"	background-color: rgba(255, 255, 255, 50);\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: White;\n"
"	\n"
"    border-radius: 5px;\n"
"	border: 1px solid rgb(230, 230, 230);\n"
"}\n"
"\n"
"QCommandLinkButton#commandLinkButton_3:hover {\n"
"\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: White;\n"
"    border: 1px solid rgb(230, 230, 230); \n"
"    background-color: transparent;   \n"
"}\n"
"\n"
""));
        commandLinkButton_3->setIconSize(QSize(0, 0));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 0, 402, 302));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 80);\n"
"	background-image: url(:/new/prefix2/iconANDpic/login(400x300).png);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-1, 0, 402, 302));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        login_button->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        commandLinkButton->raise();
        tip->raise();
        commandLinkButton_2->raise();
        commandLinkButton_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 18));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        login_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\210\252\347\217\255\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        tip->setText(QString());
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
