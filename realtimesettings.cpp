#include "realtimesettings.h"

RealTimeSettings::RealTimeSettings()
{
}

QStringList RealTimeSettings::clients()
{
    QSettings settings("wsnsim", "global");

    if(!settings.contains("RealTime/ClientsList"))
        settings.setValue("RealTime/ClientsList", QStringList());

    return settings.value("RealTime/ClientsList").value<QStringList>();
}

void RealTimeSettings::setClientConnectionInfo(QString client, QString ip, quint64 port)
{
    validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    settings.setValue("RealTime/Clients/" + client + "/IP", ip);
    settings.setValue("RealTime/Clients/" + client + "/Port", port);
}

QString RealTimeSettings::projectPath(QString client)
{
    validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/ProjectPath").value<QString>();
}

QString RealTimeSettings::ip(QString client)
{
    validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/IP").value<QString>();
}

quint64 RealTimeSettings::port(QString client)
{
    validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    return settings.value("RealTime/Clients/" + client + "/Port").value<quint64>();
}

void RealTimeSettings::setProjectPath(QString client, QString path)
{
    validateClientSettings(client);

    QSettings settings("wsnsim", "global");

    settings.setValue("RealTime/Clients/" + client + "/ProjectPath", path);
}

void RealTimeSettings::validateClientSettings(QString client)
{
    QSettings settings("wsnsim", "global");

    QStringList clients;

    if(!settings.contains("RealTime/ClientsList"))
    {
        clients.append(client);
        settings.setValue("RealTime/ClientsList", clients);
    }

    clients = settings.value("RealTime/ClientsList").value<QStringList>();

    if(!clients.contains(client))
    {
        clients.append(client);
        settings.setValue("RealTime/ClientsList", clients);
    }

    if(!settings.contains("RealTime/Clients/" + client + "/IP"))
        settings.setValue("RealTime/Clients/" + client + "/IP", "127.0.0.1");

    if(!settings.contains("RealTime/Clients/" + client + "/Port"))
        settings.setValue("RealTime/Clients/" + client + "/Port", 10000);

    if(!settings.contains("RealTime/Clients/" + client + "/ProjectPath"))
        settings.setValue("RealTime/Clients/" + client + "/ProjectPath", "Null");
}
