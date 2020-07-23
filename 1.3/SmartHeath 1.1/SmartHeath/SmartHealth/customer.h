#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>
#include <QString>
#include <doctor.h>

class Customer : public QObject
{
    Q_OBJECT
private:
    explicit Customer(QObject *parent = 0);
public:
    bool check();
    bool checkDocMsg();

    static Customer* createCustomer();
    Customer* setUsername(const QString uname);
    Customer* setPasswrod(const QString passwd);
    Customer* setRealName(const QString rname);
    Customer* setIdentify(const QString Identify);
    Customer* setTelephone(const QString Telephone);

    QString getUname() const;
    void setUname(const QString &value);

    QString getPasswd() const;
    void setPasswd(const QString &value);

    QString getRname() const;
    void setRname(const QString &value);

    QString getIdentify() const;

    QString getTelephone() const;

    Doctor *getDoctorMsg();

private:
    QString uname;
    QString passwd;
    QString rname;
    QString Identify;
    QString Telephone;
    int completed;
    Doctor doctorMsg;

signals:

public slots:
};

#endif // CUSTOMER_H
