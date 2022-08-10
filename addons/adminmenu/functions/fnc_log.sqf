#include "\x\wmi\addons\adminmenu\script_component.hpp"
/* ----------------------------------------------------------------------------
Function: WMI_adminmenu_fnc_log

Description:
    Logs a message to registered admins, visible in the admin menu.

Parameters:
    _message - Message to be displayed [String]
    _isWarning - Whether to display as warning [Bool]
    _tag - Tag that message will be prefixed with [String, defaults to "[WMI Log]"]

Returns:
    Nil

Examples:
    (begin example)
        ["Everything is on fire!",true,"[WMI Firealarm]"] call WMI_adminmenu_fnc_log;
    (end)
    (begin example)
        [format ["%1 did something",profileName]] call WMI_adminmenu_fnc_log;
    (end)

Author:
    Prof
---------------------------------------------------------------------------- */
// TODO: Move to PREPMAIN(log)

params [
    ["_message","",[""]],
    ["_isWarning",false,[false]],
    ["_tag","",[""]]
];

if !(_tag isEqualTo "") then {
    _tag = format ["[%1] ",_tag];
};

[QGVAR(serverLog),[CBA_missionTime,_tag + _message,_isWarning]] call CBA_fnc_serverEvent;
LOG_2("Sent log message to admins: ""%1"" isWarning: %2",_message,_isWarning)