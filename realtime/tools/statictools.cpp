#include "statictools.h"

void StaticTools::validateClientSettings(QString client)
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

    if(!settings.contains("RealTime/Clients/" + client + "/Defaults/IP"))
        settings.setValue("RealTime/Clients/" + client + "/Defaults/IP", "127.0.0.1");

    if(!settings.contains("RealTime/Clients/" + client + "/Defaults/Port"))
        settings.setValue("RealTime/Clients/" + client + "/Defaults/Port", 10000);
}
