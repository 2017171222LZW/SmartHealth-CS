/********************************************************************************
** Form generated from reading UI file 'passwordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDWINDOW_H
#define UI_PASSWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordWindow
{
public:
    QWidget *centralwidget;
    QLabel *warning_1;
    QLabel *page1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *Telephone;
    QLabel *Identify;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *tephone;
    QFrame *line_5;
    QLineEdit *Identify_e;
    QPushButton *nextBtn;
    QPushButton *okBtn;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *Newpasswd;
    QLabel *Confirm;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *newPasswd;
    QFrame *line_6;
    QLineEdit *confirm;
    QLabel *page2;
    QLabel *warning_2;
    QPushButton *backBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PasswordWindow)
    {
        if (PasswordWindow->objectName().isEmpty())
            PasswordWindow->setObjectName(QStringLiteral("PasswordWindow"));
        PasswordWindow->resize(690, 604);
        centralwidget = new QWidget(PasswordWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        warning_1 = new QLabel(centralwidget);
        warning_1->setObjectName(QStringLiteral("warning_1"));
        warning_1->setGeometry(QRect(240, 370, 311, 31));
        warning_1->setStyleSheet(QLatin1String("background-color : transparent;\n"
"color : rgb(117,247,88);"));
        page1 = new QLabel(centralwidget);
        page1->setObjectName(QStringLiteral("page1"));
        page1->setGeometry(QRect(120, 60, 441, 431));
        page1->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
""));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 100, 121, 251));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Telephone = new QLabel(verticalLayoutWidget_2);
        Telephone->setObjectName(QStringLiteral("Telephone"));
        Telephone->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(Telephone);

        Identify = new QLabel(verticalLayoutWidget_2);
        Identify->setObjectName(QStringLiteral("Identify"));
        Identify->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(Identify);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 100, 191, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tephone = new QLineEdit(verticalLayoutWidget);
        tephone->setObjectName(QStringLiteral("tephone"));
        tephone->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));

        verticalLayout->addWidget(tephone);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        Identify_e = new QLineEdit(verticalLayoutWidget);
        Identify_e->setObjectName(QStringLiteral("Identify_e"));
        Identify_e->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        Identify_e->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(Identify_e);

        nextBtn = new QPushButton(centralwidget);
        nextBtn->setObjectName(QStringLiteral("nextBtn"));
        nextBtn->setGeometry(QRect(300, 410, 141, 31));
        nextBtn->setCursor(QCursor(Qt::PointingHandCursor));
        nextBtn->setStyleSheet(QString::fromUtf8("\n"
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
        okBtn = new QPushButton(centralwidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(300, 410, 141, 31));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        okBtn->setStyleSheet(QString::fromUtf8("\n"
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
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(170, 100, 124, 251));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Newpasswd = new QLabel(verticalLayoutWidget_3);
        Newpasswd->setObjectName(QStringLiteral("Newpasswd"));
        Newpasswd->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_4->addWidget(Newpasswd);

        Confirm = new QLabel(verticalLayoutWidget_3);
        Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_4->addWidget(Confirm);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(300, 100, 191, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        newPasswd = new QLineEdit(verticalLayoutWidget_4);
        newPasswd->setObjectName(QStringLiteral("newPasswd"));
        newPasswd->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));

        verticalLayout_2->addWidget(newPasswd);

        line_6 = new QFrame(verticalLayoutWidget_4);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        confirm = new QLineEdit(verticalLayoutWidget_4);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        confirm->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(confirm);

        page2 = new QLabel(centralwidget);
        page2->setObjectName(QStringLiteral("page2"));
        page2->setGeometry(QRect(120, 60, 441, 431));
        page2->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
""));
        warning_2 = new QLabel(centralwidget);
        warning_2->setObjectName(QStringLiteral("warning_2"));
        warning_2->setGeometry(QRect(240, 370, 291, 31));
        warning_2->setStyleSheet(QLatin1String("background-color : transparent;\n"
"color : rgb(117,247,88);"));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(480, 450, 81, 41));
        backBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                   background-color:transparent;\n"
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
"                   background-color:transparent;\n"
"                   color:rgba(255,255,255,200);\n"
"}\n"
""));
        PasswordWindow->setCentralWidget(centralwidget);
        page2->raise();
        page1->raise();
        warning_1->raise();
        verticalLayoutWidget_2->raise();
        verticalLayoutWidget->raise();
        nextBtn->raise();
        okBtn->raise();
        verticalLayoutWidget_3->raise();
        verticalLayoutWidget_4->raise();
        warning_2->raise();
        backBtn->raise();
        menubar = new QMenuBar(PasswordWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 690, 26));
        PasswordWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PasswordWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PasswordWindow->setStatusBar(statusbar);

        retranslateUi(PasswordWindow);

        QMetaObject::connectSlotsByName(PasswordWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PasswordWindow)
    {
        PasswordWindow->setWindowTitle(QApplication::translate("PasswordWindow", "MainWindow", 0));
        warning_1->setText(QString());
        page1->setText(QString());
        Telephone->setText(QApplication::translate("PasswordWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Telephone:</p></body></html>", 0));
        Identify->setText(QApplication::translate("PasswordWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Identify\357\274\232</p></body></html>", 0));
        nextBtn->setText(QApplication::translate("PasswordWindow", "Next", 0));
        okBtn->setText(QApplication::translate("PasswordWindow", "Ok", 0));
        Newpasswd->setText(QApplication::translate("PasswordWindow", "<html><head/><body><p>Newpassword:</p></body></html>", 0));
        Confirm->setText(QApplication::translate("PasswordWindow", "<html><head/><body><p>Confirm\357\274\232</p></body></html>", 0));
        page2->setText(QString());
        warning_2->setText(QString());
        backBtn->setText(QApplication::translate("PasswordWindow", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class PasswordWindow: public Ui_PasswordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDWINDOW_H
