#ifndef FUNCTIONWINDOW_H
#define FUNCTIONWINDOW_H

#include <QMainWindow>
#include "doctorwindow.h"
#include "userverify.h"
#include "datawindow.h"
#include "chatwindow.h"


namespace Ui {
class FunctionWindow;
}

class FunctionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FunctionWindow(UserVerify *verify, QWidget *parent = 0);
    ~FunctionWindow();

private:
    DoctorWindow* getDoctorWindow();
    DataWindow* getDataWindow();
    ChatWindow* getChatWindow();

private slots:
    void on_Exit_clicked();

    void on_Login_3_clicked();

    void backFromDoctor();

    void backFromData();

    void on_Logout_clicked();

    void on_dataButton_clicked();

    void on_Login_2_clicked();

signals:
    void backForExit();
    void backForLogOut();

private:
    Ui::FunctionWindow *ui;
    DoctorWindow *doctorWin;
    UserVerify *verify;
    DataWindow *dataWindow;
    ChatWindow *chatWindow;
};

#endif // FUNCTIONWINDOW_H
