#ifndef USERVERIFY_H
#define USERVERIFY_H

#include <QObject>
#include <QString>
#include <QTcpSocket>
#include "customer.h"

#define REGISTER_FUNCTION_ID        0
#define LOGIN_FUNCTION_ID           1
#define MODIFYPSD_FUNCTION_ID       2
#define ENABLE_CAHNGE_ID            3
#define DOC_REGISTER_FUNCTION_ID    4

class UserVerify : public QObject
{
    Q_OBJECT
public:
    explicit UserVerify(QObject *parent = 0);
    ~UserVerify();
    void dealWithReply(int function_id, int state);
    void tcpConnect();

    void registerDoctor(const QByteArray &data);

signals:
    void promised2Login();
    void dotpromised2Login();
    void registerSeccuss();
    void registerFail();
    void changePSDSeccuss();
    void changePSDFail();
    void AfterchangePSD();
    void CantchangePSD();

public slots:
    void readSocketData();
    void verifyLogin(const QString uname, const QString passwd);
    void verifyRegister(const Customer *person);
    void verigyUserChangePasswd(QString id, QString telephone);
    void ChangeUserPasswd(QString id, QString telephone, QString passwd);

private:
    QTcpSocket tcpsocket;
    QByteArray data;

};

#endif // USERVERIFY_H
