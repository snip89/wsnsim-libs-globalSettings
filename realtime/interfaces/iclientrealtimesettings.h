#ifndef ICLIENTREALTIMESETTINGS_H
#define ICLIENTREALTIMESETTINGS_H

#include <QStringList>

class IClientRealTimeSettings
{
public:
    virtual QString ip(QString client) = 0;
    virtual quint64 port(QString client) = 0;
    virtual void setProjectPath(QString client, QString path) = 0;
};

#endif // ICLIENTREALTIMESETTINGS_H
