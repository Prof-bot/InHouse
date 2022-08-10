#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Marker";
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
#include "CfgMarkerBrushes.hpp"
