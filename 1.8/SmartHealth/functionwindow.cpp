#include "functionwindow.h"
#include "ui_functionwindow.h"
#include "doctor.h"

/**
 * @功能: 初始化页面、功能模块
 * @解释:
 */
FunctionWindow::FunctionWindow(UserVerify *verify, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FunctionWindow)
{
    ui->setupUi(this);
    //窗口初始设定
    this->setWindowTitle("Function");
    this->setWindowIcon(QIcon(":/img/icon.png"));

    this->doctorWin = NULL;
    this->dataWindow = NULL;
    this->chatWindow = NULL;

    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg04.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();

    this->verify = verify;
}

FunctionWindow::~FunctionWindow()
{
    emit backForExit();
    delete ui;
}

/**
 * @功能: 获取医生预约界面对象
 * @解释:
 */
DoctorWindow *FunctionWindow::getDoctorWindow()
{
    if(NULL == this->doctorWin){
        this->doctorWin = new DoctorWindow(verify);
        connect(doctorWin, doctorWin->back2Func, this, backFromDoctor);
    }
    return doctorWin;
}

DataWindow *FunctionWindow::getDataWindow()
{
    if(NULL == this->dataWindow){
        this->dataWindow = new DataWindow(verify);
        connect(dataWindow, dataWindow->back2Func, this, backFromData);
    }
    return dataWindow;
}

ChatWindow *FunctionWindow::getChatWindow()
{
    if(NULL == this->chatWindow){
        this->chatWindow = new ChatWindow(verify);
        //connect(chatWindow, chatWindow->back2Func, this, backFromData);
    }
    return chatWindow;
}

/**
 * @功能: 用户退出
 * @解释:
 */
void FunctionWindow::on_Exit_clicked()
{
    this->close();
    emit backForExit();
}

void FunctionWindow::on_Login_3_clicked()
{
    getDoctorWindow()->show();
    this->hide();
}

/**
 * @功能: 从医生预约界面回到功能界面
 * @解释:
 */
void FunctionWindow::backFromDoctor()
{
    this->show();
    getDoctorWindow()->hide();
}

void FunctionWindow::backFromData()
{
    this->show();
    getDataWindow()->hide();
}

void FunctionWindow::on_Logout_clicked()
{
    emit backForLogOut();
}

void FunctionWindow::on_dataButton_clicked()
{
    getDataWindow()->cleanWindow();
    getDataWindow()->show();
    this->hide();
}

void FunctionWindow::on_Login_2_clicked()
{
    getChatWindow()->show();
}
