/*
    Author: Prof

    Creates a debriefing section for admins containing all
    log messasges sent during the mission.
    Displayed in mission debriefing screen.

    Include this file in description.ext of your mission

    Example:
    class CfgDebriefingSections {
        #include "\x\wmi\addons\adminmenu\debriefAdminLog.inc"
    };
*/

class wmi_adminlog
{
    title = "WMI Log";
    variable = "WMI_adminmenu_debrief";
};
