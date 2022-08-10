#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Respawn";
        author = "Snippers, Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"

#include "defines.hpp"
#include "dialogs.hpp"
