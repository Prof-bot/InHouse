/*
 * Name: WMI_common_fnc_sideToColor
 * Author: Prof
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */
 
//Cache vars for speed
if (isNil "wmi_common_blufor_color") then {
    wmi_common_blufor_color = [blufor] call bis_fnc_sideColor;
    wmi_common_opfor_color = [opfor] call bis_fnc_sideColor;
    wmi_common_indep_color = [independent] call bis_fnc_sideColor;
    wmi_common_civ_color = [civilian] call bis_fnc_sideColor;
    wmi_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {wmi_common_blufor_color};
    case opfor: {wmi_common_opfor_color};
    case independent: {wmi_common_indep_color};
    case civilian: {wmi_common_civ_color};
    default {wmi_common_empty_color};
};