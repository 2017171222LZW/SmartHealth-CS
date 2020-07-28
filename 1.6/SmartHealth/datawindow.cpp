#include "datawindow.h"
#include "ui_datawindow.h"
#include "loginwindow.h"
#include <QDate>
#include "smarthealthprotocol.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QDebug>


DataWindow::DataWindow(UserVerify *verify, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataWindow)
{
    ui->setupUi(this);
    this->verify = verify;

    //窗口初始设定
    this->setWindowTitle("Login System");
    this->setWindowIcon(QIcon(":/img/icon.png"));

    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg05.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
    //固定窗口大小
    this->setFixedSize(this->width() , this->height());

    connect(this, this->commitPersonFeature, verify, verify->getPersonFeature);

    connect(verify, verify->replyFeature, this, this->dealReplyFeatureCommit);
}


DataWindow::~DataWindow()
{
    delete ui;
}

void DataWindow::on_backBtn_clicked()
{
    emit back2Func();
}

void DataWindow::cleanWindow()
{
    ui->bloodGluseLineEdit->clear();
    ui->bloodOxygenLineEdit->clear();
    ui->bloodPresureLineEdit->clear();
    ui->temperatureLineEdit->clear();
    ui->heartRateLineEdit->clear();
}

QString DataWindow::getUsername() const
{
    return username;
}

void DataWindow::setUsername(const QString &value)
{
    username = value;
}

void DataWindow::on_commitPushButton_clicked()
{
    QJsonObject object;
    object["function_id"] = PERSON_FEATURE_DATA;
    object["username"] = LoginWindow::loginUser;
    object["blood_gluse"] = ui->bloodGluseLineEdit->text();
    object["blood_oxygen"] = ui->bloodOxygenLineEdit->text();
    object["blood_presure"] = ui->bloodPresureLineEdit->text();
    object["heart_rate"] = ui->heartRateLineEdit->text();
    object["temperature"] = ui->temperatureLineEdit->text();
    object["date"] = QDate::currentDate().toString("yyyy-MM-dd");

    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();

    QByteArray array = SmartHealthProtocol::toSmartHealthProtocolData(data);

    emit commitPersonFeature(array);
}

void DataWindow::dealReplyFeatureCommit(QByteArray data)
{
    QJsonDocument jsonDoc;

    qDebug() << "get reply data: " << endl;
    qDebug() << data << endl;

    jsonDoc = QJsonDocument::fromJson(data);
    if(jsonDoc.isNull()){
        return;
    }

    QJsonObject jsonObject = jsonDoc.object();
    int state      = jsonObject["state"].toInt();
    if(state != 0){
        QMessageBox::warning(NULL,"体征数据","提交体征数据失败",QMessageBox::Ok);
        return ;
    }else{
        QMessageBox::warning(NULL,"体征数据","恭喜您,提交体征数据成功",QMessageBox::Ok);
        emit back2Func();
    }

    return;
}
