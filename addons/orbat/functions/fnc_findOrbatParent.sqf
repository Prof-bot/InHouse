#include "\x\wmi\addons\orbat\script_component.hpp"

params["_entity"];

//convert entity to group.
if (_entity isEqualType objNull) then {_entity = group _entity;};

private _parentId = _entity getVariable ["WMI_OrbatParent", -1];

/*OrbatSettings_Array = [
            [west,[
                    [0,"1PLT","x\wmi\addons\orbat\textures\yellow.paa","x\wmi\addons\orbat\textures\modif_3dot.paa"],
                    [
                        [[1,"A","x\wmi\addons\orbat\textures\red_inf.paa","x\wmi\addons\orbat\textures\modif_dot.paa"],[]]
                    ]
                   ]],
            [east,[
                    [2,"2PLT","x\wmi\addons\orbat\textures\yellow.paa","x\wmi\addons\orbat\textures\modif_3dot.paa"],
                    [
                        [[3,"A","x\wmi\addons\orbat\textures\red_inf.paa","x\wmi\addons\orbat\textures\modif_dot.paa"],[]]
                    ]
                   ]]
        ];*/

if (isNil QGVAR(orbatRawData)) then {
    GVAR(orbatRawData) = getMissionConfigValue ["WMI_ORBATSettings",[]];
    if (GVAR(orbatRawData) isEqualType "") then { GVAR(orbatRawData) = call compile GVAR(orbatRawData)};
};

private _type = 0;
if (count GVAR(orbatRawData)  > 0) then {
    _type = (GVAR(orbatRawData) select 0) select 0;
};

if (_type isEqualType "") then {
    _type = faction (leader _entity); 
} else {
    _type = side _entity; 
};


private _parentEntry = [];

//Use function for recursive find.
wmi_orbat_fnc_findOrbatParentHelper = {
    params["_data","_children"];

    _data params ["_id"];
    if (_id isEqualTo _parentId) exitWith {_parentEntry = _this};

    {
        _x call wmi_orbat_fnc_findOrbatParentHelper;
    } forEach _children;
};


{
    _x params ["_condition", "_rootEntry"];
    if (_condition isEqualTo _type) exitWith {
        if (_parentId isEqualTo -1) then {
            _parentEntry = _rootEntry;
        } else {
            _rootEntry call wmi_orbat_fnc_findOrbatParentHelper;
        };
    };
} forEach GVAR(orbatRawData);

_parentEntry