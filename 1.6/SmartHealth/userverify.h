#ifndef USERVERIFY_H
#define USERVERIFY_H

#include <QObject>
#include <QString>
#include <QTcpSocket>
#include "customer.h"
#include "doctor.h"

#define REGISTER_FUNCTION_ID        0
#define LOGIN_FUNCTION_ID           1
#define MODIFYPSD_FUNCTION_ID       2
#define ENABLE_CAHNGE_ID            3
#define DOC_REGISTER_FUNCTION_ID    4
#define DOC_INMAFORMATION_GET       5
#define DOC_INMAFORMATION_ID_GET    6

#define PERSON_FEATURE_DATA         8

class UserVerify : public QObject
{
    Q_OBJECT
public:
    explicit UserVerify(QObject *parent = 0);
    ~UserVerify();
    void dealWithReply(int function_id, int state, QJsonObject object);
    void tcpConnect();

    void registerDoctor(const QByteArray &data);
    void registerUser(const QByteArray &data);
    void doctorImformationGet();
    void getDoctorInformationById(const QString &id);
    void getDoctorInformation();
    void analysisDoctorInformation(const QJsonObject &object);
    void displayDoctorInformation(const QJsonArray &doctorArray);

signals:
    void promised2Login();
    void dotpromised2Login();
    void registerSeccuss();
    void registerFail();
    void changePSDSeccuss();
    void changePSDFail();
    void AfterchangePSD();
    void CantchangePSD();
    void idInformationReady(const Doctor &doctor);
    void doctorPictureReady(const QByteArray pictureData);
    void doctorReady(const Doctor &doctor);
    void replyFeature(QByteArray data);

public slots:
    void readSocketData();
    void verifyLogin(const QString uname, const QString passwd);
    void verifyRegister(const Customer *person);
    void verigyUserChangePasswd(QString id, QString telephone);
    void ChangeUserPasswd(QString id, QString telephone, QString passwd);
    void getPersonFeature(QByteArray data);

private:
    QTcpSocket tcpsocket;
    QByteArray data;

};

#endif // USERVERIFY_H
