class ctrlMenuStrip;
class display3DEN
{
    class Controls
    {
        class MenuStrip : ctrlMenuStrip
        {
            class Items
            {
                class WMI_Folder {
                    items[] += {"WMI_Briefing"};
                };
                class WMI_Briefing
                {
                    text = "WMI Briefing Settings";
                    action = "edit3DENMissionAttributes 'WMI_MissionBriefingAttributes';";
                    //picture = "\x\wmi\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};