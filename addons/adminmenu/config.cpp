#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "WMI: Admin Menu";
        author = "Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class Prof {
        uid = "76561198008653034";
    };
        class Acid {
        uid = "76561198025248647";
    };
        class Premier {
        uid = "7651197993721675";
    };
        class Yasaric {
        uid = "76561198071331116";
    };
};

#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"

#include "gui\adminMenu.hpp"
