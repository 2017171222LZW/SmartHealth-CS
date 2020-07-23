/********************************************************************************
** Form generated from reading UI file 'doctorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORWINDOW_H
#define UI_DOCTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DoctorWindow)
    {
        if (DoctorWindow->objectName().isEmpty())
            DoctorWindow->setObjectName(QStringLiteral("DoctorWindow"));
        DoctorWindow->resize(794, 564);
        centralwidget = new QWidget(DoctorWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(150, 30, 631, 481));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/pdx.jpg")));
        label->setScaledContents(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(7, 130, 131, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        DoctorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DoctorWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 794, 26));
        DoctorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DoctorWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DoctorWindow->setStatusBar(statusbar);

        retranslateUi(DoctorWindow);

        QMetaObject::connectSlotsByName(DoctorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DoctorWindow)
    {
        DoctorWindow->setWindowTitle(QApplication::translate("DoctorWindow", "MainWindow", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DoctorWindow: public Ui_DoctorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWINDOW_H
