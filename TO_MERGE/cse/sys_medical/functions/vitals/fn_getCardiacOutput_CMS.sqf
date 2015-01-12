/**
 * fn_getCardiacOutput_CMS.sqf
 * @Descr: Get the cardiac output from the Heart, based on current Heart Rate and Blood Volume.
 * @Author: Glowbal
 *
 * @Arguments: [unit OBJECT]
 * @Return:	NUMBER	Current cardiac output.
 * @PublicAPI: true
 */


/*
	Cardiac output (Q or or CO ) is the volume of blood being pumped by the heart, in particular by a left or right ventricle in the time interval of one minute. CO may be measured in many ways, for example dm3/min (1 dm3 equals 1 litre).

	Source: http://en.wikipedia.org/wiki/Cardiac_output
*/

// to limit the amount of complex calculations necessary, we take a set modifier to calculate Stroke Volume.
#define MODIFIER_CARDIAC_OUTPUT 	19.04761

private "_unit";
_unit = _this select 0;

((_unit getvariable ["cse_bloodVolume", 100])/MODIFIER_CARDIAC_OUTPUT) + ((_unit getvariable ["cse_heartRate", 80])/80-1);