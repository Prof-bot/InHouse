#include "\x\wmi\addons\assignGear\script_component.hpp"
/*
 * Name = WMI_assignGear_fnc_vehicleGear_save
 * Author = Prof, Head
 *
 * Arguments:
 * None.
 *
 * Return:
 * Data to store
 *
 * Description:
 * Internal Use Only
 */
private _data = (missionNamespace getVariable [QGVAR(vehicleGear_data), ['', '', []]]);
_data params ["_category", "_faction", "_gear"];
TRACE_1('SAVE', _data);
[_category, _faction, _gear apply { _x select { (_x # 1) > 0 } }]