#include "globalsettings.h"

extern "C" MY_EXPORT RealTimeSettings *getRealTimeSettings()
{
    return new RealTimeSettings();
}
