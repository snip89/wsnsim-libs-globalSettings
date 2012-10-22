#include "globalsettings.h"

extern "C" MY_EXPORT HostRealTimeSettings *getHostRealTimeSettings()
{
    return new HostRealTimeSettings();
}

extern "C" MY_EXPORT ClientRealTimeSettings* getClientRealTimeSettings()
{
    return new ClientRealTimeSettings();
}
