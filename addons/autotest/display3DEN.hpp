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
                    items[] += {"WMI_AutoTest"};
                };
                class WMI_AutoTest
                {
                    text = "WMI Autotest";
                    action = "edit3DENMissionAttributes 'WMI_AutoTestAttributes';";
                    //picture = "\x\wmi\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};