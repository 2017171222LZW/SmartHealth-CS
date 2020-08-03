#include "passwordwindow.h"
#include "ui_passwordwindow.h"
#include <QDebug>

PasswordWindow::PasswordWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PasswordWindow)
{
    ui->setupUi(this);
    initPage1();
    initPage2();

    //初始化界面
    elementHide(page2);
    elementShow(page1);

    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg02.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
    //固定窗口大小
    this->setFixedSize(this->width() , this->height());

    //"医生","患者"，"管理员"
    ui->comboBox->addItem("患者");
    ui->comboBox->addItem("医生");
    ui->comboBox->addItem("管理员");
}

PasswordWindow::~PasswordWindow()
{
    emit on_backBtn_clicked();
    delete ui;
}


/**
 * @功能: 初始化管理集合vector1
 * @解释:
 */
void PasswordWindow::initPage1()
{
    page1.push_back(ui->Identify_e);
    page1.push_back(ui->tephone);
    page1.push_back(ui->Identify);
    page1.push_back(ui->Telephone);
    page1.push_back(ui->warning_1);
    page1.push_back(ui->line_5);
    page1.push_back(ui->nextBtn);
    page1.push_back(ui->comboBox);
}

/**
 * @功能: 初始化管理集合vector2
 * @解释:
 */
void PasswordWindow::initPage2()
{
    page2.push_back(ui->newPasswd);
    page2.push_back(ui->Confirm);
    page2.push_back(ui->okBtn);
    page2.push_back(ui->line_6);
    page2.push_back(ui->warning_2);
    page2.push_back(ui->confirm);
    page2.push_back(ui->newPasswd);
    page2.push_back(ui->Newpasswd);
}


/**
 * @功能: Ok按键，结束密码修改
 * @解释:
 */
void PasswordWindow::on_okBtn_clicked()
{
    QString passwd1 = ui->newPasswd->text();
    QString passwd2 = ui->confirm->text();

    if(QString::compare(passwd1,passwd2) != 0){
        ui->warning_2->setStyleSheet("color:red;font: 75 11pt;");
        ui->warning_2->setText("修改密码失败: 请确认两次密码相同");
        return ;
    }

    emit ChangeUserPasswd(ui->Identify_e->text(),
                          ui->tephone->text(),
                          ui->newPasswd->text());
}


/**
 * @功能: next按键，翻页至page2
 * @解释:
 */
void PasswordWindow::on_nextBtn_clicked()
{
    QString uid      = ui->Identify_e->text();
    QString telphone = ui->tephone->text();

    if(NULL == uid || NULL == telphone){
        ui->warning_1->setStyleSheet("color:red;font: 75 11pt;");
        ui->warning_1->setText("操作失败: 请输入相应信息");
        return ;
    }

    qDebug() << "send alert psswd           <ok>";

    emit userPassword(uid, telphone);
}


/**
 * @功能: 显示page页面
 * @解释:
 */
void PasswordWindow::elementShow(QVector<QWidget *> page)
{
    for(auto e : page){
        e->show();
    }
}


/**
 * @功能: 隐藏page页面
 * @解释:
 */
void PasswordWindow::elementHide(QVector<QWidget *> page)
{
    for(auto e : page){
        e->hide();
    }
}

/**
 * @功能: 返回到登录界面
 * @解释:
 */
void PasswordWindow::on_backBtn_clicked()
{
    emit back2Login();
    elementHide(page2);
    elementShow(page1);
}

/**
 * @功能: 修改密码的验证通过
 * @解释:
 */
void PasswordWindow::PasswdSeccuss()
{
    elementHide(page1);
    elementShow(page2);
}

/**
 * @功能: 修改密码的验证失败
 * @解释:
 */
void PasswordWindow::PasswdFail()
{
    ui->warning_1->setStyleSheet("color:red;font: 75 11pt;");
    ui->warning_1->setText("修改密码失败: 请输入正确的验证信息");
}

/**
 * @功能: 修改密码完成后跳转
 * @解释:
 */
void PasswordWindow::changeSeccuss()
{
    emit on_backBtn_clicked();
}

/**
 * @功能: 修改密码执行失败
 * @解释: 可能是服务端出现了问题
 */
void PasswordWindow::changeFail()
{
    ui->warning_2->setStyleSheet("color:red;font: 75 11pt;");
    ui->warning_2->setText("修改密码失败: 服务器出错");
}
