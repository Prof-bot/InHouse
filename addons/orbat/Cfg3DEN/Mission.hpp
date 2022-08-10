class Mission
{
    class WMI_ORBAT_Settings
    {
        displayName = "WMI ORBAT attributes"; // Text visible in the window title as "Edit <displayName>"
        //display = "Display3DENEditAttributesPreview"; // Optional - display for attributes window. Must have the same structure and IDCs as the default Display3DENEditAttributes
        class AttributeCategories
        {
            class WMI_ORBATSettings
            {
                displayName = "WMI: ORBAT"; // Category name visible in Edit Attributes window
                collapsed = 0; // When 1, the category is collapsed by default
                class Attributes
                {
                    class WMI_ORBATTracker
                    {
                        property = "WMI_ORBATTracker";
                        displayName = "Enable map markers for ORBAT";
                        control = "Checkbox";
                        //expression = "missionNamespace setVariable ['WMI_ORBAT_Tracker',_value];";
                        tooltip = "Use this option to enable elements of the ORBAT being displayed on the map.";
                        defaultValue = false;
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class WMI_ORBATTrackerCondition
                    {
                        property = "WMI_ORBATTrackerCondition";
                        displayName = "Map markers display condition";
                        control = "Edit";
                        //expression = "missionNamespace setVariable ['WMI_ORBAT_Tracker',_value];";
                        tooltip = "[Advanced] Use this text box to specify a code condition to evaluate to check if the orbat should be drawn. Must return a boolean. e.g. ('ItemGPS' in (assignedItems player)). Do not edit this if you do understand this description. Default value: true";
                        defaultValue = "true";
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class WMI_ORBATMarkersFT
                    {
                        property = "WMI_ORBATMarkersFT";
                        displayName = "Enable fireteam map markers";
                        control = "Checkbox";
                        //expression = "missionNamespace setVariable ['WMI_ORBAT_MarkersFT',_value];";
                        tooltip = "Use this option to enable drawing members of the current player's fireteam on the map.";
                        defaultValue = false;
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class WMI_ORBATMarkersFT_Directional
                    {
                        property = "WMI_ORBATMarkersFT_Directional";
                        displayName = "Directional fireteam map markers";
                        control = "Checkbox";
                        expression = "missionNamespace setVariable ['WMI_ORBAT_MarkersFT_Directional',_value,true];";
                        tooltip = "Set whether fireteam map markers are directional or not.";
                        defaultValue = false;
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class WMI_ORBATSettings
                    {
                        property = "WMI_ORBATSettings";
                        control = "ORBATSettings";
                        //expression = "missionNamespace setVariable ['WMI_ORBAT_Array',_value];";
                        tooltip = "";
                        defaultValue = "[]";
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class WMI_ORBATRenameFakeAttribute
                    {
                        property = "WMI_ORBATRenameFakeAttribute";
                        control = "WMI_ORBAT_Renamer";
                        tooltip = "";
                        defaultValue = "true";
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                };
            };
        };
    };
};
