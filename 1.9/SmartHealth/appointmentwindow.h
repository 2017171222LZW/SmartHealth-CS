#ifndef APPOINTMENTWINDOW_H
#define APPOINTMENTWINDOW_H

#include <QMainWindow>
#include "doctor.h"
#include <QDate>
#include <QTcpSocket>
#include "smarthealthprotocol.h"
#include "userverify.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QMessageBox>

namespace Ui {
class AppointmentWindow;
}

class AppointmentWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AppointmentWindow(UserVerify *verify, QWidget *parent = 0);
    ~AppointmentWindow();

    QString getDoctorId() const;
    void setDoctorId(const QString &value);

    QString getUserName() const;
    void setUserName(const QString &value);

public slots:
    void displayInformation(const Doctor &doctor);
    void displayPicture(const QByteArray &data);
    void displayDate(const QDate &date);
    void handleReplyData(void);

private slots:
    void on_commitButton_clicked();

signals:
    void appointRequest(QByteArray data);

private:
    Ui::AppointmentWindow *ui;
    QString doctorId;
    QString userName;
    QTcpSocket tcpSocket;
    UserVerify *verify;
};

#endif // APPOINTMENTWINDOW_H
