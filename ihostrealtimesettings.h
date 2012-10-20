#ifndef IHOSTREALTIMESETTINGS_H
#define IHOSTREALTIMESETTINGS_H

#include <QString>
#include <QStringList>

class IHostRealTimeSettings
{
public:
    virtual QStringList clients() = 0;
    virtual void setClientConnectionInfo(QString client, QString ip, quint64 port) = 0;
    virtual QString projectPath(QString client) = 0;
};

#endif // IHOSTREALTIMESETTINGS_H
