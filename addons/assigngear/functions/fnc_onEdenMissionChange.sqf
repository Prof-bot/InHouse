#include "\x\wmi\addons\assignGear\script_component.hpp"
/*
 * Name = WMI_assignGear_fnc_onEdenMissionChange
 * Author = Prof
 *
 * Arguments:
 * UI function do not use
 *
 * Return:
 * UI function do not use
 *
 * Description:
 * When a mission is changed.
 */

//Cache description.ext
GVAR(descriptionExt) = "";
if FILE_EXISTS("description.ext") then {
    GVAR(descriptionExt) = preprocessFile "description.ext";
};
