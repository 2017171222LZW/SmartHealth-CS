#ifndef SMARTHEALTHPROTOCOL_H
#define SMARTHEALTHPROTOCOL_H


#include <QString>
#include <QByteArray>

/*数据长度(4byte)|内容*/
class SmartHealthProtocol
{
public:
    SmartHealthProtocol();
    static QByteArray toSmartHealthProtocolData(const QByteArray &data);
};

#endif // SMARTHEALTHPROTOCOL_H
