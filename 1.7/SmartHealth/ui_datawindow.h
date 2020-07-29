/********************************************************************************
** Form generated from reading UI file 'datawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAWINDOW_H
#define UI_DATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_DataWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *bloodGluseLineEdit;
    QPushButton *commitPushButton;
    QLineEdit *bloodOxygenLineEdit;
    QLineEdit *temperatureLineEdit;
    QPushButton *backBtn;
    QLineEdit *bloodPresureLineEdit;
    QLineEdit *heartRateLineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataWindow)
    {
        if (DataWindow->objectName().isEmpty())
            DataWindow->setObjectName(QStringLiteral("DataWindow"));
        DataWindow->resize(800, 600);
        centralwidget = new QWidget(DataWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        bloodGluseLineEdit = new QLineEdit(centralwidget);
        bloodGluseLineEdit->setObjectName(QStringLiteral("bloodGluseLineEdit"));
        bloodGluseLineEdit->setGeometry(QRect(280, 150, 211, 31));
        bloodGluseLineEdit->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        commitPushButton = new QPushButton(centralwidget);
        commitPushButton->setObjectName(QStringLiteral("commitPushButton"));
        commitPushButton->setGeometry(QRect(370, 410, 121, 41));
        commitPushButton->setStyleSheet(QString::fromUtf8("\n"
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
        bloodOxygenLineEdit = new QLineEdit(centralwidget);
        bloodOxygenLineEdit->setObjectName(QStringLiteral("bloodOxygenLineEdit"));
        bloodOxygenLineEdit->setGeometry(QRect(280, 200, 211, 31));
        bloodOxygenLineEdit->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        temperatureLineEdit = new QLineEdit(centralwidget);
        temperatureLineEdit->setObjectName(QStringLiteral("temperatureLineEdit"));
        temperatureLineEdit->setGeometry(QRect(280, 80, 211, 31));
        temperatureLineEdit->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(520, 410, 121, 41));
        backBtn->setStyleSheet(QString::fromUtf8("\n"
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
        bloodPresureLineEdit = new QLineEdit(centralwidget);
        bloodPresureLineEdit->setObjectName(QStringLiteral("bloodPresureLineEdit"));
        bloodPresureLineEdit->setGeometry(QRect(280, 320, 211, 31));
        bloodPresureLineEdit->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        heartRateLineEdit = new QLineEdit(centralwidget);
        heartRateLineEdit->setObjectName(QStringLiteral("heartRateLineEdit"));
        heartRateLineEdit->setGeometry(QRect(280, 260, 211, 31));
        heartRateLineEdit->setStyleSheet(QLatin1String("background-color : rgb(240,240,240);\n"
"color : rgb(0,0,0);\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 70, 101, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(0,0,0);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(0,0,0);"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(0,0,0);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(0,0,0);"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(0,0,0);"));

        verticalLayout->addWidget(label_5);

        DataWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        DataWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DataWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DataWindow->setStatusBar(statusbar);

        retranslateUi(DataWindow);

        QMetaObject::connectSlotsByName(DataWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DataWindow)
    {
        DataWindow->setWindowTitle(QApplication::translate("DataWindow", "MainWindow", 0));
        commitPushButton->setText(QApplication::translate("DataWindow", "\346\217\220\344\272\244", 0));
        backBtn->setText(QApplication::translate("DataWindow", "\350\277\224\345\233\236", 0));
        bloodPresureLineEdit->setText(QString());
        heartRateLineEdit->setText(QString());
        label->setText(QApplication::translate("DataWindow", "\346\270\251\345\272\246 :", 0));
        label_2->setText(QApplication::translate("DataWindow", "\350\241\200\347\263\226 :", 0));
        label_3->setText(QApplication::translate("DataWindow", "\350\241\200\346\260\247 :", 0));
        label_4->setText(QApplication::translate("DataWindow", "\345\277\203\347\216\207\357\274\232", 0));
        label_5->setText(QApplication::translate("DataWindow", "\350\241\200\345\216\213\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class DataWindow: public Ui_DataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAWINDOW_H
