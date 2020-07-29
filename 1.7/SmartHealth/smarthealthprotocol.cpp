#include "smarthealthprotocol.h"

SmartHealthProtocol::SmartHealthProtocol()
{

}

QByteArray SmartHealthProtocol::toSmartHealthProtocolData(const QByteArray &data)
{
    QByteArray protocolData;

    quint32 dataLen = data.size();
    protocolData.append(QByteArray((char *)&dataLen,sizeof(quint32)));
    protocolData.append(data);

    return protocolData;
}
