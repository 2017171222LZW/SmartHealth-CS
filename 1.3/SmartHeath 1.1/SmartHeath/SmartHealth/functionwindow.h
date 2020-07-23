#ifndef FUNCTIONWINDOW_H
#define FUNCTIONWINDOW_H

#include <QMainWindow>
#include "doctorwindow.h"

namespace Ui {
class FunctionWindow;
}

class FunctionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FunctionWindow(QWidget *parent = 0);
    ~FunctionWindow();

private:
    DoctorWindow* getDoctorWindow();

private slots:
    void on_Exit_clicked();

    void on_Login_3_clicked();

    void backFromDoctor();

    void on_Logout_clicked();

signals:
    void backForExit();
    void backForLogOut();

private:
    Ui::FunctionWindow *ui;
    DoctorWindow *doctorWin;
};

#endif // FUNCTIONWINDOW_H
