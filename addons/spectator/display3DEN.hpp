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
                    items[] += {"WMI_Spectator_Settings"};
                };
                class WMI_Spectator_Settings
                {
                    text = "WMI Spectator Settings";
                    action = "edit3DENMissionAttributes 'WMI_Spectator_Settings';";
                    picture = "\x\wmi\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};