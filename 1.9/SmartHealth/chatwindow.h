#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QChartView>
#include <QSplineSeries>
#include <QScatterSeries>
#include <userverify.h>
#include <QTimer>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class ChatWindow;
}

class ChatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatWindow(UserVerify *verify, QWidget *parent = 0);
    ~ChatWindow();
    static QDateTime startTime;
    static QDateTime endTime;

    void drawData(QChartView* view, QList<QPointF> list, QString legendTip, QString tip,double miny=0, double maxy=100);

private slots:
    void on_pushButton_clicked();
    void featureDataGet(const QJsonArray &array);
    void timeOutSlot();

private:
    Ui::ChatWindow *ui;
    QTcpSocket tcpSocket;
    QSplineSeries *series;
    QScatterSeries *scatterSeries;
    UserVerify *verify;
    QTimer *t;

};

#endif // CHATWINDOW_H
