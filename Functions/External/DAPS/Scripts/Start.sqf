private["_scriptWait","_module"];
sleep 3;
dapsReady=FALSE;
dapsDebug=FALSE;
//#include "\a3\editor_f\Data\Scripts\dikCodes.h"
// Vehicles that use each type of APS
dapsLight=[];
dapsMedium=[];
dapsHeavy=[];
dapsTrophyLV=[];
dapsTrophyMV=[];
dapsTrophyHV=[];
dapsTrophyHVe=[];
dapsArena=[];
dapsDazzler=[];
dapsDrozd=[];
dapsDrozd2=[];
dapsAfganit=[];
dapsAfganitE=[];
dapsIronFist=[];
dapsAMAP=[];
dapsPersonal=[];

dapsRearmRange=50;
dapsRearmTime=5;
dapsRearmDelay=3; //15
dapsBlastBig=FALSE;

_module=objNull;
_scriptWait=execVM"DAPS\Scripts\DefineVehicles.sqf";
waitUntil{scriptDone _scriptWait};

if(count(entities"DAPS_Options")>0)then{
	_module=(entities"DAPS_Options")select 0;
	if((_module getVariable"dapsDebug")=="TRUE")then{dapsDebug=TRUE};
	//dapsRearmDelay=_module getVariable"dapsRearmCycle";
	if((_module getVariable"dapsBlastSize")=="BIG")then{dapsBlastBig=TRUE};
	if((_module getVariable"dapsClearAll")=="TRUE")then{
		dapsLight=[];
		dapsMedium=[];
		dapsHeavy=[];
		dapsTrophyLV=[];
		dapsTrophyMV=[];
		dapsTrophyHV=[];
		dapsTrophyHVe=[];
		dapsArena=[];
		dapsDazzler=[];
		dapsDrozd=[];
		dapsDrozd2=[];
		dapsAfganit=[];
		dapsAfganitE=[];
		dapsIronFist=[];
		dapsAMAP=[];
		dapsPersonal=[];
	};
};

dapsDefinitionsLoaded=TRUE;
dapsDefinitionsLoaded2=FALSE;

sleep 1;
if(count(entities"DAPS_AssignAPS")>0)then{
	waitUntil{dapsDefinitionsLoaded2};
	sleep 1;
};

// Vehicles with a single launcher
dapsSingle=[];
// Vehicles with double launchers
dapsDouble=[];
// All vehicles with APS
dapsAPStypes=[];
// Compile all vehicle types into single/double and the overall APS list
DAPS_fnc_CompileTypes=compile preprocessFile"DAPS\Scripts\Management\CompileTypes.sqf";
//if(isServer)then{call DAPS_fnc_CompileTypes};
call DAPS_fnc_CompileTypes;
DAPS_fnc_BroadcastTypes=compile preprocessFile"DAPS\Scripts\Management\BroadcastTypes.sqf";
//if(isServer)then{call DAPS_fnc_BroadcastTypes};
// Projectiles that have been dazzled
dapsDazzled=[];
//dapsSmokeLaunchers=[];
dapsSmokeLaunchers=["SmokeLauncher"];
// Vehicles that have been registered
dapsRegistered=[];
// Registered vehicles with no APS
dapsNoAPS=[];
dapsLoop=true;
// Classnames of ammo that will not activate APS.
dapsExcludedAmmo=[];

// Used to allow/disallow the DAPS dialog
dapsAvailable=TRUE;

DAPS_fnc_KeyPressed=compile preprocessFile"DAPS\Scripts\Management\KeyPressed.sqf";
//DAPS_fnc_ShowDialog=compile preprocessFile"DAPS\Scripts\Management\ShowDialog.sqf";

DAPS_fnc_Time=compile preprocessFile"DAPS\Scripts\Misc\Time.sqf";

DAPS_fnc_Indicator=compile preprocessFile"DAPS\Scripts\Report\Indicator.sqf";
DAPS_fnc_Active=compile preprocessFile"DAPS\Scripts\Misc\Active.sqf";
DAPS_fnc_Inc=compile preprocessFile"DAPS\Scripts\Misc\GetIncoming.sqf";

DAPS_fnc_CountAmmo=compile preprocessFile"DAPS\Scripts\Misc\CountAmmo.sqf";
DAPS_fnc_Rearm=compile preprocessFile"DAPS\Scripts\Misc\Rearm.sqf";
DAPS_fnc_Rearm2=compile preprocessFile"DAPS\Scripts\Misc\Rearm2.sqf";
DAPS_fnc_ReportRearm=compile preprocessFile"DAPS\Scripts\Report\ReportRearm.sqf";

// Register an individual vehicle
DAPS_fnc_RegisterVehicle=compile preprocessFile"DAPS\Scripts\Management\RegisterVehicle.sqf";
// Register all vehicles
DAPS_fnc_RegisterAll=compile preprocessFile"DAPS\Scripts\Management\RegisterAll.sqf";
// Check for unregistered (ie. newly spawned) vehicles every five seconds and runs DAPS_fnc_RegisterAll;
DAPS_fnc_RegisterLoop=compile preprocessFile"DAPS\Scripts\Management\RegisterLoop.sqf";
DAPS_fnc_RearmAPS=compile preprocessFile"DAPS\Scripts\Management\RearmAPS.sqf";
DAPS_fnc_Report=compile preprocessFile"DAPS\Scripts\Report\Report.sqf";
//DAPS_fnc_BroadcastTypes=compile preprocessFile"DAPS\Scripts\Management\BroadcastTypes.sqf";
DAPS_fnc_CustomAmmo=compile preprocessFile"DAPS\Scripts\Management\CustomAmmo.sqf";

DAPS_fnc_Generic=compile preprocessFile"DAPS\Scripts\APS\Generic.sqf";
DAPS_fnc_APSlight=compile preprocessFile"DAPS\Scripts\APS\APSlight.sqf";
DAPS_fnc_APSmedium=compile preprocessFile"DAPS\Scripts\APS\APSmedium.sqf";
DAPS_fnc_APSheavy=compile preprocessFile"DAPS\Scripts\APS\APSheavy.sqf";
DAPS_fnc_APSTrophyLV=compile preprocessFile"DAPS\Scripts\APS\APSTrophyLV.sqf";
DAPS_fnc_TrophyLV=compile preprocessFile"DAPS\Scripts\APS\TrophyLV.sqf";
DAPS_fnc_APSTrophyMV=compile preprocessFile"DAPS\Scripts\APS\APSTrophyMV.sqf";
DAPS_fnc_TrophyMV=compile preprocessFile"DAPS\Scripts\APS\TrophyMV.sqf";
DAPS_fnc_APSTrophyHV=compile preprocessFile"DAPS\Scripts\APS\APSTrophyHV.sqf";
DAPS_fnc_TrophyHV=compile preprocessFile"DAPS\Scripts\APS\TrophyHV.sqf";
DAPS_fnc_APSTrophyHVe=compile preprocessFile"DAPS\Scripts\APS\APSTrophyHVe.sqf";
DAPS_fnc_TrophyHVe=compile preprocessFile"DAPS\Scripts\APS\TrophyHVe.sqf";
DAPS_fnc_TrophyHVe2=compile preprocessFile"DAPS\Scripts\APS\TrophyHVe2.sqf";
DAPS_fnc_APSArena=compile preprocessFile"DAPS\Scripts\APS\APSArena.sqf";
DAPS_fnc_Arena=compile preprocessFile"DAPS\Scripts\APS\Arena.sqf";
DAPS_fnc_APSDazzler=compile preprocessFile"DAPS\Scripts\APS\APSDazzler.sqf";
DAPS_fnc_Dazzler=compile preprocessFile"DAPS\Scripts\APS\Dazzler.sqf";
DAPS_fnc_APSDrozd=compile preprocessFile"DAPS\Scripts\APS\APSDrozd.sqf";
DAPS_fnc_Drozd=compile preprocessFile"DAPS\Scripts\APS\Drozd.sqf";
DAPS_fnc_APSDrozd2=compile preprocessFile"DAPS\Scripts\APS\APSDrozd2.sqf";
DAPS_fnc_Drozd2=compile preprocessFile"DAPS\Scripts\APS\Drozd2.sqf";
DAPS_fnc_APSAfganit=compile preprocessFile"DAPS\Scripts\APS\APSAfganit.sqf";
DAPS_fnc_APSAfganitE=compile preprocessFile"DAPS\Scripts\APS\APSAfganitE.sqf";
DAPS_fnc_Afganit=compile preprocessFile"DAPS\Scripts\APS\Afganit.sqf";
DAPS_fnc_Afganit2=compile preprocessFile"DAPS\Scripts\APS\Afganit2.sqf";
DAPS_fnc_APSIronFist=compile preprocessFile"DAPS\Scripts\APS\APSIronFist.sqf";
DAPS_fnc_IronFist=compile preprocessFile"DAPS\Scripts\APS\IronFist.sqf";
DAPS_fnc_APSAMAP=compile preprocessFile"DAPS\Scripts\APS\APSAMAP.sqf";
DAPS_fnc_AMAP=compile preprocessFile"DAPS\Scripts\APS\AMAP.sqf";
DAPS_fnc_AMAP2=compile preprocessFile"DAPS\Scripts\APS\AMAP2.sqf";
DAPS_fnc_Blast=compile preprocessFile"DAPS\Scripts\Misc\Blast.sqf";
DAPS_fnc_DeductAmmo=compile preprocessFile"DAPS\Scripts\Misc\DeductAmmo.sqf";
DAPS_fnc_PopSmokeTurn=compile preprocessFile"DAPS\Scripts\Misc\PopSmokeTurn.sqf";
DAPS_fnc_PopSmoke=compile preprocessFile"DAPS\Scripts\Misc\PopSmoke.sqf";
DAPS_fnc_PopSmoke2=compile preprocessFile"DAPS\Scripts\Misc\PopSmoke2.sqf";
DAPS_fnc_CanSmoke=compile preprocessFile"DAPS\Scripts\Misc\CanSmoke.sqf";
DAPS_fnc_GetDirection=compile preprocessFile"DAPS\Scripts\Misc\GetDirection.sqf";
DAPS_fnc_RelDir=compile preprocessFile"DAPS\Scripts\Misc\RelDir.sqf";
DAPS_fnc_RelDir2=compile preprocessFile"DAPS\Scripts\Misc\RelDir2.sqf";
DAPS_fnc_RelPos=compile preprocessFile"DAPS\Scripts\Misc\RelPos.sqf";
DAPS_fnc_React=compile preprocessFile"DAPS\Scripts\Misc\React.sqf";

//https://community.bistudio.com/wiki/DIK_KeyCodes
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
sleep 1;
["Drongo's APS","APS report",["Show Dialog","Tool Tip"],"",{call daps_fnc_KeyPressed},[211,[FALSE,FALSE,FALSE]]]call cba_fnc_addKeybind;
dapsReady=TRUE;
dapsServer=FALSE;
if(isServer)then{
	dapsServer=TRUE;
	publicVariable"dapsServer";
	if(dapsDebug)then{"REGISTER LOOP"remoteExec["systemChat"];"REGISTER LOOP"remoteExec["hint"]};
	[]spawn DAPS_fnc_RegisterLoop;
	sleep 3;
	call DAPS_fnc_BroadcastTypes;
};