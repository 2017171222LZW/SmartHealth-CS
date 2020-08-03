/********************************************************************************
** Form generated from reading UI file 'functionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONWINDOW_H
#define UI_FUNCTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *dataButton;
    QFrame *line;
    QPushButton *Login_2;
    QFrame *line_2;
    QPushButton *Login_3;
    QFrame *line_3;
    QPushButton *Login_5;
    QFrame *line_4;
    QPushButton *Login_4;
    QPushButton *Exit;
    QPushButton *Logout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FunctionWindow)
    {
        if (FunctionWindow->objectName().isEmpty())
            FunctionWindow->setObjectName(QStringLiteral("FunctionWindow"));
        FunctionWindow->resize(548, 414);
        centralwidget = new QWidget(FunctionWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 70, 214, 260));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dataButton = new QPushButton(verticalLayoutWidget);
        dataButton->setObjectName(QStringLiteral("dataButton"));
        dataButton->setCursor(QCursor(Qt::PointingHandCursor));
        dataButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,200);\n"
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
"                   background-color:rgba(100,255,100,150);\n"
"                   border-color:rgba(255,255,255,200);\n"
"}\n"
""));

        verticalLayout->addWidget(dataButton);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Login_2 = new QPushButton(verticalLayoutWidget);
        Login_2->setObjectName(QStringLiteral("Login_2"));
        Login_2->setCursor(QCursor(Qt::PointingHandCursor));
        Login_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,200);\n"
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
"                   background-color:rgba(100,255,100,150);\n"
"                   border-color:rgba(255,255,255,200);\n"
"}\n"
""));

        verticalLayout->addWidget(Login_2);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        Login_3 = new QPushButton(verticalLayoutWidget);
        Login_3->setObjectName(QStringLiteral("Login_3"));
        Login_3->setCursor(QCursor(Qt::PointingHandCursor));
        Login_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,200);\n"
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
"                   background-color:rgba(100,255,100,150);\n"
"                   border-color:rgba(255,255,255,200);\n"
"}\n"
""));

        verticalLayout->addWidget(Login_3);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        Login_5 = new QPushButton(verticalLayoutWidget);
        Login_5->setObjectName(QStringLiteral("Login_5"));
        Login_5->setCursor(QCursor(Qt::PointingHandCursor));
        Login_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,200);\n"
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
"                   background-color:rgba(100,255,100,150);\n"
"                   border-color:rgba(255,255,255,200);\n"
"}\n"
""));

        verticalLayout->addWidget(Login_5);

        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        Login_4 = new QPushButton(verticalLayoutWidget);
        Login_4->setObjectName(QStringLiteral("Login_4"));
        Login_4->setCursor(QCursor(Qt::PointingHandCursor));
        Login_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,200);\n"
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
"                   background-color:rgba(100,255,100,150);\n"
"                   border-color:rgba(255,255,255,200);\n"
"}\n"
""));

        verticalLayout->addWidget(Login_4);

        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(390, 330, 151, 41));
        Exit->setCursor(QCursor(Qt::PointingHandCursor));
        Exit->setStyleSheet(QString::fromUtf8("\n"
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
        Logout = new QPushButton(centralwidget);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(0, 330, 151, 41));
        Logout->setCursor(QCursor(Qt::PointingHandCursor));
        Logout->setStyleSheet(QString::fromUtf8("\n"
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
        FunctionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FunctionWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 548, 26));
        FunctionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FunctionWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FunctionWindow->setStatusBar(statusbar);

        retranslateUi(FunctionWindow);

        QMetaObject::connectSlotsByName(FunctionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FunctionWindow)
    {
        FunctionWindow->setWindowTitle(QApplication::translate("FunctionWindow", "MainWindow", 0));
        dataButton->setText(QApplication::translate("FunctionWindow", "\344\272\272\344\275\223\347\211\271\345\276\201\346\225\260\346\215\256\351\207\207\351\233\206", 0));
        Login_2->setText(QApplication::translate("FunctionWindow", "\344\275\223\345\276\201\346\225\260\346\215\256\346\237\245\347\234\213", 0));
        Login_3->setText(QApplication::translate("FunctionWindow", "\351\242\204\347\272\246\345\214\273\347\224\237", 0));
        Login_5->setText(QApplication::translate("FunctionWindow", "\345\234\250\347\272\277\350\257\242\350\257\212", 0));
        Login_4->setText(QApplication::translate("FunctionWindow", "\346\211\251\345\261\225\351\241\271", 0));
        Exit->setText(QApplication::translate("FunctionWindow", "Exit", 0));
        Logout->setText(QApplication::translate("FunctionWindow", "LogOut", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionWindow: public Ui_FunctionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONWINDOW_H
