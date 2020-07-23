/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
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

class Ui_RegisterWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *AccountEdit;
    QFrame *line;
    QLineEdit *PasswdEdit;
    QFrame *line_2;
    QLineEdit *RealnameEdit;
    QFrame *line_5;
    QLineEdit *IdentifyEdit;
    QFrame *line_6;
    QLineEdit *TelephoneEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *Username;
    QLabel *Password;
    QLabel *Realname;
    QLabel *Identify;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Register;
    QFrame *line_7;
    QPushButton *Cancel;
    QLabel *warning;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QStringLiteral("RegisterWindow"));
        RegisterWindow->resize(800, 600);
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 40, 431, 431));
        label->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 80, 191, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
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

        RealnameEdit = new QLineEdit(verticalLayoutWidget);
        RealnameEdit->setObjectName(QStringLiteral("RealnameEdit"));
        RealnameEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));

        verticalLayout->addWidget(RealnameEdit);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        IdentifyEdit = new QLineEdit(verticalLayoutWidget);
        IdentifyEdit->setObjectName(QStringLiteral("IdentifyEdit"));
        IdentifyEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        IdentifyEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(IdentifyEdit);

        line_6 = new QFrame(verticalLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        TelephoneEdit = new QLineEdit(verticalLayoutWidget);
        TelephoneEdit->setObjectName(QStringLiteral("TelephoneEdit"));
        TelephoneEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;"));
        TelephoneEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(TelephoneEdit);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(240, 80, 121, 241));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Username = new QLabel(verticalLayoutWidget_2);
        Username->setObjectName(QStringLiteral("Username"));
        Username->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(Username);

        Password = new QLabel(verticalLayoutWidget_2);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(Password);

        Realname = new QLabel(verticalLayoutWidget_2);
        Realname->setObjectName(QStringLiteral("Realname"));
        Realname->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(Realname);

        Identify = new QLabel(verticalLayoutWidget_2);
        Identify->setObjectName(QStringLiteral("Identify"));
        Identify->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(Identify);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(label_6);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(320, 380, 281, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Register = new QPushButton(horizontalLayoutWidget);
        Register->setObjectName(QStringLiteral("Register"));
        Register->setCursor(QCursor(Qt::PointingHandCursor));
        Register->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(Register);

        line_7 = new QFrame(horizontalLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_7);

        Cancel = new QPushButton(horizontalLayoutWidget);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setCursor(QCursor(Qt::PointingHandCursor));
        Cancel->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(Cancel);

        warning = new QLabel(centralwidget);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(360, 340, 231, 31));
        warning->setStyleSheet(QLatin1String("background-color : transparent;\n"
"color : rgb(117,247,88);"));
        RegisterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegisterWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        RegisterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegisterWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RegisterWindow->setStatusBar(statusbar);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "MainWindow", 0));
        label->setText(QString());
        Username->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Username\357\274\232</p></body></html>", 0));
        Password->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Password\357\274\232</p></body></html>", 0));
        Realname->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Realname:</p></body></html>", 0));
        Identify->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Identify\357\274\232</p></body></html>", 0));
        label_6->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Telephone:</p></body></html>", 0));
        Register->setText(QApplication::translate("RegisterWindow", "Register", 0));
        Cancel->setText(QApplication::translate("RegisterWindow", "Concel", 0));
        warning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
