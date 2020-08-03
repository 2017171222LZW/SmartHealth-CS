#include "userverify.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QDebug>
#include <QList>
#include <QPointF>
#include <QDateTime>
#include "smarthealthprotocol.h"
#include "chatwindow.h"
#include <QSet>
#include <QDebug>
#include <QJsonParseError>

const QString destIPAddr = "39.101.186.152";
int UserVerify::port = 8888;

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
void UserVerify::dealWithReply(int function_id, int state, QJsonObject object)
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
        case DOC_INMAFORMATION_GET:{//医生信息拉取
            displayDoctorInformation(object["doctor_info"].toArray());
            break;
        }
        case DOC_INMAFORMATION_ID_GET:{//医生信息列表拉取
            analysisDoctorInformation(object);
            break;
        }
        case APPOINTMENT_DOCTOR_DATE:{
            emit replyAppointOK();
        }
        case PERSON_FEATURE_DATA:{//提交特征采集
            emit replyFeature(data);
            break;
        }
        case GET_PERSON_FEATURE_DATA:{
            //auto respond = data2QList(object["feature_data"].toArray());
            emit featureDataReady(object["feature_data"].toArray());break;
        }
        case LOGIN_DOCTOR:{//医生登录
            if(state == 0){
                //emit promised2Login();
                emit promised2Login_doc();
                qDebug() << "doc ok" << endl;
            }
            else{
                emit dotpromised2Login();
                tcpsocket.close();
            }
            break;
        }
    }
    qDebug() << "deal reply over" << endl;
}


/**
 * @功能: 从套接字中读取数据
 * @解释:
 */
void UserVerify::readSocketData()
{
    data = tcpsocket.readAll();
    qDebug() << "data : " << data << endl;
    QJsonParseError *err = NULL;
    QJsonDocument doc = QJsonDocument::fromJson(data,err);
    if(doc.isNull()){
        qDebug() << "doc 为空" << err->errorString() << endl;
        emit dotpromised2Login();
        return ;
    }
    QJsonObject object = doc.object();
    int function_id = object["function_id"].toInt();
    int state       = object["state"].toInt();
    qDebug() << "function_id: " << function_id << endl;
    qDebug() << "state      : " << state << endl;
    dealWithReply(function_id, state, object);
}

/**
 * @功能: 套接字连接
 * @解释:
 */
void UserVerify::tcpConnect()
{
    if(tcpsocket.state() == QTcpSocket::UnconnectedState){
        tcpsocket.connectToHost(destIPAddr,port);
    }
    qDebug() << "connect to server          <ok>";
}

/**
 * @功能: 注册医生
 * @解释:
 */
void UserVerify::registerDoctor(const QByteArray &data)
{
    QByteArray msg = SmartHealthProtocol::toSmartHealthProtocolData(data);
    tcpConnect();
    tcpsocket.write(msg);
}

/**
 * @功能: 注册用户
 * @解释:
 */
void UserVerify::registerUser(const QByteArray &data)
{
    QByteArray msg = SmartHealthProtocol::toSmartHealthProtocolData(data);
    tcpConnect();
    tcpsocket.write(msg);
}

/**
 * @功能: 单条医生信息获取
 * @解释:
 */
void UserVerify::doctorImformationGet()
{
    QJsonObject object;
    object["function_id"] = DOC_INMAFORMATION_GET;

    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();

    tcpConnect();

    tcpsocket.write(SmartHealthProtocol::toSmartHealthProtocolData(data));

    return;
}

/**
 * @功能: 通过医生ID来获取信息
 * @解释:
 */
void UserVerify::getDoctorInformationById(const QString &id)
{
    QJsonObject object;
    object["function_id"] = DOC_INMAFORMATION_ID_GET;
    object["doctor_id"]   = id;

    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();

    tcpConnect();

    tcpsocket.write(SmartHealthProtocol::toSmartHealthProtocolData(data));

    return;
}

void UserVerify::getDoctorInformation()
{
    QJsonObject object;
    object["function_id"] = DOC_INMAFORMATION_GET;

    QJsonDocument jsonDoc(object);
    QByteArray data = jsonDoc.toJson();

    tcpConnect();

    tcpsocket.write(SmartHealthProtocol::toSmartHealthProtocolData(data));

    return;
}

/**
 * @功能: 解析医生列表信息
 * @解释:
 */
void UserVerify::analysisDoctorInformation(const QJsonObject &object)
{
    qDebug() << "analysis ..." << endl;
    QJsonArray doctorInfo = object["doctor_info"].toArray();
    QJsonObject memberObject = doctorInfo[0].toObject();
    Doctor doctor;
    doctor.setName(memberObject["name"].toString());
    doctor.setDiploma(memberObject["education"].toString());
    doctor.setProfession(memberObject["major"].toString());
    doctor.setBriefIntroduce(memberObject["brief_introduce"].toString());
    doctor.setWorkTime(memberObject["work_time"].toString());
    emit idInformationReady(doctor);

    QString base64Text = object["picture"].toString();
    QByteArray pictureData = QByteArray::fromBase64(base64Text.toLocal8Bit());
    qDebug() << "doctor image: " << pictureData << endl;
    emit doctorPictureReady(pictureData);

    return;
}

void UserVerify::displayDoctorInformation(const QJsonArray &doctorArray)
{
    for(int i = 0;i < doctorArray.size();i ++){
        QJsonObject object = doctorArray[i].toObject();
        Customer doctor;
        doctor.getDoctorMsg()->setName(object["name"].toString());
        doctor.setIdentify(object["id"].toString());
        doctor.getDoctorMsg()->setWorkTime(object["work_time"].toString()+"年");
        doctor.getDoctorMsg()->setDiploma(object["education"].toString());
        doctor.getDoctorMsg()->setProfession(object["major"].toString());
        doctor.getDoctorMsg()->setBriefIntroduce(object["brief_introduce"].toString());
        doctor.getDoctorMsg()->setIdentify(object["id"].toString());
        emit doctorReady(*doctor.getDoctorMsg());
    }
}

void UserVerify::getDrawData(const QByteArray drawData)
{
    tcpConnect();

    tcpsocket.write(drawData);
}

/**
 * @功能: 将体征数据转换为数据对列表，传送去绘图
 * @解释:
 */
QList<QList<QPointF>> UserVerify::data2QList(QJsonArray &array)
{
    QList<QList<QPointF>> respond;
    QList<QPointF> BloodGluse;
    QList<QPointF> BloodOxygen;
    QList<QPointF> BloodPresure;
    QList<QPointF> HeartRate;
    QList<QPointF> Temperature;
    QVector<QJsonObject> arr(array.size());
    for(int i = 0;i < array.size();i ++){
        QJsonObject object = array[i].toObject();
        int distance = ChatWindow::startTime.daysTo(QDateTime::fromString(object["Date"].toString(), "yyyy-MM-dd"));
        arr[distance] = object;
    }
    for(int i = 0;i < arr.size();i ++){
        QJsonObject object = arr[i];
        int distance = i;
        if(object["BloodGluse"].toString().toDouble() == 0) continue;
        BloodGluse.append(QPointF(distance, object["BloodGluse"].toString().toDouble()));
        BloodOxygen.append(QPointF(distance, object["BloodOxygen"].toString().toDouble()));
        BloodPresure.append(QPointF(distance, object["BloodPresure"].toString().toDouble()));
        HeartRate.append(QPointF(distance, object["HeartRate"].toString().toDouble()));
        Temperature.append(QPointF(distance, object["Temperature"].toString().toDouble()));
    }
    respond.append(BloodGluse);
    respond.append(BloodOxygen);
    respond.append(BloodPresure);
    respond.append(HeartRate);
    respond.append(Temperature);

    return respond;
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

void UserVerify::verifyloginDoc(const QString uname, const QString passwd)
{
    QJsonObject user;
    user["function_id"] = LOGIN_DOCTOR;
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

    tcpsocket.write(SmartHealthProtocol::toSmartHealthProtocolData(data));

    qDebug() << "data package send          <ok>";
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

    tcpsocket.write(SmartHealthProtocol::toSmartHealthProtocolData(data));
}

void UserVerify::getPersonFeature(QByteArray data)
{
    tcpConnect();

    tcpsocket.write(data);
}

void UserVerify::getAppointRequest(QByteArray data)
{
    tcpConnect();

    tcpsocket.write(data);
}

