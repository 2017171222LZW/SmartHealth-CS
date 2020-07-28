#ifndef LOCALLOGIN_H
#define LOCALLOGIN_H

#include <QObject>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>


class LocalLogin
{
private:
    LocalLogin();

public :
    static QJsonObject getObject();
    static void set(QString key, QString name);
    static QString get(QString key);
    static void flush();


private:
    static QString readLog();

public:
    static QString Uname;
    static QString PassWord;
    static QString RemenberPsd;
    static QString AutomaticLogin;
private:
    static QByteArray data;
    static QJsonObject object;

};

#endif // LOCALLOGIN_H
