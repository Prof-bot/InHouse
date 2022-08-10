#include "script_component.hpp"
#include "\a3\3den\UI\macros.inc"
#include "\a3\3DEN\UI\macroexecs.inc"
#include "\a3\ui_f\hpp\defineCommon.inc"

class CfgPatches
{
    class ADDON
    {
        name = "WMI: Assign Gear";
        author = "Prof";
        url = "";
        units[] = {QGVAR(aiGearModule)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};
#include "AIGear.hpp"
#include "UI\gui.hpp"
#include "CfgScriptPaths.hpp"
#include "CfgEventHandlers.hpp"
#include "autotest.hpp"
#include "CfgModules.hpp"
#include "Cfg3DEN.hpp"
#include "CfgFaceSets.hpp"
#include "CfgRemoteExec.hpp"
#include "display3DEN.hpp"

#include "loadouts\macros.inc"
#include "CfgLoadouts.hpp"
