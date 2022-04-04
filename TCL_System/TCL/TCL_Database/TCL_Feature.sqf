// ////////////////////////////////////////////////////////////////////////////
// Tactical Combat Link
// ////////////////////////////////////////////////////////////////////////////
// Feature Database
// Based on Operation Flashpoint Mod E.C.P. ( Enhanced Configuration Project )
// By =\SNKMAN/=
// ////////////////////////////////////////////////////////////////////////////

if (TCL_Server) then
{
	if (isNil "TCL_Feature") then
	{
		SystemChat "'Tactical Combat Link' Mod - Initializing selected features";
		TCL_Feature = [
		
			// 0 ( Watch )
			True,
			50,
			
			// 2 ( Garrison )
			True,
			
			// 3 - 6 ( Smoke )
			True,
			50,
			True,
			75,
			
			// 7 ( Flare )
			True,
			50,
			
			// 9 ( Artillery )
			True,
			75,
			
			// 11 ( House Search )
			True,
			70,
			
			// 13 ( Static Weapon )
			True,
			70,
			
			// 15 - 18 ( Take Cover )
			True,
			70,
			70,
			70,
			
			// 19 - 21 ( Flanking )
			True,
			70,
			70,
			
			// 22 - 26 ( Advancing )
			True,
			75,
			70,
			300,
			700,
			
			// 27 - 29 ( Suppressed )
			True,
			0.90,
			5,
			
			// 30 - 31 ( Heal )
			True,
			90,
			
			// 32 - 33 ( Rearm )
			True,
			90,
			
			// 34 - 35 ( Surrender )
			True,
			15
		];
		
		if (TCL_FilePatching) then
		{
			SystemChat "Initializing Tactical Combat Link filepatching";
			if ("UserConfig\TCL\TCL_Feature.sqf" call TCL_Exist_F) then
			{
				call compile preprocessFileLineNumbers "UserConfig\TCL\TCL_Feature.sqf";
			};
		};
	};
};