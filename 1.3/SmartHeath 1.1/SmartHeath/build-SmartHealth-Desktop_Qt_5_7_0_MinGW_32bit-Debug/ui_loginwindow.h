/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *AccountEdit;
    QFrame *line;
    QLineEdit *PasswdEdit;
    QFrame *line_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Login;
    QPushButton *Login_2;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *warning;
    QPushButton *passwdBtn;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(1007, 722);
        LoginWindow->setMinimumSize(QSize(480, 640));
        LoginWindow->setMaximumSize(QSize(1942, 1167));
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 30, 431, 431));
        label->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
""));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 110, 211, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AccountEdit = new QLineEdit(verticalLayoutWidget);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));
        AccountEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));

        verticalLayout->addWidget(AccountEdit);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        PasswdEdit = new QLineEdit(verticalLayoutWidget);
        PasswdEdit->setObjectName(QStringLiteral("PasswdEdit"));
        PasswdEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        PasswdEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(PasswdEdit);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 120, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 180, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));
        Login = new QPushButton(centralWidget);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(580, 360, 121, 31));
        Login->setCursor(QCursor(Qt::PointingHandCursor));
        Login->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,120);\n"
"                   border-style:outset;                                                             \n"
"                   border-radius:5px;                     \n"
"                   font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";           \n"
"                   padding:6px;\n"
"                   }\n"
"\n"
"                   QPushButton:pressed{\n"
"                   background-color:rgba(100,100,100,180);\n"
"                   border-color:rgba(100,100,100,30);\n"
"                   border-style:inset;\n"
"                   }\n"
"                   QPushButton:hover{\n"
"                   background-color:rgba(100,255,100,100);\n"
"                   border-color:rgba(255,255,255,200);\n"
"}\n"
""));
        Login_2 = new QPushButton(centralWidget);
        Login_2->setObjectName(QStringLiteral("Login_2"));
        Login_2->setGeometry(QRect(540, 430, 191, 31));
        Login_2->setCursor(QCursor(Qt::PointingHandCursor));
        Login_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:transparent;\n"
"                   border-style:outset;                                                             \n"
"                   border-radius:8px;                     \n"
"                   font: 75 10pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";           \n"
"                   padding:6px;\n"
"				   color:rgba(255,255,255,255);\n"
"                   }\n"
"\n"
"                   QPushButton:pressed{\n"
"                   color:rgba(100,100,100,30);\n"
"                   border-style:inset;\n"
"                   }\n"
"                   QPushButton:hover{\n"
"                   color:rgba(0,0,120,50);\n"
"}\n"
""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 490, 971, 171));
        label_4->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
""));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 500, 951, 141));
        textBrowser->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
"\n"
" QScrollBar::handle:vertical \n"
" { \n"
" width:8px; \n"
" background:rgba(0,0,0,50%); \n"
" border-radius:4px; \n"
" min-height:80 \n"
" } \n"
" QScrollBar::handle:vertical:hover \n"
" { \n"
" width:8px; \n"
" background:rgba(0,0,0,70%); \n"
"  border-radius:4px; \n"
" min-height:80; \n"
" } \n"
" QScrollBar::add-line:vertical \n"
" { \n"
" height:0px;width:8px; \n"
" border-image:url(:/images/null/null.png); \n"
" subcontrol-position:bottom; \n"
" } \n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"height:0px;width:8px;\n"
"border-image:url(:/images/null/null.png);\n"
"subcontrol-position:top;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical\n"
"{\n"
"background:transparent;\n"
"border-radius:4px;\n"
"};\n"
"\n"
"\n"
"\n"
""));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(420, 260, 291, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        horizontalLayout->addWidget(checkBox_2);

        warning = new QLabel(centralWidget);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(450, 310, 261, 31));
        warning->setStyleSheet(QStringLiteral(""));
        passwdBtn = new QPushButton(centralWidget);
        passwdBtn->setObjectName(QStringLiteral("passwdBtn"));
        passwdBtn->setGeometry(QRect(300, 430, 111, 31));
        passwdBtn->setCursor(QCursor(Qt::PointingHandCursor));
        passwdBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:transparent;\n"
"                   border-style:outset;                                                             \n"
"                   border-radius:8px;                     \n"
"                   font: 75 10pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";           \n"
"                   padding:6px;\n"
"				   color:rgba(255,255,255,255);\n"
"                   }\n"
"\n"
"                   QPushButton:pressed{\n"
"                   color:rgba(100,100,100,30);\n"
"                   border-style:inset;\n"
"                   }\n"
"                   QPushButton:hover{\n"
"                   color:rgba(0,0,120,50);\n"
"}\n"
""));
        LoginWindow->setCentralWidget(centralWidget);
        label_4->raise();
        label->raise();
        verticalLayoutWidget->raise();
        label_2->raise();
        label_3->raise();
        Login->raise();
        Login_2->raise();
        textBrowser->raise();
        horizontalLayoutWidget->raise();
        warning->raise();
        passwdBtn->raise();
        menuBar = new QMenuBar(LoginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1007, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        LoginWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoginWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "LoginWindow", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("LoginWindow", "Account\357\274\232", 0));
        label_3->setText(QApplication::translate("LoginWindow", "Password\357\274\232", 0));
        Login->setText(QApplication::translate("LoginWindow", "Login", 0));
        Login_2->setText(QApplication::translate("LoginWindow", "\350\277\230\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\216\260\345\234\250\346\263\250\345\206\214\357\274\201", 0));
        label_4->setText(QString());
        textBrowser->setHtml(QApplication::translate("LoginWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ababab;\">	\346\254\242\350\277\216\344\275\277\347\224\250</span><span style=\" font-size:10pt; font-weight:600; color:#f8f8f8;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\263\273\347\273\237</span><span style=\" font-size:10pt; font-weight:600; color:#ababab;\">\357\274\214\346\226\260\347\224\250\346\210\267\350\257\267\346\263\250\345\206\214\346\202\250\347\232\204\346\226\260\350\264\246\345\217\267\357\274\201\346\263\250\345\206\214\345\256\214\346\210\220\345\220\216\357\274\214\350\257\267\351"
                        "\207\215\346\226\260\347\231\273\345\275\225\345\271\266\345\260\261\350\257\212\343\200\202\347\245\235\346\202\250\347\224\237\346\264\273\346\204\211\345\277\253\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#ababab;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#ababab;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ababab;\">	&quot;\344\275\240\346\257\217\345\244\251\351\203\275\345\234\250\345\201\232\345\276\210\345\244\232\347\234\213\350\265\267\346\235\245\346\257\253\346\227\240\346\204\217\344\271\211\347\232\204\345\206\263\345\256\232\357\274"
                        "\214\344\275\206\346\237\220\345\244\251\344\275\240\347\232\204\346\237\220\344\270\252\345\206\263\345\256\232\345\260\261\350\203\275\346\224\271\345\217\230\344\275\240\347\232\204\344\270\200\347\224\237\343\200\202&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#ababab;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ababab;\">							\342\200\224\342\200\224\343\200\212\350\245\277\351\233\205\345\233\276\344\270\215\347\234\240\345\244\234\343\200\213</span><span style=\" font-weight:600; color:#ababab;\"><br /></span></p></body></html>", 0));
        checkBox->setText(QApplication::translate("LoginWindow", "Log Password", 0));
        checkBox_2->setText(QApplication::translate("LoginWindow", "Login Automaticly", 0));
        warning->setText(QString());
        passwdBtn->setText(QApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        menu->setTitle(QApplication::translate("LoginWindow", "\350\217\234\345\215\225", 0));
        menu_2->setTitle(QApplication::translate("LoginWindow", "\346\227\245\345\277\227", 0));
        menu_3->setTitle(QApplication::translate("LoginWindow", "\350\256\276\347\275\256", 0));
        menu_4->setTitle(QApplication::translate("LoginWindow", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
