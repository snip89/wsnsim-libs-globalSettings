#ifndef HOSTREALTIMESETTINGS_H
#define HOSTREALTIMESETTINGS_H

#include <QStringList>

#include "ihostrealtimesettings.h"
#include "statictools.h"

class HostRealTimeSettings : public IHostRealTimeSettings
{
public:
    HostRealTimeSettings();

    QStringList clients();
    void setClientConnectionInfo(QString client, QString ip, quint64 port);
    QString projectPath(QString client);
    quint64 defaultPort(QString client);
    QString defaultIp(QString client);
    QString ip(QString client);
    quint64 port(QString client);
};

#endif // HOSTREALTIMESETTINGS_H
