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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *doctorTable;
    QPushButton *backBtn;
    QLabel *message;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DoctorWindow)
    {
        if (DoctorWindow->objectName().isEmpty())
            DoctorWindow->setObjectName(QStringLiteral("DoctorWindow"));
        DoctorWindow->resize(943, 665);
        centralwidget = new QWidget(DoctorWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        doctorTable = new QTableWidget(centralwidget);
        if (doctorTable->columnCount() < 5)
            doctorTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        doctorTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        doctorTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        doctorTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        doctorTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        doctorTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        doctorTable->setObjectName(QStringLiteral("doctorTable"));
        doctorTable->setGeometry(QRect(150, 10, 621, 511));
        doctorTable->setStyleSheet(QLatin1String("background-color : rgba(200,200,200,160);\n"
"\n"
"border-radius:8px;\n"
"\n"
"QHeaderView::section{\n"
"\n"
"background:rgb(64,66,68);\n"
"\n"
"}"));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(630, 570, 131, 41));
        backBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        message = new QLabel(centralwidget);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(820, 400, 311, 81));
        DoctorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DoctorWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 943, 26));
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
        QTableWidgetItem *___qtablewidgetitem = doctorTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DoctorWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = doctorTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DoctorWindow", "\344\273\216\344\270\232\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem2 = doctorTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DoctorWindow", "\345\255\246\345\216\206", 0));
        QTableWidgetItem *___qtablewidgetitem3 = doctorTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DoctorWindow", "\344\270\223\344\270\232", 0));
        QTableWidgetItem *___qtablewidgetitem4 = doctorTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DoctorWindow", "\351\242\204\347\272\246", 0));
        backBtn->setText(QApplication::translate("DoctorWindow", "\350\277\224\345\233\236", 0));
        message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DoctorWindow: public Ui_DoctorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWINDOW_H
