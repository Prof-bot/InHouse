#include "\x\wmi\addons\assignGear\script_component.hpp"
/*
 * Name = WMI_assignGear_fnc_linkItems
 * Author = Prof
 *
 * Arguments:
 * 0: Object. Unit
 * 1: ARRAY. Array of items to link
 *
 * Return:
 * None.
 *
 * Description:
 * Tries to link all items to unit
 */
params ["_unit","_items"];

if (isNil "_unit") exitWith {};

{
    if !(isNil "_x") then {
        _unit addWeapon _x;
    };
} forEach _items;