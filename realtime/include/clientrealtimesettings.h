#ifndef CLIENTREALTIMESETTINGS_H
#define CLIENTREALTIMESETTINGS_H

#include <QStringList>

#include "iclientrealtimesettings.h"
#include "statictools.h"

class ClientRealTimeSettings : public IClientRealTimeSettings
{
public:
    ClientRealTimeSettings();

    QString ip(QString client);
    quint64 port(QString client);
    void setProjectPath(QString client, QString path);
};

#endif // CLIENTREALTIMESETTINGS_H
