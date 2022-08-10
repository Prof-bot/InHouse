#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Zeus";
        author = "Snippers, Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "RscDisplayCurator.hpp"
