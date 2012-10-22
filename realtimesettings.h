#ifndef REALTIMESETTINGS_H
#define REALTIMESETTINGS_H

#include <QSettings>
#include <QStringList>
#include <QString>
#include <QCoreApplication>

#include "irealtimesettings.h"

class RealTimeSettings : public IRealTimeSettings
{
public:
    RealTimeSettings();

    QStringList clients();
    void setClientConnectionInfo(QString client, QString ip, quint64 port);
    QString projectPath(QString client);
    QString ip(QString client);
    quint64 port(QString client);
    void setProjectPath(QString client, QString path);

private:
    void validateClientSettings(QString client);
};

#endif // REALTIMESETTINGS_H
