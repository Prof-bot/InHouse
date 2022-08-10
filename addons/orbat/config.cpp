#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: ORBAT";
        author = "Prof";
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

#include "display3DEN.hpp"
