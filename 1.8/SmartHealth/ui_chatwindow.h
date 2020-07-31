/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *startDate;
    QLineEdit *endDate;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QtCharts::QChartView *temperatureWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QtCharts::QChartView *heartRateWidget;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_3;
    QtCharts::QChartView *bloodPresureWidget;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_4;
    QtCharts::QChartView *bloodGluseWidget;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_5;
    QtCharts::QChartView *bloodOxygenWidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QStringLiteral("ChatWindow"));
        ChatWindow->resize(901, 720);
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        startDate = new QLineEdit(centralwidget);
        startDate->setObjectName(QStringLiteral("startDate"));
        startDate->setGeometry(QRect(30, 20, 201, 41));
        startDate->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;"));
        endDate = new QLineEdit(centralwidget);
        endDate->setObjectName(QStringLiteral("endDate"));
        endDate->setGeometry(QRect(300, 20, 181, 41));
        endDate->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 20, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"                   background-color:rbga(64,66,68,80);;\n"
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
"                   background-color:rbga(64,66,68,80);;\n"
"                   color:rgba(255,255,255,200);\n"
"}\n"
""));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 80, 801, 531));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        temperatureWidget = new QtCharts::QChartView(tab);
        temperatureWidget->setObjectName(QStringLiteral("temperatureWidget"));

        horizontalLayout->addWidget(temperatureWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        heartRateWidget = new QtCharts::QChartView(tab_2);
        heartRateWidget->setObjectName(QStringLiteral("heartRateWidget"));

        horizontalLayout_2->addWidget(heartRateWidget);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_3 = new QHBoxLayout(tab_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bloodPresureWidget = new QtCharts::QChartView(tab_4);
        bloodPresureWidget->setObjectName(QStringLiteral("bloodPresureWidget"));

        horizontalLayout_3->addWidget(bloodPresureWidget);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        horizontalLayout_4 = new QHBoxLayout(tab_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bloodGluseWidget = new QtCharts::QChartView(tab_5);
        bloodGluseWidget->setObjectName(QStringLiteral("bloodGluseWidget"));

        horizontalLayout_4->addWidget(bloodGluseWidget);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_5 = new QHBoxLayout(tab_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        bloodOxygenWidget = new QtCharts::QChartView(tab_3);
        bloodOxygenWidget->setObjectName(QStringLiteral("bloodOxygenWidget"));

        horizontalLayout_5->addWidget(bloodOxygenWidget);

        tabWidget->addTab(tab_3, QString());
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 620, 861, 41));
        label->setStyleSheet(QLatin1String("backgroud-color: rgb(65,65,65);\n"
"color: rgb(0,0,0);"));
        ChatWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 901, 26));
        ChatWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChatWindow->setStatusBar(statusbar);

        retranslateUi(ChatWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QApplication::translate("ChatWindow", "MainWindow", 0));
        startDate->setText(QApplication::translate("ChatWindow", "2020-07-25", 0));
        endDate->setText(QApplication::translate("ChatWindow", "2020-07-30", 0));
        pushButton->setText(QApplication::translate("ChatWindow", "\346\217\220\344\272\244", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ChatWindow", "\346\270\251\345\272\246", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ChatWindow", "\345\277\203\347\216\207", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ChatWindow", "\350\241\200\345\216\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ChatWindow", "\350\241\200\347\263\226", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ChatWindow", "\350\241\200\346\260\247", 0));
        label->setText(QApplication::translate("ChatWindow", " \346\270\251\351\246\250\346\217\220\347\244\272\357\274\232\346\255\243\345\270\270\346\203\205\345\206\265\350\241\200\347\263\226\357\274\2323.9-6.1 \345\277\203\347\216\207\357\274\23260-100   \345\212\250\350\204\211\350\241\200\346\260\247\347\272\246\344\270\27298% \351\235\231\350\204\211\350\241\200\346\260\247\347\272\246\344\270\27275%   \350\241\200\345\216\213\357\274\232\344\275\216\345\216\21360-90\357\274\214\351\253\230\345\216\21395-120", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
