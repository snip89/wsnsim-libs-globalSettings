#include "clientrealtimesettings.h"

ClientRealTimeSettings::ClientRealTimeSettings()
{
}

QString ClientRealTimeSettings::ip(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/IP").value<QString>();
}

quint64 ClientRealTimeSettings::port(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/Port").value<quint64>();
}

void ClientRealTimeSettings::setProjectPath(QString client, QString path)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    settings.setValue("RealTime/Clients/" + client + "/ProjectPath", path);
}
