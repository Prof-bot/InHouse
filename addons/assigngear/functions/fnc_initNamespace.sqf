#include "\x\wmi\addons\assignGear\script_component.hpp"
/*
 * Name = WMI_assignGear_fnc_initNamespace
 * Author = Prof, Fredoo
 *
 * Arguments:
 * None
 *
 * Return:
 * Location. Namespace
 *
 * Description:
 * Initializes the WMI assigngear namespace
 */
if (!isNil QGVAR(namespace) && {!isNull GVAR(namespace)}) exitWith {GVAR(namespace)};

GVAR(namespace) = false call CBA_fnc_createNamespace;

LOG_1("Initialized namespace", GVAR(namespace));

GVAR(namespace)
