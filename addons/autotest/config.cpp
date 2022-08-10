#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Autotest";
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
#include "Cfg3DEN.hpp"
#include "display3DEN.hpp"
#include "autotest.hpp"
