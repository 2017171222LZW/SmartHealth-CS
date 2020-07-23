#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "customer.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include "jsondata.h"


/**
 * @功能: 初始化页面、功能模块
 * @解释:
 */
RegisterWindow::RegisterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Register");
    this->setWindowIcon(QIcon(":/img/icon.png"));
    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg04.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
    //固定窗口大小
    this->setFixedSize(this->width() , this->height());

    //注册用户类型
    ui->comboBox->addItem("患者");
    ui->comboBox->addItem("医生");

    //初始化医生模块
    initDoctorItem();
    hideDocItem();
    ui->picture->displayPicture(":/img/defualt.jpg");
}

RegisterWindow::~RegisterWindow()
{
    emit back2Login();
    delete ui;
}

void RegisterWindow::registerDoctor(const QByteArray &data)
{
    verify.registerDoctor(data);
}

/**
 * @功能: 注册完成，返回登录
 * @解释:
 */
void RegisterWindow::on_Cancel_clicked()
{
    emit back2Login();
    this->close();
}

/**
 * @功能: 执行注册
 * @解释:
 */
void RegisterWindow::on_Register_clicked()
{
    Customer* person = Customer::createCustomer()
            ->setUsername(ui->AccountEdit->text())
            ->setPasswrod(ui->PasswdEdit->text())
            ->setRealName(ui->RealnameEdit->text())
            ->setIdentify(ui->IdentifyEdit->text())
            ->setTelephone(ui->TelephoneEdit->text());
    if(false == person->check()){//信息的填写要求与注册相分离
        ui->warning->setStyleSheet("color:red;font: 75 11pt;");
        ui->warning->setText("注册失败: 请输入完整信息");
        return ;
    }
    if(ui->comboBox->currentIndex() == PAITIENT){   //用户注册
        emit userRegister(person);return;
    }
    if(ui->comboBox->currentIndex() == DOCTOR){     //医生注册
        person->getDoctorMsg()
                ->setDiploma(ui->DiplomaEdit->text())
                ->setProfession(ui->ProfessionEdit->text())
                ->setWorkTime(ui->WorkTimeEdit->text())
                ->setImage(this->file);
        if(false == person->checkDocMsg()){
            ui->warning->setStyleSheet("color:red;font: 75 11pt;");
            ui->warning->setText("注册失败: 请输入完整信息");
            return ;
        }
        JsonData data;
        data.addDoctor(*person);
        data.addInt("function_id", DOC_REGISTER_FUNCTION_ID);
        data.addString("breifIntroduce", ui->breifIntroduceEdit->toPlainText());
        qDebug() << QString(data.toByteArrayData()) << endl;
        registerDoctor(data.toByteArrayData());
        return;
    }
    if(ui->comboBox->currentIndex() == MANAGER){
        return;
    }

    delete person;
}

/**
 * @功能: 若执行通过，则返回登录
 * @解释:
 */
void RegisterWindow::registerSeccuss(){
    QMessageBox::warning(NULL, QString("提示"), QString("注册成功, 请登录"), QMessageBox::Ok, QMessageBox::Discard);
    reLogin();
    this->close();
}

/**
 * @功能: 注册失败，返回提示
 * @解释:
 */
void RegisterWindow::registerFail(){
    ui->warning->setStyleSheet("color:red;font: 75 11pt;");
    ui->warning->setText("注册失败: 请勿重复注册");
    return ;
}

/**
 * @功能: 重新返回登录
 * @解释:
 */
void RegisterWindow::reLogin(){
    emit back2Login();
    clearPage();
}

/**
 * @功能: 清空输入框
 * @解释:
 */
void RegisterWindow::clearPage(){
    for(auto e : page){
        e->setText(NULL);
    }
}
/**
 * @功能: 初始化输入框管理集
 * @解释:
 */
void RegisterWindow::initPage()
{
    page.push_back(ui->AccountEdit);
    page.push_back(ui->PasswdEdit);
    page.push_back(ui->RealnameEdit);
    page.push_back(ui->IdentifyEdit);
    page.push_back(ui->TelephoneEdit);
}

/**
 * @功能: 初始化医生独有的注册信息栏
 * @解释:
 */
void RegisterWindow::initDoctorItem()
{
    this->doctorItem.push_back(ui->DiplomaEdit);
    this->doctorItem.push_back(ui->ProfessionEdit);
    this->doctorItem.push_back(ui->WorkTimeEdit);
    this->doctorItem.push_back(ui->label_9);
    this->doctorItem.push_back(ui->label_10);
    this->doctorItem.push_back(ui->label_11);
    this->doctorItem.push_back(ui->line_8);
    this->doctorItem.push_back(ui->line_9);
    this->doctorItem.push_back(ui->line_10);
    this->doctorItem.push_back(ui->picture);
    this->doctorItem.push_back(ui->Picture);
    this->doctorItem.push_back(ui->Camera);
    this->doctorItem.push_back(ui->breifIntroduce);
    this->doctorItem.push_back(ui->breifIntroduceEdit);
}

/**
 * @功能: 展示医生信息输入
 * @解释:
 */
void RegisterWindow::showDocItem()
{
    for(auto item : doctorItem){
        item->show();
    }
}

/**
 * @功能: 隐藏医生信息输入
 * @解释:
 */
void RegisterWindow::hideDocItem()
{
    for(auto item : doctorItem){
        item->hide();
    }
}

/**
 * @功能: 当注册类型切换时
 * @解释:
 */
void RegisterWindow::on_comboBox_currentIndexChanged(int index)
{
    switch(index){
        case PAITIENT:{
            hideDocItem();
            break;
        }
        case DOCTOR:{
            showDocItem();
            break;
        }
        case MANAGER:{
            hideDocItem();
            break;
        }
    }
}

/**
 * @功能: 注册（医生）者选择一张图片上传
 * @解释:
 */
void RegisterWindow::on_Picture_clicked()
{
    file = QFileDialog::getOpenFileName(this,
                                                tr("选择图片"),
                                                QDir::currentPath(),
                                                tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "filename : " << file << endl;
    if(!file.isNull())
        ui->picture->displayPicture(file);
}
