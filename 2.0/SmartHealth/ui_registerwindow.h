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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <displaywidget.h>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QFrame *line_3;
    QLineEdit *AccountEdit;
    QFrame *line;
    QLineEdit *PasswdEdit;
    QFrame *line_2;
    QLineEdit *RealnameEdit;
    QFrame *line_5;
    QLineEdit *IdentifyEdit;
    QFrame *line_6;
    QLineEdit *TelephoneEdit;
    QFrame *line_8;
    QLineEdit *DiplomaEdit;
    QFrame *line_9;
    QLineEdit *ProfessionEdit;
    QFrame *line_10;
    QLineEdit *WorkTimeEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *Username;
    QLabel *Password;
    QLabel *Realname;
    QLabel *Identify;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Register;
    QFrame *line_7;
    QPushButton *Cancel;
    QLabel *warning;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Picture;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    DisplayWidget *picture;
    QPushButton *Camera;
    QTextEdit *breifIntroduceEdit;
    QLabel *breifIntroduce;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QStringLiteral("RegisterWindow"));
        RegisterWindow->resize(904, 693);
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 681, 561));
        label->setStyleSheet(QLatin1String("background-color:rgba(64,66,68,120);\n"
"\n"
"border-radius:8px;\n"
""));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(350, 90, 191, 342));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid white;   \n"
"    border-radius: 3px;   \n"
"    padding: 1px 18px 1px 3px;   \n"
"    color: #fff;\n"
"    font: normal normal 15px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"}\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
"    height: 30px;   /* \351\241\271\347\232\204\351\253\230\345\272\246\357\274\210\350\256\276\347\275\256pComboBox->setView(new QListView());\345\220\216\357\274\214\350\257\245\351\241\271\346\211\215\350\265\267\344\275\234\347\224\250\357\274\211 */\n"
"	background-color: rgba(100,106,100,150);\n"
"	color: rgb(64,64,64);\n"
"}\n"
"QComboBox QAbstractItemView::item:hover{\n"
"	background-color: rgba(255,255,191,100);\n"
"	color: rgb(64,64,64);\n"
"}\n"
"/* QComboBox\344\270\255\347\232\204\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 "
                        "*/\n"
"QComboBox QAbstractScrollArea QScrollBar:vertical {\n"
"    width: 10px;\n"
"    background-color: #d0d2d4;   /* \347\251\272\347\231\275\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262  \347\201\260\350\211\262green */\n"
"	border-radius: 3px;   \n"
"}\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(comboBox);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

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
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        TelephoneEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(TelephoneEdit);

        line_8 = new QFrame(verticalLayoutWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        DiplomaEdit = new QLineEdit(verticalLayoutWidget);
        DiplomaEdit->setObjectName(QStringLiteral("DiplomaEdit"));
        DiplomaEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        DiplomaEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(DiplomaEdit);

        line_9 = new QFrame(verticalLayoutWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_9);

        ProfessionEdit = new QLineEdit(verticalLayoutWidget);
        ProfessionEdit->setObjectName(QStringLiteral("ProfessionEdit"));
        ProfessionEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        ProfessionEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(ProfessionEdit);

        line_10 = new QFrame(verticalLayoutWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_10);

        WorkTimeEdit = new QLineEdit(verticalLayoutWidget);
        WorkTimeEdit->setObjectName(QStringLiteral("WorkTimeEdit"));
        WorkTimeEdit->setStyleSheet(QLatin1String("background-color : transparent;\n"
"border-color: : transparent;\n"
"color : rgb(255,255,255);"));
        WorkTimeEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(WorkTimeEdit);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(200, 90, 121, 341));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(label_7);

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

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(label_11);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));

        verticalLayout_3->addWidget(label_9);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(270, 520, 281, 51));
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
        warning->setGeometry(QRect(320, 480, 231, 31));
        warning->setStyleSheet(QLatin1String("background-color : transparent;\n"
"color : rgb(117,247,88);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(600, 60, 141, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Picture = new QPushButton(gridLayoutWidget);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setCursor(QCursor(Qt::PointingHandCursor));
        Picture->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout->addWidget(Picture, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        picture = new DisplayWidget(gridLayoutWidget);
        picture->setObjectName(QStringLiteral("picture"));

        gridLayout->addWidget(picture, 0, 0, 1, 3);

        Camera = new QPushButton(gridLayoutWidget);
        Camera->setObjectName(QStringLiteral("Camera"));
        Camera->setCursor(QCursor(Qt::PointingHandCursor));
        Camera->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout->addWidget(Camera, 2, 1, 1, 1);

        breifIntroduceEdit = new QTextEdit(centralwidget);
        breifIntroduceEdit->setObjectName(QStringLiteral("breifIntroduceEdit"));
        breifIntroduceEdit->setGeometry(QRect(560, 350, 191, 141));
        breifIntroduceEdit->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        breifIntroduce = new QLabel(centralwidget);
        breifIntroduce->setObjectName(QStringLiteral("breifIntroduce"));
        breifIntroduce->setGeometry(QRect(570, 310, 151, 31));
        breifIntroduce->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color : rgb(255,255,255);"));
        RegisterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegisterWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 904, 26));
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
        label_7->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>UserType\357\274\232</p></body></html>", 0));
        Username->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>UserName\357\274\232</p></body></html>", 0));
        Password->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Password\357\274\232</p></body></html>", 0));
        Realname->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>RealName:</p></body></html>", 0));
        Identify->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Identify\357\274\232</p></body></html>", 0));
        label_6->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Telephone:</p></body></html>", 0));
        label_10->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Diploma:</p></body></html>", 0));
        label_11->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>Profession:</p></body></html>", 0));
        label_9->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span>WorkTime:</p></body></html>", 0));
        Register->setText(QApplication::translate("RegisterWindow", "Register", 0));
        Cancel->setText(QApplication::translate("RegisterWindow", "Concel", 0));
        warning->setText(QString());
        Picture->setText(QApplication::translate("RegisterWindow", "Picture", 0));
        Camera->setText(QApplication::translate("RegisterWindow", "Camera", 0));
        breifIntroduce->setText(QApplication::translate("RegisterWindow", "<html><head/><body><p>BreifIntroduce:</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
