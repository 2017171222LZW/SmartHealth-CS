#include "loginwindow.h"
#include "locallogin.h"
#include "ui_loginwindow.h"
#include <QLabel>
#include <QRect>
#include <QApplication>
#include <QPushButton>
#include <QBrush>
#include <QPalette>
#include <QDesktopWidget>
#include <QPixmap>
#include <QImage>
#include <QWidget>
#include <QColor>
#include <QFile>
#include <QDebug>
#include <QListView>
#include <QDebug>

QString LoginWindow::loginUser;

/**
 * @功能: 初始化页面、功能模块
 * @解释:
 */
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    //窗口初始设定
    this->setWindowTitle("Login System");
    this->setWindowIcon(QIcon(":/img/icon.png"));
    registerWin  = NULL;
    funcWin      = NULL;
    passwdWin    = NULL;
    ChatOLWin    = NULL;

    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg03.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
    //固定窗口大小
    this->setFixedSize(this->width() , this->height());

    //验证登录
    verify = new UserVerify;
    connect(this, this->verifyLogin,verify, verify->verifyLogin);
    connect(this->verify, UserVerify::promised2Login, this, success2Login);
    connect(this->verify, UserVerify::dotpromised2Login, this, fail2Login);
    connect(verify, verify->promised2Login_doc, this, this->docGotoChat);

    LocalLogin::set(LocalLogin::Uname,"lzw");
    QJsonObject object = LocalLogin::getObject();

    if(object["RemenberPsd"].toBool()){
        ui->LogPsd->setChecked(true);
        ui->AccountEdit->setText(object["UserName"].toString());
        ui->PasswdEdit->setText(object["PassWord"].toString());
    }


    //"医生","患者"，"管理员"
    ui->comboBox->addItem("患者");
    ui->comboBox->addItem("医生");
    ui->comboBox->addItem("管理员");
    //让item样式生效
    ui->comboBox->setView(new QListView());
}

LoginWindow::~LoginWindow()
{
    if(this->registerWin)
        delete this->registerWin;
    if(this->funcWin)
        delete this->funcWin;
    if(this->verify)
        delete this->verify;
    delete ui;
}

/**
 * @功能: 关联RegisterWin与Verify
 * @解释:
 */
void LoginWindow::connect_Regi_Veri(){
    qDebug() << "注册验证准备完成" << endl;
    connect(registerWin, RegisterWindow::back2Login, this, fromRegisterBack);
}
/**
 * @功能: 获取注册界面对象
 * @解释: 懒加载新窗口，提高性能, 所有注册关联的信号与槽都在这里连接
 */
RegisterWindow *LoginWindow::getRegisterWindow()
{
    if(NULL == registerWin){
        registerWin = new RegisterWindow();
        //关联信号与槽函数,内联函数
        connect_Regi_Veri();
    }
    return registerWin;
}

/**
 * @功能: 关联PasswordWin与Verify
 * @解释:
 */
void LoginWindow::connect_Psd_Veri(){
    qDebug() << "改密验证准备完成" << endl;
    connect(passwdWin, PasswordWindow::back2Login, this, this->fromPasswdBack);
    connect(passwdWin, passwdWin->userPassword, verify, verify->verigyUserChangePasswd);
    connect(verify, verify->changePSDFail, passwdWin, passwdWin->PasswdFail);
    connect(verify, verify->changePSDSeccuss, passwdWin, passwdWin->PasswdSeccuss);
    connect(passwdWin, passwdWin->ChangeUserPasswd, verify, verify->ChangeUserPasswd);
    connect(verify, verify->AfterchangePSD, passwdWin, passwdWin->changeSeccuss);
    connect(verify, verify->CantchangePSD, passwdWin, passwdWin->changeFail);
}
/**
 * @功能: 获取修改密码的页面对象
 * @解释:
 */
PasswordWindow *LoginWindow::getPasswdWindow()
{
    if(NULL == passwdWin){
        passwdWin = new PasswordWindow();
        //关联信号与槽
        connect_Psd_Veri();
    }
    return passwdWin;
}

/**
 * @功能: 获得功能窗口对象
 * @解释:
 */
FunctionWindow *LoginWindow::getFunctionWindow()
{
    if(NULL == funcWin){
        funcWin = new FunctionWindow(verify);
        //关联信号与槽
        connect(funcWin, funcWin->backForLogOut, this, this->fromFuncLogout);
    }
    return funcWin;
}

/**
 * @功能: 获得ChatOnline窗口
 * @解释:
 */
ChatOnlineWindow *LoginWindow::getChatOLWindow()
{
    if(NULL == ChatOLWin){
        ChatOLWin = new ChatOnlineWindow(verify);
        //关联信号与槽
        //connect(ChatOLWin, funcWin->backForLogOut, this, this->fromFuncLogout);
    }
    return ChatOLWin;
}

/**
 * @功能: 注册后，返回重新登录
 * @解释: 当注册完成，使登录对象响应，并切换UI界面
 */
void LoginWindow::fromRegisterBack()
{
    this->show();
    getRegisterWindow()->close();
}

void LoginWindow::showChat()
{
    getChatOLWindow()->show();
}

/**
 * @功能: 修改密码后，返回登录
 * @解释:
 */
void LoginWindow::fromPasswdBack()
{
    this->show();
    getPasswdWindow()->close();
}

/**
 * @功能: 用户前往注册
 * @解释: 当注册按键按下，使注册对象响应，并切换UI界面
 */
void LoginWindow::on_Login_2_clicked()
{
    verify->port = ui->port->text().toInt();

    getRegisterWindow()->show();
    this->hide();
}

/**
 * @功能: 响应用户，进入功能页面
 * @解释: 当登录按钮按下时，功能页面响应 或者 反馈用户登录失败
 */
void LoginWindow::on_Login_clicked()
{
    QString uname = ui->AccountEdit->text();
    QString passwd = ui->PasswdEdit->text();
    QString warnings=NULL;

    verify->port = ui->port->text().toInt();

    //警告样式设置
    ui->warning->setStyleSheet("color:red;font: 75 12pt;");

    if(NULL == uname){
        warnings = "登录失败: 请输入用户名";
        ui->warning->setText(warnings);
        return ;
    }
    if(NULL == passwd){
        warnings = "登录失败: 请输入密码";
        ui->warning->setText(warnings);
        return ;
    }

    switch(ui->comboBox->currentIndex()){
    case 0:
        emit verifyLogin(uname, passwd);break;
    case 1:
        verify->verifyloginDoc(uname, passwd);break;
    case 2:
        warnings = "登录失败: 功能未开放";
        ui->warning->setText(warnings);
    }
}

/**
 * @功能: 跳转至功能页面
 * @解释: 已经通过验证
 */
void LoginWindow::success2Login(){
    getFunctionWindow();
    connect(this->funcWin, FunctionWindow::backForExit, this, this->fromFuncBack);
    this->loginUser = ui->AccountEdit->text();
    this->funcWin->show();
    this->hide();
}

/**
 * @功能: 提示用户登录失败原因
 * @解释: 用户名或密码错误
 */
void LoginWindow::fail2Login(){
    QString warnings = "登录失败: 用户名或密码错误";
    ui->warning->setText(warnings);
}

/**
 * @功能: 退出，避免内存泄漏
 * @解释: 响应退出，析构所有对象和指针
 */
void LoginWindow::fromFuncBack()
{
    this->close();
}

void LoginWindow::fromFuncLogout()
{
    this->show();
    this->funcWin->close();
}

/**
 * @功能: 用户前往密码找回
 * @解释:
 */
void LoginWindow::on_passwdBtn_clicked()
{
    verify->port = ui->port->text().toInt();

    getPasswdWindow()->show();
    this->hide();
}

void LoginWindow::docGotoChat()
{
    qDebug() << "show" << endl;
    this->hide();
    getChatOLWindow()->show();
}

void LoginWindow::on_comboBox_currentIndexChanged(int index)
{
    qDebug() << index << endl;
}
