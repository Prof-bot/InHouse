params ["_unit"];

if ((secondaryWeapon _unit != "wmi_2inch_bag") || !(local _unit) || !(isPlayer _unit) || (vehicle player != player)) exitwith {};

if (weaponLowered _unit) then {_unit switchMove "amovpercmstpslowwrfldnon"};

_dir = getDir _unit;
_height = (getPos _unit) select 2;
_pos = _unit getPos [0.1, _dir];

_KK_fnc_setPosAGLS = {
	params ["_obj", "_pos", "_offset"];
	_offset = _pos select 2;
	if (isNil "_offset") then {_offset = 0};
	_pos set [2, worldSize]; 
	_obj setPosASL _pos;
	_pos set [2, vectorMagnitude (_pos vectorDiff getPosVisual _obj) + _offset];
	_obj setPosASL _pos;
};

_mortar = "wmi_2inch_vehicle" createVehicle _pos;
[_mortar, _pos] call _KK_fnc_setPosAGLS;
_mortar setDir _dir;
if ((getPosATL _unit) isEqualTo (getPos _unit)) then {_mortar setVectorUp (surfaceNormal _pos)} else {_mortar setVectorUp (vectorUp _unit)};
_mortar setVariable ["ace_mk6mortar_exclude", true];

_unit assignAsGunner _mortar;
_unit moveInGunner _mortar;

_magazines = magazines _unit;
_HECount = {_x == "wmi_2inch_he_1rnd"} count _magazines;
_smokeCount = {_x == "wmi_2inch_smoke_1rnd"} count _magazines;
_IllumCount = {_x == "wmi_2inch_illum_1rnd"} count _magazines;
_loadedMag = (secondaryWeaponMagazine _unit) select 0;

switch (_loadedMag) do
{
	case "wmi_2inch_he_1rnd": {_HECount = _HECount + 1};
	case "wmi_2inch_smoke_1rnd": {_smokeCount = _smokeCount + 1};
	case "wmi_2inch_illum_1rnd": {_IllumCount = _IllumCount + 1};
	default {};
};

for "_i" from 1 to _HECount do {
	_mortar addMagazineTurret ["wmi_2inch_he_1rnd", [0]];
};
for "_i" from 1 to _smokeCount do {
	_mortar addMagazineTurret ["wmi_2inch_smoke_1rnd", [0]];
};
for "_i" from 1 to _IllumCount do {
	_mortar addMagazineTurret ["wmi_2inch_illum_1rnd", [0]];
};

if !(isNil "_loadedMag") then {
	_mass = getNumber (configFile >> "CfgMagazines" >> _loadedMag >> "mass");
	switch (true) do
	{
		case ((1- loadVest _unit) * (getContainerMaxLoad vest _unit) > _mass);
		case ((1- loadBackpack _unit) * (getContainerMaxLoad backpack _unit) > _mass);
		case ((1- loadUniform _unit) * (getContainerMaxLoad uniform _unit) > _mass): {_unit addMagazine [_loadedMag, 1];};
		default {_mortar setVariable ["wmi_2inch_LoadedMag", _loadedMag, true];
			//_weaponHolder = "GroundWeaponHolder_Scripted" createVehicle _pos;
			//_weaponHolder addMagazineCargo [_loadedMag, 1];
		};
	};
};

_unit removeWeapon "wmi_2inch_bag";