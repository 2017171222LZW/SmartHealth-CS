#include "jsondata.h"
#include <QFile>
#include <QDebug>

JsonData::JsonData()
{

}
void JsonData::addString(const QString &key, const QString &value)
{
    object[key] = value;
}

void JsonData::addInt(const QString &key, int value)
{
    object[key] = value;
}

void JsonData::addPicture(const QString &key, const QString &filename)
{
    QFile file(filename);
    bool ok = file.open(QFile::ReadOnly);
    if(!ok){
        qDebug() << "Fail to open file " << filename << " : " << file.errorString();
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QByteArray base64Data = data.toBase64();
    object[key] = QString(base64Data);

    return;
}

void JsonData::addDoctor(Customer &person)
{
    addString("username", person.getUname());
    addString("password", person.getPasswd());
    addString("name"    , person.getRname());
    addString("id"      , person.getIdentify());
    addString("telphone", person.getTelephone());
    addString("major"   , person.getDoctorMsg()->getProfession());
    addString("education", person.getDoctorMsg()->getDiploma());
    addString("briefIntroduce", "");
    addString("workTime", person.getDoctorMsg()->getWorkTime());
    addPicture("picture" , person.getDoctorMsg()->getImage());
}

void JsonData::addPerson(Customer &person)
{
    addString("username", person.getUname());
    addString("password", person.getPasswd());
    addString("name"    , person.getRname());
    addString("id"      , person.getIdentify());
    addString("telphone", person.getTelephone());
}

QByteArray JsonData::toByteArrayData()
{
    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();
    return data;
}
