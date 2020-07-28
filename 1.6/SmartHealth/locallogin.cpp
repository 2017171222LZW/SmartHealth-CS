#include "locallogin.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>

QByteArray LocalLogin::data = NULL;
QJsonObject LocalLogin::object;
QString LocalLogin::Uname = "UserName";
QString LocalLogin::PassWord = "PassWord";
QString LocalLogin::RemenberPsd = "RemenberPsd";
QString LocalLogin::AutomaticLogin = "AutomaticLogin";

LocalLogin::LocalLogin()
{

}

QJsonObject LocalLogin::getObject()
{
    readLog();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if(doc.isNull()){
        QJsonObject ret;
        return ret;
    }
    object = doc.object();
    QString UserName      = object["UserName"].toString();
    QString password      = object["PassWord"].toString();
    bool RemenberPsd      = object["RemenberPsd"].toBool();
    bool AutomaticLogin   = object["AutomaticLogin"].toBool();
    qDebug() << "Username : " << UserName << endl;
    qDebug() << "password : " << password << endl;
    qDebug() << "RemenberPsd : " << RemenberPsd << endl;
    qDebug() << "AutomaticLogin : " << AutomaticLogin << endl;
    return object;
}

void LocalLogin::set(QString key, QString name)
{
    getObject();
    object[key] = name;
    flush();
}

void LocalLogin::flush()
{
    QFile f(":log/log.txt");
    if(!f.open(QIODevice::WriteOnly|QIODevice::Text)){
        qDebug() << "Cannot open file for writing: "
                      << qPrintable(f.errorString()) << endl;
        return ;
    }
    QTextStream out(&f);
    out << data;
    f.close();
}

QString LocalLogin::get(QString key)
{
    getObject();
    return object[key].toString();
}


QString LocalLogin::readLog()
{
    QFile f(":log/log.txt");
    if(!f.open(QIODevice::ReadOnly | QIODevice::Text)){
        return NULL;
    }
    data = f.readAll();
    QString msg(data);
    qDebug() << msg << endl;
    f.close();
    return msg;
}
