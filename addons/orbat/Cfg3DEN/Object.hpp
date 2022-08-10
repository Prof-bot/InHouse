class Object
{
    // Categories collapsible in "Edit Attributes" window
    class AttributeCategories
    {
        // Category class, can be anything
        class WMIMarker
        {
            displayName = "WMI: Specialist Unit Marker"; // Category name visible in Edit Attributes window
            collapsed = 1; // When 1, the category is collapsed by default
            class Attributes
            {
                // Attribute class, can be anything
                class WMI_SpecialistMarker
                {
                    displayName = "Specialist unit icon"; // Name assigned to UI control class Title
                    tooltip = "Pick icon to use for this unit. It is recommended to not overly use markers on individual units."; // Tooltip assigned to UI control class Title
                    property = "WMI_SpecialistMarker"; // Unique config property name saved in SQM
                    control = "twUnitMarker"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectBrain"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['WMI_SpecialistMarker',_value,true];";
                    defaultValue = "["""",""""]";
                    wikiType = "[[String]]";
                };
                class WMI_OrbatParent
                {
                    property = "WMI_OrbatParent"; // Unique config property name saved in SQM
                    control = "None"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectBrain"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['WMI_OrbatParent',_value,true];";
                    defaultValue = "-1";
                };
            };
        };
        class WMI_orbat_vehicleCallsign
        {
            displayName = "WMI: Vehicle ORBAT";
            collapsed = 0;
            class Attributes
            {
                class WMI_orbat_vehicleCallsign
                {
                    property = "WMI_orbat_vehicleCallsign";
                    displayName = "Callsign";
                    tooltip = "Give vehicle a callsign to show on briefing screen.";
                    condition = "objectVehicle";
                    control = "Edit";
                    defaultValue = "''";
                    expression = "_this setVariable ['WMI_orbat_vehicleCallsign',_value,true];";
                    wikiType = "[[String]]";
                };
                class WMI_orbat_team
                {
                    property = "WMI_orbat_team";
                    displayName = "ORBAT Team";
                    tooltip = "Which team's ORBAT should this vehicle be apart of.";
                    condition = "objectVehicle";
                    control = "WMI_ORBAT_team";
                    expression = "_this setVariable ['WMI_orbat_team',_value,true];";
                    defaultValue = "''";
                    value = "''";
                    wikiType = "[[String]]";
                };
                class WMI_groupMarker
                {
                    property = "WMI_groupMarker"; // Unique config property name saved in SQM
                    control = "twGroupMarker"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectVehicle"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['WMI_groupMarker',_value,true];";//"[_this,['WMI_groupMarker',_value]] remoteExecCall ['setVariable',0,true];" //"_this setVariable ['WMI_groupMarker',_value,true];";
                    defaultValue = "'[]'";
                    wikiType = "[[String]]";
                };
                class WMI_OrbatParent
                {
                    property = "WMI_OrbatParent"; // Unique config property name saved in SQM
                    control = "None"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectVehicle"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['WMI_OrbatParent',_value,true];";//"[_this,['WMI_OrbatParent',_value]] remoteExecCall ['setVariable',0,true];"; //_this setVariable ['WMI_OrbatParent',_value,true];";
                    defaultValue = "-1";
                };
            };
        };
    };
};
