#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Teleport";
        author = "Head, Prof";
        url = "";
        units[] = {QGVAR(module),QGVAR(deploy)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModules.hpp"


class CfgWaypoints
{
    class WMI
    {
        displayName = "WMI";
        class Paradrop
        {
            displayName = "Paradrop";
            file = "\x\wmi\addons\teleport\functions\fnc_paradropWaypoint.sqf";
            icon = "\a3\air_f_beta\Parachute_01\Data\UI\map_parachute_01_ca.paa";
            class Attributes
            {
            };
        };
    };
};
