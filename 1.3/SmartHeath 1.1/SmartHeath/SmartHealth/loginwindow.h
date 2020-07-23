#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "registerwindow.h"
#include "functionwindow.h"
#include "passwordwindow.h"
#include "userverify.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();
    RegisterWindow* getRegisterWindow();
    PasswordWindow* getPasswdWindow();
    FunctionWindow* getFunctionWindow();

private:
    void connect_Regi_Veri();
    void connect_Psd_Veri();

private slots:
    void fromRegisterBack();
    void fromPasswdBack();
    void on_Login_2_clicked();
    void on_Login_clicked();
    void fromFuncBack();
    void fromFuncLogout();
    void success2Login();//通过验证，允许登入
    void fail2Login();//未通过验证
    void on_passwdBtn_clicked();

    void on_comboBox_currentIndexChanged(int index);

signals:
    void verifyLogin(const QString uname, const QString passwd);

private:
    Ui::LoginWindow *ui;
    RegisterWindow *registerWin;
    FunctionWindow *funcWin;
    PasswordWindow *passwdWin;
    UserVerify *verify;

};

#endif // LOGINWINDOW_H
