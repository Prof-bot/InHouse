#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Chat commands";
        author = "Freddo, Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventhandlers.hpp"
