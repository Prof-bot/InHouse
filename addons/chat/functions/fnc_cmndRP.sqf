#include "\x\wmi\addons\chat\script_component.hpp"
/*
 * Name = WMI_chat_fnc_cmndRP
 * Author = Prof, Freddo
 *
 * Syntaxes:
 * #rp - Resets player position.
 *
 * Return Value:
 * Void
 *
 * Description:
 * See Syntaxes
 */

IS_CMND_AVAILABLE(GVAR(rpUsage),"#rp");

private _safePos = (getPosATL CURUNIT) findEmptyPosition [0, 25, (typeOf CURUNIT)];

if (count _safePos == 3) exitWith {
    _safePos set [2, 0];
    CURUNIT setPosATL _safePos;
    systemChat "WMI: Reset player position";
};
systemChat "WMI Error: Unable to reset player position";
