if (isClass (configFile >> "CfgPatches" >> "ace_safemode")) then {
    [
        QGVAR(weaponSafety),
        "CHECKBOX",
        "Enable ACE Weapon Safety on mission start",
        ["WMI", "Common"],
        true,
        0,
        {},
        true
    ] call CBA_fnc_addSetting;
};
