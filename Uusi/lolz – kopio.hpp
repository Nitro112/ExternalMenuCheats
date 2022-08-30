#pragma once
#include <windows.h>
#include <cstddef>
#include <cstdint>

namespace g_netvars
{
	extern int cs_gamerules_data;
	extern int m_ArmorValue;
	extern int m_Collision;
	extern int m_CollisionGroup;
	extern int m_Local;
	extern int m_MoveType;
	extern int m_OriginalOwnerXuidHigh;
	extern int m_OriginalOwnerXuidLow;
	extern int m_SurvivalGameRuleDecisionTypes;
	extern int m_SurvivalRules;
	extern int m_aimPunchAngle;
	extern int m_aimPunchAngleVel;
	extern int m_bBombPlanted;
	extern int m_bFreezePeriod;
	extern int m_bGunGameImmunity;
	extern int m_bHasDefuser;
	extern int m_bHasHelmet;
	extern int m_bInReload;
	extern int m_bIsDefusing;
	extern int m_bIsQueuedMatchmaking;
	extern int m_bIsScoped;
	extern int m_bIsValveDS;
	extern int m_bSpotted;
	extern int m_bSpottedByMask;
	extern int m_clrRender;
	extern int m_dwBoneMatrix;
	extern int m_fAccuracyPenalty;
	extern int m_fFlags;
	extern int m_flC4Blow;
	extern int m_flDefuseCountDown;
	extern int m_flDefuseLength;
	extern int m_flFallbackWear;
	extern int m_flFlashDuration;
	extern int m_flFlashMaxAlpha;
	extern int m_flNextPrimaryAttack;
	extern int m_flTimerLength;
	extern int m_hActiveWeapon;
	extern int m_hMyWeapons;
	extern int m_hObserverTarget;
	extern int m_hOwner;
	extern int m_hOwnerEntity;
	extern int m_iAccountID;
	extern int m_iClip1;
	extern int m_iCompetitiveRanking;
	extern int m_iCompetitiveWins;
	extern int m_iCrosshairId;
	extern int m_iEntityQuality;
	extern int m_iFOV;
	extern int m_iFOVStart;
	extern int m_iGlowIndex;
	extern int m_iHealth;
	extern int m_iItemDefinitionIndex;
	extern int m_iItemIDHigh;
	extern int m_iObserverMode;
	extern int m_iShotsFired;
	extern int m_iState;
	extern int m_iTeamNum;
	extern int m_lifeState;
	extern int m_nFallbackPaintKit;
	extern int m_nFallbackSeed;
	extern int m_nFallbackStatTrak;
	extern int m_nForceBone;
	extern int m_nTickBase;
	extern int m_rgflCoordinateFrame;
	extern int m_szCustomName;
	extern int m_szLastPlaceName;
	extern int m_thirdPersonViewAngles;
	extern int m_vecOrigin;
	extern int m_vecVelocity;
	extern int m_vecViewOffset;
	extern int m_viewPunchAngle;
}

namespace g_offsets
{
	extern int clientstate_choked_commands;
	extern int	clientstate_delta_ticks;
	extern int clientstate_last_outgoing_command;
	extern int clientstate_net_channel;
	extern int convar_name_hash_table;
	extern int dwClientState;
	extern int dwClientState_GetLocalPlayer;
	extern int dwClientState_IsHLTV;
	extern int dwClientState_Map;
	extern int dwClientState_MapDirectory;
	extern int dwClientState_MaxPlayer;
	extern int dwClientState_PlayerInfo;
	extern int dwClientState_State;
	extern int dwClientState_ViewAngles;
	extern int dwEntityList;
	extern int dwForceAttack;
	extern int dwForceAttack2;
	extern int dwForceBackward;
	extern int dwForceForward;
	extern int dwForceJump;
	extern int dwForceLeft;
	extern int dwForceRight;
	extern int dwGameDir;
	extern int dwGameRulesProxy;
	extern int dwGetAllClasses;
	extern int dwGlobalVars;
	extern int dwGlowObjectManager;
	extern int dwInput;
	extern int dwInterfaceLinkList;
	extern int dwLocalPlayer;
	extern int dwMouseEnable;
	extern int dwMouseEnablePtr;
	extern int dwPlayerResource;
	extern int dwRadarBase;
	extern int dwSensitivity;
	extern int dwSensitivityPtr;
	extern int dwSetClanTag;
	extern int dwViewMatrix;
	extern int dwWeaponTable;
	extern int dwWeaponTableIndex;
	extern int dwYawPtr;
	extern int dwZoomSensitivityRatioPtr;
	extern int dwbSendPackets;
	extern int dwppDirect3DDevice9;
	extern int interface_engine_cvar;
	extern int m_bDormant;
	extern int m_pStudioHdr;
	extern int m_pitchClassPtr;
	extern int m_yawClassPtr;
	extern int model_ambient_min;
}
