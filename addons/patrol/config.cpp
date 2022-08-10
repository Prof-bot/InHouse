#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Patrol";
        author = "Head, Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "display3DEN.hpp"
#include "display3DENEditbox.hpp"
