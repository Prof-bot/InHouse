["vehicle", wmi_2inch_fnc_ui, true] call CBA_fnc_addPlayerEventHandler;

["wmi_2inch", "wmi_2inch_deploykey", ["Deploy 2 Inch", "This deploys the static with you on it."], {
	[player] call wmi_2inch_fnc_deploy
}, {}, [0x04, [false, false, false]]] call CBA_fnc_addKeybind;