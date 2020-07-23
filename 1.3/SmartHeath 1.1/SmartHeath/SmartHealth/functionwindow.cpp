#include "functionwindow.h"
#include "ui_functionwindow.h"
#include "doctor.h"

/**
 * @功能: 初始化页面、功能模块
 * @解释:
 */
FunctionWindow::FunctionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FunctionWindow)
{
    ui->setupUi(this);
    //窗口初始设定
    this->setWindowTitle("Function");
    this->setWindowIcon(QIcon(":/img/icon.png"));

    this->doctorWin = NULL;

    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg04.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
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
        this->doctorWin = new DoctorWindow();
        connect(doctorWin, doctorWin->back2Func, this, backFromDoctor);
        doctorWin->addDoctorInformation(Doctor("阿青","5年","博士","图像医学"));
        doctorWin->addDoctorInformation(Doctor("阿林","8年","博士","分布式医学"));
    }
    return doctorWin;
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

void FunctionWindow::on_Logout_clicked()
{
    emit backForLogOut();
}
