#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include "hostrealtimesettings.h"
#include "clientrealtimesettings.h"

#ifdef Q_WS_WIN
#define MY_EXPORT __declspec(dllexport)
#else
#define MY_EXPORT
#endif

extern "C" MY_EXPORT HostRealTimeSettings* getHostRealTimeSettings();
extern "C" MY_EXPORT ClientRealTimeSettings* getClientRealTimeSettings();

#endif // GLOBALSETTINGS_H
