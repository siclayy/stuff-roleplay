// This is an include guard with a purpose - we need more control than the
// standard include guards give.

#include "internal\y_version"
#include "y_utils"
#include "y_scriptinit"
#include "y_bit"
#include "internal\y_shortfunc"

enum ALS
{
	Bit:ALS_OnScriptInit,
	Bit:ALS_OnScriptExit,
	Bit:ALS_OnGameModeInit,
	Bit:ALS_OnGameModeExit,
	Bit:ALS_OnFilterScriptInit,
	Bit:ALS_OnFilterScriptExit,
	Bit:ALS_OnPlayerConnect,
	Bit:ALS_OnPlayerDisconnect,
	Bit:ALS_OnPlayerSpawn,
	Bit:ALS_OnPlayerDeath,
	Bit:ALS_OnVehicleSpawn,
	Bit:ALS_OnVehicleDeath,
	Bit:ALS_OnPlayerText,
	Bit:ALS_OnPlayerCommandText,
	Bit:ALS_OnPlayerRequestClass,
	Bit:ALS_OnPlayerEnterVehicle,
	Bit:ALS_OnPlayerExitVehicle,
	Bit:ALS_OnPlayerStateChange,
	Bit:ALS_OnPlayerEnterCheckpoint,
	Bit:ALS_OnPlayerLeaveCheckpoint,
	Bit:ALS_OnPlayerEnterRaceCheckpoint,
	Bit:ALS_OnPlayerLeaveRaceCheckpoint,
	Bit:ALS_OnRconCommand,
	Bit:ALS_OnPlayerRequestSpawn,
	Bit:ALS_OnObjectMoved,
	Bit:ALS_OnPlayerObjectMoved,
	Bit:ALS_OnPlayerPickUpPickup,
	Bit:ALS_OnVehicleMod,
	Bit:ALS_OnEnterExitModShop,
	Bit:ALS_OnVehiclePaintjob,
	Bit:ALS_OnVehicleRespray,
	Bit:ALS_OnVehicleDamageStatusUpdate,
	Bit:ALS_OnPlayerSelectedMenuRow,
	Bit:ALS_OnPlayerExitedMenu,
	Bit:ALS_OnPlayerInteriorChange,
	Bit:ALS_OnPlayerKeyStateChange,
	Bit:ALS_OnRconLoginAttempt,
	Bit:ALS_OnPlayerUpdate,
	Bit:ALS_OnPlayerStreamIn,
	Bit:ALS_OnPlayerStreamOut,
	Bit:ALS_OnVehicleStreamIn,
	Bit:ALS_OnVehicleStreamOut,
	Bit:ALS_OnDialogResponse,
	Bit:ALS_OnPlayerClickPlayer,
	Bit:ALS_OnPlayerLogin,
	Bit:ALS_OnPlayerLogout,
	Bit:ALS_OnPlayerTakeDamage,
	Bit:ALS_OnPlayerGiveDamage,
	Bit:ALS_OnPlayerClickMap,
	Bit:ALS_OnPlayerCommandReceived,
	Bit:ALS_OnPlayerCommandPerformed,
	Bit:ALS_OnUnoccupiedVehicleUpdate,
	Bit:ALS_OnPlayerClickTextDraw,
	Bit:ALS_OnPlayerClickPlayerTextDraw,
	Bit:ALS_OnPlayerEditObject,
	Bit:ALS_OnPlayerEditAttachedObject,
	// YSI
	Bit:ALS_OnPlayerEnterArea,
	Bit:ALS_OnPlayerLeaveArea,
	Bit:ALS_OnPlayerFinishRace,
	Bit:ALS_OnPlayerExitRace,
	Bit:ALS_OnRaceEnd,
	#if defined _YSI_PLUGINS_STREAMER
		Bit:ALS_OnDynamicObjectMoved,
		Bit:ALS_OnPlayerEditDynamicObject,
		Bit:ALS_OnPlayerSelectDynamicObject,
		Bit:ALS_OnPlayerPickUpDynamicPickup,
		Bit:ALS_OnPlayerEnterDynamicCP,
		Bit:ALS_OnPlayerLeaveDynamicCP,
		Bit:ALS_OnPlayerEnterDynamicRaceCP,
		Bit:ALS_OnPlayerLeaveDynamicRaceCP,
		Bit:ALS_OnPlayerEnterDynamicArea,
		Bit:ALS_OnPlayerLeaveDynamicArea,
	#endif
	Bit:ALS_OnPlayerSelectObject
}

#define ALS_DATA<>

#define ALS_DETECT<%0>

// ALS Callback.
#define _ALS_C_INT<%0,%2>(%3) ALS_MAKE<..._On%0>(ALS_RS_%3);
#define ALS_C_INT<%0,%2>(%3) return _ALS_C_INT<%0,%2>(%3)
// ALS Forward.
#define ALS_F_INT<%0,%8>(%1) forward ALS_MAKE<..._On%0>(ALS_KS_%1);//ALS_F_INT1<%0,%8>(%1)ALS_F_INT2<%0,%8>(%1)
//#define ALS_F_INT1<%0,%8>(%1) public ALS_MAKE<..._On%0>(ALS_KS_%1)<_ALS_:unhooked>{return ALS_R_%0;}
//#define ALS_F_INT2<%0,%8>(%1) public ALS_MAKE<..._On%0>(ALS_KS_%1)<>{return ALS_R_%0;}

// ALS Go (ignore extra parameters).
#define ALS_G_INT<%0,%1>(%8)(%2) W@(#On#%0,(x:#%1#),%2)

// Default return value definitions.
#define ALS_R_ScriptInit 1
#define ALS_R_ScriptExit 1
#define ALS_R_GameModeInit 1
#define ALS_R_GameModeExit 1
#define ALS_R_FilterScriptInit 1
#define ALS_R_FilterScriptExit 1
#define ALS_R_PlayerConnect 1
#define ALS_R_PlayerDisconnect 1
#define ALS_R_PlayerSpawn 1
#define ALS_R_PlayerDeath 1
#define ALS_R_VehicleSpawn 1
#define ALS_R_VehicleDeath 1
#define ALS_R_PlayerText 1
#define ALS_R_PlayerCommandText 0
#define ALS_R_PlayerRequestClass 1
#define ALS_R_PlayerEnterVehicle 1
#define ALS_R_PlayerExitVehicle 1
#define ALS_R_PlayerStateChange 1
#define ALS_R_PlayerEnterCheckpoint 1
#define ALS_R_PlayerLeaveCheckpoint 1
#define ALS_R_PlayerEnterRaceCheckpoint 1
#define ALS_R_PlayerLeaveRaceCheckpoint 1
#define ALS_R_RconCommand 1
#define ALS_R_PlayerRequestSpawn 1
#define ALS_R_ObjectMoved 1
#define ALS_R_PlayerObjectMoved 1
#define ALS_R_PlayerPickUpPickup 1
#define ALS_R_VehicleMod 1
#define ALS_R_EnterExitModShop 1
#define ALS_R_VehiclePaintjob 1
#define ALS_R_VehicleRespray 1
#define                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 %0<PlayerLeaveDynamicCP,ii>(more:playerid,end:checkpointid)
#define ALS_DO_PlayerEnterDynamicRaceCP<%0> %0<PlayerEnterDynamicRaceCP,ii>(more:playerid,end:checkpointid)
#define ALS_DO_PlayerLeaveDynamicRaceCP<%0> %0<PlayerLeaveDynamicRaceCP,ii>(more:playerid,end:checkpointid)
#define ALS_DO_PlayerEnterDynamicArea<%0> %0<PlayerEnterDynamicArea,ii>(more:playerid,end:areaid)
#define ALS_DO_PlayerLeaveDynamicArea<%0> %0<PlayerLeaveDynamicArea,ii>(more:playerid,end:areaid)

#define ALS_KS_more:%0,         %0,ALS_KS_
#define ALS_KS_string:%0[],     %0[],ALS_KS_
#define ALS_KS_Float:%0,        Float:%0,ALS_KS_
#define ALS_KS_tag:%3:%0,       %3:%0,ALS_KS_
#define ALS_KS_end:%0)          %0)
#define ALS_KS_none:)           )
#define ALS_KS_end_string:%0[]) %0[])
#define ALS_KS_end_Float:%0)    Float:%0)
#define ALS_KS_end_tag:%3:%0)   %3:%0)

#define ALS_TS_more:%0,         %0,ALS_TS_
#define ALS_TS_string:%0[],     (%0),ALS_TS_
#define ALS_TS_Float%0,         Float:%0,ALS_TS_
#define ALS_TS_tag:%3:%0,       %3:%0,ALS_TS_
#define ALS_TS_end:%0)          %0)
#define ALS_TS_none:)           )
#define ALS_TS_end_string:%0[]) (%0))
#define ALS_TS_end_Float:%0)    Float:%0)
#define ALS_TS_end_tag:%3:%0)   %3:%0)

#define ALS_RS_more:%0,         %0,ALS_RS_
#define ALS_RS_string:%0[],     ((%0[0])?(%0):NULL),ALS_RS_
#define ALS_RS_Float:%0,        (_:%0),ALS_RS_
#define ALS_RS_tag:%3:%0,       (_:%0),ALS_RS_
#define ALS_RS_end:%0)          %0)
#define ALS_RS_none:)           )
#define ALS_RS_end_string:%0[]) ((%0[0])?(%0):NULL))
#define ALS_RS_end_Float:%0)    (_:%0))
#define ALS_RS_end_tag:%3:%0)   (_:%0))

#define ALS_DO:%9<%0> ALS_DO_%0<%9>

#define ALS_CALL<%0> ALS_DO:ALS_C_INT<%0>
#define ALS_GET<%0> ALS_DO:_ALS_C_INT<%0>
#define ALS_FORWARD<%0> ALS_DO:ALS_F_INT<%0>

#define call%0On%1(%2) ALS_DO:ALS_G_INT<%1>(%2)
