#include "\x\wmi\addons\spectator\script_component.hpp"
// WMI Spectator configured.
private _output = [];

if (!((getMissionConfigValue ["respawn",0] == 1) and ("WMI_Spectator" in (getMissionConfigValue ["respawnTemplates",[]])))) then {
    _output pushBack [0,"WMI Spectator is not setup correctly. See wiki for instructions."];
};



_output
