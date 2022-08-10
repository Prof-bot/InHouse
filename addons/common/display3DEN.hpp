class ctrlMenuStrip;
class ctrlControlsGroupNoScrollbars;
class ctrlCheckboxToolbar;
class Separator1;

class display3DEN
{
    class Controls
    {
        class MenuStrip : ctrlMenuStrip
        {
            class Items
            {
                items[] += {"WMI_Folder"};
                class WMI_Folder {
                    text = "WMI";
                    items[] = {"WMI_Documentation"};
                };
                class WMI_Documentation
                {
                    text = "WMI Wiki"; // engine adds ... to links
                    data = "HelpFeedback";
                    picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
                    weblink = ""; //This should really link to a Google Doc or something
                    opensNewWindow = 1;
                };
            };
        };
        class Toolbar : ctrlControlsGroupNoScrollbars{
            class Controls {
                class Separator3: Separator1
                {
                    colorBackground[]={0,0,0,0.5};
                    x="33.5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="pixelW";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                };
                class WMI_Toolbar_Controls : ctrlControlsGroupNoScrollbars {
                    idc=-1;
                    x="34.5 * (5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                    class Controls
                    {
                        class Garrison: ctrlCheckboxToolbar
                        {
                            idc=-1;
                            onCheckedChanged=QUOTE(GVAR(Garrison) = !GVAR(Garrison));
                            onLoad="uiNamespace setVariable [""wmi_common_GarrisonControl"",_this select 0]; wmi_common_Garrison = false";
                            x="0 *     (    5 * (pixelW * pixelGrid *     0.50))";
                            y=0;
                            h="(    5 * (pixelH * pixelGrid *     0.50))";
                            w="(    5 * (pixelW * pixelGrid *     0.50))";
                            tooltip="WMI: Toggle garrison on dragging units";
                            textureChecked="\x\wmi\addons\common\UI\logo_wmi_small_toolbar_active_ca.paa";
                            textureUnchecked="\x\wmi\addons\common\UI\logo_wmi_small_ca.paa";
                            textureFocusedChecked="\x\wmi\addons\common\UI\logo_wmi_small_toolbar_active_ca.paa";
                            textureFocusedUnchecked="\x\wmi\addons\common\UI\logo_wmi_small_ca.paa";
                            textureHoverChecked="\x\wmi\addons\common\UI\logo_wmi_small_toolbar_active_ca.paa";
                            textureHoverUnchecked="\x\wmi\addons\common\UI\logo_wmi_small_ca.paa";
                            texturePressedChecked="\x\wmi\addons\common\UI\logo_wmi_small_toolbar_active_ca.paa";
                            texturePressedUnchecked="\x\wmi\addons\common\UI\logo_wmi_small_ca.paa";
                            textureDisabledChecked="\x\wmi\addons\common\UI\logo_wmi_small_toolbar_active_ca.paa";
                            textureDisabledUnchecked="\x\wmi\addons\common\UI\logo_wmi_small_ca.paa";
                        };
                    };
                };
            };
        };
    };
};
