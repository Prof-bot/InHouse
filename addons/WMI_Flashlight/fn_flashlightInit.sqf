
	#include "\a3\editor_f\Data\Scripts\dikCodes.h"

	["WMI Flashlights","WMI_Enhancement", "Toggle Flashlight", {_this spawn WMI_Enhancement_Fnc_switchAttachment}, {}, [DIK_K, [false, true, false]]] call CBA_fnc_addKeybind;
	if (isNil "WMI_Enhancement_Allow_switchAttachment") then { WMI_Enhancement_Allow_switchAttachment = true; };
	if (isNil "WMI_KeyBind_Failcheck") then { WMI_KeyBind_Failcheck = false; };
	if (WMI_KeyBind_Failcheck) then {
		profileNamespace setVariable ["cba_keybinding_registry", []];
		saveProfileNamespace;
	};
