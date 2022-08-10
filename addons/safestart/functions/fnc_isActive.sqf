#include "\x\wmi\addons\safeStart\script_component.hpp"
/* ----------------------------------------------------------------------------
Function: WMI_safestart_fnc_isActive

Description:
    Checks whether safestart is active

Returns:
    Whether safestart is active [Boolean]

Examples:
    (begin example)
        _isActive = [] call WMI_safestart_fnc_isActive
    (end)

Author:
    Prof
---------------------------------------------------------------------------- */

!isNil QGVAR(instance)
