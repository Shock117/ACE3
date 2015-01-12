/**
 * fn_hasOpenWounds_CMS.sqf
 * @Descr: Check if unit has open wounds
 * @Author: Glowbal
 *
 * @Arguments: [unit OBJECT (The unit to check)]
 * @Return: BOOL
 * @PublicAPI: true
 */

private "_openWounds";
_openWounds = [_this select 0,"cse_openWounds"] call cse_fnc_getvariable;

({(((_x select 0) + (_x select 1) +  (_x select 2)) > 0)}count _openWounds > 0);