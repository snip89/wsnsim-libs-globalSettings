#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include "realtimesettings.h"

#ifdef Q_WS_WIN
#define MY_EXPORT __declspec(dllexport)
#else
#define MY_EXPORT
#endif

extern "C" MY_EXPORT RealTimeSettings getRealTimeSettings();

#endif // GLOBALSETTINGS_H
