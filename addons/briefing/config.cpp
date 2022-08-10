#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "WMI: Briefing";
        author = "Snippers, Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"wmi_common"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgDiary.hpp"
#include "CfgEventHandlers.hpp"

#include "display3DEN.hpp"

class WMI_autotest {
    class GVAR(test) {
        code = QUOTE([] call FUNC(testBriefings));
    };
};
