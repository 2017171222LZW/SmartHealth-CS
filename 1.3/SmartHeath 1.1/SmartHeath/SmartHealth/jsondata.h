#ifndef JSONDATA_H
#define JSONDATA_H
#include <QJsonObject>
#include <QJsonDocument>
#include "customer.h"


class JsonData
{
public:
    JsonData();
    void addString(const QString &key,const QString &value);
    void addInt(const QString &key,int value);
    void addPicture(const QString &key,const QString &filename);
    void addDoctor(Customer &person);
    QByteArray toByteArrayData(void);

private:
    QJsonObject object;
};

#endif // JSONDATA_H
