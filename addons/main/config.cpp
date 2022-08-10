#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = "WMI: Main";
        author = "Prof";
        url = "";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        /* Require CBA and all components below */
        requiredAddons[] = {"cba_main"};
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        action = "";
        dir = "";
        hideName = 0;
        hidePicture = 0;
        logo = "logo_wmi_small_ca.paa";
        logoOver = "logo_wmi_small_glow_ca.paa";
        logoSmall = "logo_wmi_small_ca.paa";
        name = "WMI Mission Framework";
        overview = "WMI Mission Framework";
        picture = "x\wmi\addons\main\logo_wmi_ca.paa";
        tooltip = "WMI Mission Framework";
    };
};
class CfgFactionClasses
{
    class NO_CATEGORY;
    class WMI: NO_CATEGORY
    {
        displayName = "WMI";
    };
};
