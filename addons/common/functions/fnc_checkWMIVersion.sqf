#include "\x\wmi\addons\common\script_component.hpp"
/*
 * Name: WMI_common_fnc_checkWMIVersion
 * Author: Snippers, Prof
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if WMI Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _wmiVersion = getMissionConfigValue ["wmi_version",[0,0,0]];

([_wmiVersion,_input] call EFUNC(common,checkVersionArray));

