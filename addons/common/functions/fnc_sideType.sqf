#include "\x\wmi\addons\common\script_component.hpp"
/*
 * Name: WMI_common_fnc_sideType
 * Author: Prof, Nick
 *
 * Arguments:Index of side
 *
 * Return:
 * Side
 *
 * Description:
 * Turns the sideType into actual side
 */
params ["_side"];

_side = _side max 0 min 3;
["east", "west", "resistance", "civilian"] select _side