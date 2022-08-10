#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Spectator";
        author = "Head, Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

class CfgRespawnTemplates
{
    class WMI_Spectator
    {
        displayName = "WMI Spectator";
        onPlayerRespawn  = QFUNC(init);
        onPlayerKilled = "";
    };
};
#include "autotest.hpp"
#include "CfgEventHandlers.hpp"
#include "display3DEN.hpp"
#include "dialog.hpp"
#include "CfgVehicles.hpp"
#include "tags.hpp"
