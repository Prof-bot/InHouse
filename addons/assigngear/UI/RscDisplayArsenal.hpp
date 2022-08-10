class RscDisplayArsenal
{
   class controls
   {
       class WMIexport : RscButtonMenu {
           x ="0.425079 * safezoneW + safezoneX";
           y = "0.951298 * safezoneH + safezoneY";
           w = "0.123399 * safezoneW";
           h ="0.0188041 * safezoneH";
           text = "Export as WMI Role";
           action = "[player,'test'] call wmi_assigngear_fnc_saveRole";
       };
   };
};
