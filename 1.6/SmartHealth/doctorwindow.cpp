#include "doctorwindow.h"
#include "ui_doctorwindow.h"
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
}

DoctorWindow::~DoctorWindow()
{
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
    //ui->doctorTable->setItem(line, 4, new QTableWidgetItem();
}

void DoctorWindow::on_backBtn_clicked()
{
    emit back2Func();
}

void DoctorWindow::addDoctorImage(const QByteArray &data)
{
    qDebug() << "size" << docImages.size() << endl;
    docImages.push_back(new QByteArray(data));
}
