#include "customer.h"

Customer::Customer(QObject *parent) : QObject(parent)
{
    completed = 0;
}

Customer *Customer::createCustomer()
{
    Customer *newCustomer = new Customer();
    return newCustomer;
}

Customer *Customer::setUsername(const QString uname)
{
    this->uname = uname;
    return this;
}

Customer *Customer::setPasswrod(const QString passwd)
{
    this->passwd = passwd;
    return this;
}

Customer *Customer::setRealName(const QString rname)
{
    this->rname = rname;
    return this;
}

Customer *Customer::setIdentify(const QString Identify)
{
    this->Identify = Identify;
    return this;
}

Customer *Customer::setTelephone(const QString Telephone)
{
    this->Telephone = Telephone;
    return this;
}

QString Customer::getUname() const
{
    return uname;
}

void Customer::setUname(const QString &value)
{
    uname = value;
}

QString Customer::getPasswd() const
{
    return passwd;
}

void Customer::setPasswd(const QString &value)
{
    passwd = value;
}

QString Customer::getRname() const
{
    return rname;
}

void Customer::setRname(const QString &value)
{
    rname = value;
}

QString Customer::getIdentify() const
{
    return Identify;
}

QString Customer::getTelephone() const
{
    return Telephone;
}

Doctor* Customer::getDoctorMsg()
{
    return &doctorMsg;
}

bool Customer::check()
{
    return uname!=NULL && passwd!=NULL && rname!=NULL && Identify!=NULL && Telephone!=NULL;
}

bool Customer::checkDocMsg()
{
    return doctorMsg.getDiploma()!=NULL && doctorMsg.getProfession()!=NULL && doctorMsg.getWorkTime()!=NULL;
}
