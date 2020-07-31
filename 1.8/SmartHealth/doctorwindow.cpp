#include "doctorwindow.h"
#include "ui_doctorwindow.h"
#include "appointmentbutton.h"
#include "loginwindow.h"
#include <QTableWidgetItem>
#include <QPalette>
#include <QPixmap>
#include <QBrush>
#include <QImage>
#include <QPicture>
#include <QPainter>

DoctorWindow::DoctorWindow(UserVerify *verify, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorWindow)
{
    ui->setupUi(this);
    initDoctorTable();
    //icon设置
    this->setWindowTitle("Subscribe Doctor");
    this->setWindowIcon(QIcon(":/img/icon2.jpg"));
    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg07.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
    //固定窗口大小
    this->setFixedSize(this->width() , this->height());

    this->verify = verify;
    connect(verify,UserVerify::doctorReady,this,addDoctorInformation);
    //connect(verify,UserVerify::idInformationReady,&appointWindow,AppointmentWindow::displayInformation);
    //connect(verify,UserVerify::doctorPictureReady,&appointWindow,AppointmentWindow::displayPicture);
    connect(verify,UserVerify::doctorPictureReady,this,addDoctorImage);

    ui->doctorTable->clearContents();
    ui->doctorTable->setRowCount(0);
    verify->getDoctorInformation();

    ui->doctorTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->appointWindow = new AppointmentWindow(verify);
}

DoctorWindow::~DoctorWindow()
{
    delete appointWindow;
    emit back2Func();
    delete ui;
}

void DoctorWindow::initDoctorTable()
{
    ui->doctorTable->horizontalHeader()->setFixedHeight(25);
    //设置表头自适应宽度
    ui->doctorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void DoctorWindow::addDoctorInformation(const Doctor &doctor)
{
    doctors.push_back(doctor);
    //插入数据
    int row_count = ui->doctorTable->rowCount(); //获取表单行数
    ui->doctorTable->insertRow(row_count); //插入新行
    ui->doctorTable->setItem(row_count, 0, new QTableWidgetItem(doctor.getName()));
    ui->doctorTable->setItem(row_count, 1, new QTableWidgetItem(doctor.getWorkTime()));
    ui->doctorTable->setItem(row_count, 2, new QTableWidgetItem(doctor.getDiploma()));
    ui->doctorTable->setItem(row_count, 3, new QTableWidgetItem(doctor.getProfession()));

    AppointmentButton *appointmentButton = new AppointmentButton;
    appointmentButton->setText("点击预约");
    appointmentButton->setDoctor(doctor);
    connect(appointmentButton,SIGNAL(clicked()),this,SLOT(displayDoctor()));
    ui->doctorTable->setCellWidget(row_count,4,appointmentButton);

}

void DoctorWindow::on_backBtn_clicked()
{
    emit back2Func();
}

void DoctorWindow::addDoctorImage(const QByteArray &data)
{
    docImages.push_back(new QByteArray(data));
}

void DoctorWindow::displayDoctor()
{
    //在槽函数中可以获取发送信号的这个对象地址
    AppointmentButton *appointmentButton = (AppointmentButton *)this->sender();
    Doctor doctor = appointmentButton->getDoctor();
    verify->getDoctorInformationById(doctor.getIdentify());
    appointWindow->setDoctorId(doctor.getIdentify());
    appointWindow->setUserName(LoginWindow::loginUser);
    appointWindow->show();
}
