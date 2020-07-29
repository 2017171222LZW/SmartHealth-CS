#include "appointmentwindow.h"
#include "ui_appointmentwindow.h"
#include <QMessageBox>

AppointmentWindow::AppointmentWindow(UserVerify *verify, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppointmentWindow)
{
    ui->setupUi(this);
    connect(ui->calendarWidget,SIGNAL(clicked(QDate)),this,SLOT(displayDate(QDate)));
    connect(&tcpSocket,SIGNAL(disconnected()),this,SLOT(handleReplyData()));

    this->verify = verify;
    connect(this, appointRequest, verify, verify->getAppointRequest);
}

AppointmentWindow::~AppointmentWindow()
{
    delete ui;
}

void AppointmentWindow::displayInformation(const Doctor &doctor)
{
    ui->nameLabel->setText("姓名 : " + doctor.getName());
    ui->majorLabel->setText("专业 : " + doctor.getProfession());
    ui->workTime->setText("从业时间 : " + doctor.getWorkTime());
    ui->briefIntroduceTextEdit->insertPlainText(doctor.getBriefIntroduce());

    return;
}

void AppointmentWindow::displayPicture(const QByteArray &data)
{
    ui->widget->updatePicture(data);
}


void AppointmentWindow::displayDate(const QDate &date)
{
    ui->dateLabel->clear();
    QString appointmentTime = date.toString("yyyy-MM-dd");
    QDate currentDate = QDate::currentDate();
    QString currentTime = currentDate.toString("yyyy-MM-dd");
    if(appointmentTime < currentTime){
       QMessageBox::warning(NULL,"预约日期","你不能预约过去的日期",QMessageBox::Ok);
       return;
    }

    ui->dateLabel->setText(appointmentTime);
}

void AppointmentWindow::handleReplyData()
{
    QByteArray data = tcpSocket.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
    if(jsonDoc.isNull()){
        return;
    }

    QString message;
    QJsonObject jsonObject = jsonDoc.object();
    int state      = jsonObject["state"].toInt();
    int peoples    = jsonObject["appointment_peoples"].toInt();
    if(state == 1){
       message = QString("你已经预约过了指定的日期,当前预约人数 %1").arg(peoples);
    }else if(state == 2){
       message = QString("该医生已经指定日期已经被预约满，请指定其他日期预约,当前预约人数 %1").arg(peoples);
    }else if(state == 0){
       message = QString("恭喜您，预约成功,当前预约人数 %1").arg(peoples + 1);
    }

    QMessageBox::warning(NULL,"预约",message,QMessageBox::Ok);
    return;
}

QString AppointmentWindow::getUserName() const
{
    return userName;
}

void AppointmentWindow::setUserName(const QString &value)
{
    userName = value;
}

QString AppointmentWindow::getDoctorId() const
{
    return doctorId;
}

void AppointmentWindow::setDoctorId(const QString &value)
{
    doctorId = value;
}

//10:20结束
void AppointmentWindow::on_commitButton_clicked()
{
    if(ui->dateLabel->text().isEmpty()){
        QMessageBox::warning(NULL,"预约日期","请先选择预约日期",QMessageBox::Ok);
        return;
    }

    QJsonObject object;
    object["function_id"] = APPOINTMENT_DOCTOR_DATE;
    object["doctor_id"]   = doctorId;
    object["username"] = userName;
    object["date"] = ui->dateLabel->text();

    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();

    emit appointRequest(SmartHealthProtocol::toSmartHealthProtocolData(data));
}
