#include "userverify.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>
#include "smarthealthprotocol.h"

const QString destIPAddr = "192.168.0.7";

UserVerify::UserVerify(QObject *parent) : QObject(parent)
{
    data = NULL;
    connect(&tcpsocket, QTcpSocket::readyRead, this, readSocketData);
}

UserVerify::~UserVerify()
{
    tcpsocket.close();
}

/**
 * @功能: 处理回执信息，完成对应的信号发送
 * @解释:
 */
void UserVerify::dealWithReply(int function_id, int state)
{
    switch(function_id){
        case LOGIN_FUNCTION_ID:{//处理登录
            if(state == 0)
                emit promised2Login();
            else{
                emit dotpromised2Login();
                tcpsocket.close();
            }
            break;
        }
        case REGISTER_FUNCTION_ID:{//处理用户注册
            if(state == 0){
                emit registerSeccuss();
            }else{
                emit registerFail();
                tcpsocket.close();
            }
            break;
        }
        case MODIFYPSD_FUNCTION_ID:{//处理修改密码前的验证
            if(state == 0){
                emit changePSDSeccuss();
            }else{
                emit changePSDFail();
                tcpsocket.close();
            }
            break;
        }
        case ENABLE_CAHNGE_ID:{//修改密码后
            if(state == 0){
                emit AfterchangePSD();
            }else{
                emit CantchangePSD();
                tcpsocket.close();
            }
            break;
           }
        case DOC_REGISTER_FUNCTION_ID:{//处理医生注册
            if(state == 0){
                emit registerSeccuss();
            }else{
                emit registerFail();
                tcpsocket.close();
            }
            break;
        }
    }
}

void UserVerify::tcpConnect()
{
    if(tcpsocket.state() == QTcpSocket::UnconnectedState){
        tcpsocket.connectToHost(destIPAddr,8888);
    }
}

void UserVerify::registerDoctor(const QByteArray &data)
{

    QByteArray msg = SmartHealthProtocol::toSmartHealthProtocolData(data);
    tcpConnect();
    tcpsocket.write(msg);
}

/**
 * @功能: 从套接字中读取数据
 * @解释:
 */
void UserVerify::readSocketData()
{
    data = tcpsocket.readAll();
    qDebug() << data << endl;
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if(doc.isNull()){
        emit dotpromised2Login();
        return ;
    }
    QJsonObject object = doc.object();
    int function_id = object["function_id"].toInt();
    int state       = object["state"].toInt();

    dealWithReply(function_id, state);
}


/**
 * @功能: 验证是否为合法登录用户
 * @解释:
 */
void UserVerify::verifyLogin(const QString uname, const QString passwd)
{
    QJsonObject user;
    user["function_id"] = LOGIN_FUNCTION_ID;
    user["username"]    = uname;
    user["password"]    = passwd;

    QJsonDocument json_Doc(user);
    QByteArray data = json_Doc.toJson();

    qDebug() << data << endl;

    tcpConnect();

    QByteArray msg = SmartHealthProtocol::toSmartHealthProtocolData(data);

    tcpsocket.write(msg);
}

/**
 * @功能: 验证能否注册为合法用户
 * @解释:
 */
void UserVerify::verifyRegister(const Customer *person)
{
    QJsonObject user;
    user["function_id"] = REGISTER_FUNCTION_ID;
    user["username"]    = person->getUname();
    user["password"]    = person->getPasswd();
    user["name"]        = person->getRname();
    user["id"]          = person->getIdentify();
    user["telphone"]    = person->getTelephone();

    QJsonDocument json_Doc(user);
    QByteArray data = json_Doc.toJson();

    tcpConnect();

    tcpsocket.write(data);
}

/**
 * @功能: 修改密码前的验证
 * @解释:
 */
void UserVerify::verigyUserChangePasswd(QString id, QString telephone)
{
    QJsonObject user;
    user["function_id"] = MODIFYPSD_FUNCTION_ID;
    user["id"]          = id;
    user["telphone"]    = telephone;
    user["password"]    = "";

    QJsonDocument json_Doc(user);
    QByteArray data = json_Doc.toJson();

    tcpConnect();

    tcpsocket.write(data);
}

/**
 * @功能: 执行修改密码
 * @解释:
 */
void UserVerify::ChangeUserPasswd(QString id, QString telephone, QString passwd)
{
    QJsonObject user;
    user["function_id"] = ENABLE_CAHNGE_ID;
    user["id"]          = id;
    user["telphone"]    = telephone;
    user["password"]    = passwd;

    QJsonDocument json_Doc(user);
    QByteArray data = json_Doc.toJson();

    tcpConnect();

    tcpsocket.write(data);
}

