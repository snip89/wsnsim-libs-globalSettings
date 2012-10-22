#ifndef IHOSTREALTIMESETTINGS_H
#define IHOSTREALTIMESETTINGS_H

#include <QStringList>

class IHostRealTimeSettings
{
public:
    virtual QStringList clients() = 0;
    virtual void setClientConnectionInfo(QString client, QString ip, quint64 port) = 0;
    virtual QString projectPath(QString client) = 0;
    virtual quint64 defaultPort(QString client) = 0;
    virtual QString defaultIp(QString client) = 0;
    virtual QString ip(QString client) = 0;
    virtual quint64 port(QString client) = 0;
};

#endif // IHOSTREALTIMESETTINGS_H
