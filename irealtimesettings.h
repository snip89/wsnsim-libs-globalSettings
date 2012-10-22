#ifndef IREALTIMESETTINGS_H
#define IREALTIMESETTINGS_H

#include <QStringList>

class IRealTimeSettings
{
public:
    virtual QStringList clients() = 0;
    virtual void setClientConnectionInfo(QString client, QString ip, quint64 port) = 0;
    virtual QString projectPath(QString client) = 0;
    virtual QString ip(QString client) = 0;
    virtual quint64 port(QString client) = 0;
    virtual void setProjectPath(QString client, QString path) = 0;
};

#endif // IREALTIMESETTINGS_H
