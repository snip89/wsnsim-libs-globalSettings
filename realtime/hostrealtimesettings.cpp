#include "hostrealtimesettings.h"

HostRealTimeSettings::HostRealTimeSettings()
{
}

QStringList HostRealTimeSettings::clients()
{
    QSettings settings("wsnsim", "global");

    if(!settings.contains("RealTime/ClientsList"))
        settings.setValue("RealTime/ClientsList", QStringList());

    return settings.value("RealTime/ClientsList").value<QStringList>();
}

void HostRealTimeSettings::setClientConnectionInfo(QString client, QString ip, quint64 port)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    settings.setValue("RealTime/Clients/" + client + "/IP", ip);
    settings.setValue("RealTime/Clients/" + client + "/Port", port);
}

QString HostRealTimeSettings::projectPath(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/ProjectPath").value<QString>();
}

quint64 HostRealTimeSettings::defaultPort(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/Defaults/Port").value<quint64>();
}

QString HostRealTimeSettings::defaultIp(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/Defaults/IP").value<QString>();
}

QString HostRealTimeSettings::ip(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/IP").value<QString>();
}

quint64 HostRealTimeSettings::port(QString client)
{
    StaticTools::validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/Port").value<quint64>();
}
