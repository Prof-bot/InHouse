private ["_Text","_Time"];

_this Spawn {
	_Text = [_this, 0, "Error", ["",[]]] call BIS_fnc_param;
	_Time = [_this, 1, -1, [0]] call BIS_fnc_param;
		if (typeName _Text == "STRING") then {
			hintSilent _Text;
		};
		if (typeName _Text == "ARRAY") then {
			hintSilent format _Text;
		};
		Sleep _Time;
		hintSilent "";
};
