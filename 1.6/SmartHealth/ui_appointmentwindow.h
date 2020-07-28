/********************************************************************************
** Form generated from reading UI file 'appointmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENTWINDOW_H
#define UI_APPOINTMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "displaywidget.h"

QT_BEGIN_NAMESPACE

class Ui_AppointmentWindow
{
public:
    QWidget *centralwidget;
    DisplayWidget *widget;
    QLabel *nameLabel;
    QLabel *majorLabel;
    QLabel *workTime;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextEdit *briefIntroduceTextEdit;
    QCalendarWidget *calendarWidget;
    QPushButton *commitButton;
    QLabel *appointmentTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AppointmentWindow)
    {
        if (AppointmentWindow->objectName().isEmpty())
            AppointmentWindow->setObjectName(QStringLiteral("AppointmentWindow"));
        AppointmentWindow->resize(892, 616);
        centralwidget = new QWidget(AppointmentWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new DisplayWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 30, 261, 241));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(400, 50, 291, 51));
        majorLabel = new QLabel(centralwidget);
        majorLabel->setObjectName(QStringLiteral("majorLabel"));
        majorLabel->setGeometry(QRect(400, 120, 301, 41));
        workTime = new QLabel(centralwidget);
        workTime->setObjectName(QStringLiteral("workTime"));
        workTime->setGeometry(QRect(400, 200, 311, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 300, 431, 241));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        briefIntroduceTextEdit = new QTextEdit(groupBox);
        briefIntroduceTextEdit->setObjectName(QStringLiteral("briefIntroduceTextEdit"));

        horizontalLayout->addWidget(briefIntroduceTextEdit);

        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(490, 260, 341, 201));
        commitButton = new QPushButton(centralwidget);
        commitButton->setObjectName(QStringLiteral("commitButton"));
        commitButton->setGeometry(QRect(700, 500, 131, 41));
        appointmentTime = new QLabel(centralwidget);
        appointmentTime->setObjectName(QStringLiteral("appointmentTime"));
        appointmentTime->setGeometry(QRect(510, 500, 141, 31));
        AppointmentWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AppointmentWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 892, 23));
        AppointmentWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AppointmentWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AppointmentWindow->setStatusBar(statusbar);

        retranslateUi(AppointmentWindow);

        QMetaObject::connectSlotsByName(AppointmentWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AppointmentWindow)
    {
        AppointmentWindow->setWindowTitle(QApplication::translate("AppointmentWindow", "MainWindow", 0));
        nameLabel->setText(QApplication::translate("AppointmentWindow", "\345\247\223\345\220\215:", 0));
        majorLabel->setText(QApplication::translate("AppointmentWindow", "\344\270\223\344\270\232:", 0));
        workTime->setText(QApplication::translate("AppointmentWindow", "\344\273\216\344\270\232\346\227\266\351\227\264:", 0));
        groupBox->setTitle(QApplication::translate("AppointmentWindow", "\344\270\252\344\272\272\347\256\200\344\273\213", 0));
        commitButton->setText(QApplication::translate("AppointmentWindow", "\346\217\220\344\272\244", 0));
        appointmentTime->setText(QApplication::translate("AppointmentWindow", "\351\242\204\347\272\246\346\227\266\351\227\264:", 0));
    } // retranslateUi

};

namespace Ui {
    class AppointmentWindow: public Ui_AppointmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENTWINDOW_H
