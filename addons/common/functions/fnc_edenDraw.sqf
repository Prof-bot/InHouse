#include "\x\wmi\addons\common\script_component.hpp"
/*
 * Name: WMI_common_fnc_edenDraw
 * Author: Prof
 *
 * Arguments:
 * None
 *
 * Return:
 * nil
 *
 * Description:
 * Called on the draw event in EDEN.
 *
 */
if (GVAR(Garrison)) then {
    [] call FUNC(edenMouseOver);
    [] call FUNC(edenMouseKeyDown);
};

[] call FUNC(edenHideMapObjects);