#ifndef REALTIMESETTINGS_H
#define REALTIMESETTINGS_H

#include "ihostrealtimesettings.h"
#include "iclientrealtimesettings.h"

#include <QSettings>
#include <QStringList>
#include <QString>

class RealTimeSettings : public IHostRealTimeSettings, public IClientRealTimeSettings
{
public:
    RealTimeSettings();

    /*virtual*/ QStringList clients();
    /*virtual*/ void setClientConnectionInfo(QString client, QString ip, quint64 port);
    /*virtual*/ QString projectPath(QString client);
    /*virtual*/ QString ip(QString client);
    /*virtual*/ quint64 port(QString client);
    /*virtual*/ void setProjectPath(QString client, QString path);

private:
    void validateClientSettings(QString client);
};

#endif // REALTIMESETTINGS_H
