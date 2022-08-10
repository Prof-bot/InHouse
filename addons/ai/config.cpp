#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: AI";
        author = "Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWaypoints.hpp"
#include "CfgModules.hpp"
