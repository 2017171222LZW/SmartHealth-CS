#include "chatwindow.h"
#include "ui_chatwindow.h"
#include "loginwindow.h"
#include "smarthealthprotocol.h"

#include <QChart>
#include <QValueAxis>
#include <QChartView>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QMessageBox>
#include <QDebug>
#include <QSplineSeries>
#include <QScatterSeries>
#include <QDateTime>
#include <QDate>
#include <QTimer>

QT_CHARTS_USE_NAMESPACE

QDateTime ChatWindow::startTime;
QDateTime ChatWindow::endTime;

ChatWindow::ChatWindow(UserVerify *verify, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatWindow)
{
    ui->setupUi(this);
    connect(&tcpSocket,SIGNAL(disconnected()),this,SLOT(handleReplyData()));

    this->verify = verify;
    t = NULL;

    connect(verify, UserVerify::featureDataReady, this, featureDataGet);


    //icon设置
    this->setWindowTitle("Subscribe Doctor");
    this->setWindowIcon(QIcon(":/img/icon.png"));
    //背景的自适应填充图片
    this->setAutoFillBackground(true);
    QPixmap back_icon(":/img/bg07.jpg");

    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(back_icon.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));

    this->setPalette(palette);
    this->centralWidget();
    //固定窗口大小
    this->setFixedSize(this->width() , this->height());

}

ChatWindow::~ChatWindow()
{
    delete ui;
}

void ChatWindow::drawData(QChartView *view, QList<QPointF> list, QString legendTip, QString tip, double miny, double maxy)
{
    QChart *temp = new QChart;
    view->setChart(temp);
    view->setRenderHint(QPainter::Antialiasing);
    temp->legend()->setShowToolTips(true);
    temp->legend()->setToolTip(legendTip);
    temp->setToolTip(tip);

    connect(verify, UserVerify::featureDataReady, this, featureDataGet);

    QValueAxis *tempX = new QValueAxis;
    tempX->setTickCount(7);
    tempX->setGridLineVisible(false);
    tempX->setGridLineColor(Qt::red);
    tempX->setLinePenColor(Qt::red);
    tempX->setRange(0,list.size()+1);

    QValueAxis *tempY = new QValueAxis;
    tempY->setTickCount(15);
    //tempY->setGridLineColor(Qt::blue);
    tempY->setRange(miny,maxy);

    series = new QSplineSeries;
    for(auto p : list){
        *series << p;
    }

    series->setColor(Qt::green);

    scatterSeries = new QScatterSeries;

    scatterSeries->setMarkerSize(10);
    for(auto p : list){
        *scatterSeries << p;
    }

    temp->addSeries(series);
    temp->addSeries(scatterSeries);

#if 1
    temp->addAxis(tempX,Qt::AlignBottom);
    temp->addAxis(tempY,Qt::AlignLeft);
    series->attachAxis(tempX);
    scatterSeries->attachAxis(tempX);
    series->attachAxis(tempY);
    scatterSeries->attachAxis(tempY);
#else
    temp->setAxisX(tempX,series);
    temp->setAxisX(tempX,scatterSeries);
    temp->setAxisY(tempY,series);
    temp->setAxisX(tempY,scatterSeries);
#endif
    qDebug() << "reciv ok" << endl;

}

void ChatWindow::featureDataGet(const QJsonArray &array)
{
    QJsonArray datas = array;
    auto lists = UserVerify::data2QList(datas);
    drawData(ui->bloodGluseWidget,   lists[0], "血糖", "血糖曲线", 2.5, 8);
    drawData(ui->bloodOxygenWidget,  lists[1], "血氧", "血氧曲线", 0.6, 0.8);
    drawData(ui->bloodPresureWidget, lists[2], "血压", "血压曲线", 0, 200);
    drawData(ui->heartRateWidget,    lists[3], "心率", "心率曲线", 40, 110);
    drawData(ui->temperatureWidget,  lists[4], "体温", "体温曲线", 35, 40);
}

void ChatWindow::timeOutSlot()
{
    on_pushButton_clicked();
}


void ChatWindow::on_pushButton_clicked()
{
    QJsonObject object;
    object["function_id"] = GET_PERSON_FEATURE_DATA;
    object["username"] = LoginWindow::loginUser;
    object["startDate"] = ui->startDate->text();
    object["endDate"] = ui->endDate->text();

    startTime = QDateTime::fromString(ui->startDate->text(),"yyyy-MM-dd");
    endTime   = QDateTime::fromString(ui->endDate->text(),"yyyy-MM-dd");

    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();

    verify->getDrawData(SmartHealthProtocol::toSmartHealthProtocolData(data));

//    if(t==NULL){
//        t = new QTimer();
//        connect( t, QTimer::timeout, this, timeOutSlot);
//        //t->start(10000);
//    }

}
