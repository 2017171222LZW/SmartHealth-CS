/********************************************************************************
** Form generated from reading UI file 'chatonlinewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATONLINEWINDOW_H
#define UI_CHATONLINEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatOnlineWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QTextEdit *textEdit;
    QLabel *oppositePerson;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatOnlineWindow)
    {
        if (ChatOnlineWindow->objectName().isEmpty())
            ChatOnlineWindow->setObjectName(QStringLiteral("ChatOnlineWindow"));
        ChatOnlineWindow->resize(875, 711);
        centralwidget = new QWidget(ChatOnlineWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 470, 781, 200));
        widget->setMinimumSize(QSize(0, 200));
        widget->setMaximumSize(QSize(16777215, 200));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                   background-color:rgba(220,220,220,120);\n"
"                   border-style:outset;                                                             \n"
"                   border-radius:5px;                     \n"
"                   font: 75 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";           \n"
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

        gridLayout->addWidget(pushButton, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"border-color: : transparent;\n"
"color : rgb(37,42,47);"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 4);

        oppositePerson = new QLabel(centralwidget);
        oppositePerson->setObjectName(QStringLiteral("oppositePerson"));
        oppositePerson->setGeometry(QRect(50, 10, 381, 41));
        oppositePerson->setStyleSheet(QString::fromUtf8("order-radius: 8 px;\n"
"font: 75 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(166,166,166);\n"
"qproperty-alignment:AlignHCenter;\n"
"padding-top: 10px;\n"
"\n"
""));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 60, 799, 399));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setStyleSheet(QLatin1String("QListWidget{background-color: rgb(247, 247, 247); color:rgb(51,51,51); border: 1px solid  rgb(247, 247, 247);outline:0px;}\n"
"QListWidget::Item{background-color: rgb(247, 247, 247);}\n"
"QListWidget::Item:hover{background-color: rgb(247, 247, 247); }\n"
"QListWidget::item:selected{\n"
"	background-color: rgb(247, 247, 247);\n"
"	color:black; \n"
"    border: 2px solid  rgb(247, 247, 247);\n"
"}\n"
"QListWidget::item:selected:!active{\n"
"	border: 1px solid  rgb(247, 247, 247); \n"
"	background-color: rgb(247, 247, 247); \n"
"	color:rgb(51,51,51); \n"
"} "));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ChatOnlineWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatOnlineWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 875, 26));
        ChatOnlineWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatOnlineWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChatOnlineWindow->setStatusBar(statusbar);

        retranslateUi(ChatOnlineWindow);

        QMetaObject::connectSlotsByName(ChatOnlineWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatOnlineWindow)
    {
        ChatOnlineWindow->setWindowTitle(QApplication::translate("ChatOnlineWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("ChatOnlineWindow", "\345\217\221\351\200\201", 0));
        oppositePerson->setText(QApplication::translate("ChatOnlineWindow", "\347\272\277\344\270\212\345\222\250\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatOnlineWindow: public Ui_ChatOnlineWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATONLINEWINDOW_H
