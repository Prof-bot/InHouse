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
                    items[] += {"WMI_Orbat_Settings"};
                };
                class WMI_Orbat_Settings
                {
                    text = "WMI ORBAT Settings";
                    action = "edit3DENMissionAttributes 'WMI_ORBAT_Settings';";
                    picture = "\x\wmi\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};