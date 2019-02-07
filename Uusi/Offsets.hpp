////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Copyright 2018 Null Terminator																								  //
//
Permission is hereby granted, free of charge, to any person																		  //
obtaining a copy of this software and associated documentation                                                                    //
files(the "Software"), to deal in the Software without restriction,                                                               //
including without limitation the rights to use, copy, modify, merge,                                                              //
publish, distribute, sublicense, and/or sell copies of the Software,                                                              //
and to permit persons to whom the Software is furnished to do so,                                                                 //
subject to the following conditions :                                                                                             //
//
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.    //
//
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,																	  //
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF																  //
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.                                                            //
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,                                                       //
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR                                                             //
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR                                                             //
THE USE OR OTHER DEALINGS IN THE SOFTWARE.																						  //
*/																																  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <windows.h>
#include <cstddef>
#include <cstdint>
#include "RCS.h"
#include "JSON.h"

namespace netvars {
	constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
	constexpr ::std::ptrdiff_t m_ArmorValue = 0xB328;
	constexpr ::std::ptrdiff_t m_Collision = 0x31C;
	constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
	constexpr ::std::ptrdiff_t m_Local = 0x2FBC;
	constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31B4;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31B0;
	constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1318;
	constexpr ::std::ptrdiff_t m_SurvivalRules = 0xCF0;
	constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x302C;
	constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3038;
	constexpr ::std::ptrdiff_t m_bBombPlanted = 0x99D;
	constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
	constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x3928;
	constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB338;
	constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB31C;
	constexpr ::std::ptrdiff_t m_bInReload = 0x3285;
	constexpr ::std::ptrdiff_t m_bIsDefusing = 0x3914;
	constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
	constexpr ::std::ptrdiff_t m_bIsScoped = 0x390A;
	constexpr ::std::ptrdiff_t m_bIsValveDS = 0x75;
	constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
	constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
	constexpr ::std::ptrdiff_t m_clrRender = 0x70;
	constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
	constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3304;
	constexpr ::std::ptrdiff_t m_fFlags = 0x104;
	constexpr ::std::ptrdiff_t m_flC4Blow = 0x2990;
	constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29AC;
	constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29A8;
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31C0;
	constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA3E0;
	constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA3DC;
	constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3218;
	constexpr ::std::ptrdiff_t m_flTimerLength = 0x2994;
	constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EF8;
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DF8;
	constexpr ::std::ptrdiff_t m_hObserverTarget = 0x3388;
	constexpr ::std::ptrdiff_t m_hOwner = 0x29CC;
	constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FC8;
	constexpr ::std::ptrdiff_t m_iClip1 = 0x3244;
	constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
	constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB394;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FAC;
	constexpr ::std::ptrdiff_t m_iFOV = 0x31E4;
	constexpr ::std::ptrdiff_t m_iFOVStart = 0x31E8;
	constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA3F8;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FAA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FC0;
	constexpr ::std::ptrdiff_t m_iObserverMode = 0x3374;
	constexpr ::std::ptrdiff_t m_iShotsFired = 0xA370;
	constexpr ::std::ptrdiff_t m_iState = 0x3238;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31B8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31BC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31C4;
	constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
	constexpr ::std::ptrdiff_t m_nTickBase = 0x342C;
	constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
	constexpr ::std::ptrdiff_t m_szCustomName = 0x303C;
	constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35B0;
	constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31D8;
	constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
	constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
	constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
	constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3020;
} // namespace netvars
namespace offs {
	constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D28;
	constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
	constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D24;
	constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
	constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
	constexpr ::std::ptrdiff_t dwClientState = 0x58BCFC;
	constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
	constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D40;
	constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
	constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
	constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
	constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52B8;
	constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
	constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D88;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4CD9FDC;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x310B680;
	constexpr ::std::ptrdiff_t dwForceAttack2 = 0x310B68C;
	constexpr ::std::ptrdiff_t dwForceBackward = 0x310B6C8;
	constexpr ::std::ptrdiff_t dwForceForward = 0x310B6D4;
	constexpr ::std::ptrdiff_t dwForceJump = 0x517D194;
	constexpr ::std::ptrdiff_t dwForceLeft = 0x310B6EC;
	constexpr ::std::ptrdiff_t dwForceRight = 0x310B6E0;
	constexpr ::std::ptrdiff_t dwGameDir = 0x631F70;
	constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x51EF4D4;
	constexpr ::std::ptrdiff_t dwGetAllClasses = 0xCED9E4;
	constexpr ::std::ptrdiff_t dwGlobalVars = 0x58BA00;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x5219F30;
	constexpr ::std::ptrdiff_t dwInput = 0x5124D70;
	constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x8A73F4;
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xCC96B4; 
	constexpr ::std::ptrdiff_t dwMouseEnable = 0xCCF200; 
	constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xCCF1D0;
	constexpr ::std::ptrdiff_t dwPlayerResource = 0x3109A3C;
	constexpr ::std::ptrdiff_t dwRadarBase = 0x510ED1C;
	constexpr ::std::ptrdiff_t dwSensitivity = 0xCCF09C;
	constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xCCF070;
	constexpr ::std::ptrdiff_t dwSetClanTag = 0x896A0;
	constexpr ::std::ptrdiff_t dwViewMatrix = 0x4CCB9F4;
	constexpr ::std::ptrdiff_t dwWeaponTable = 0x5125834;
	constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x323C;
	constexpr ::std::ptrdiff_t dwYawPtr = 0xCCEE60;
	constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xCD40A0;
	constexpr ::std::ptrdiff_t dwbSendPackets = 0xD230A;
	constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA3FC0;
	constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
	constexpr ::std::ptrdiff_t m_bDormant = 0xED;
	constexpr ::std::ptrdiff_t m_pStudioHdr = 0x294C;
	constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x510EFD0;
	constexpr ::std::ptrdiff_t m_yawClassPtr = 0xCCEE60;
	constexpr ::std::ptrdiff_t model_ambient_min = 0x58ED1C;
} 

namespace omat
{
	int dwLocalPlayer22;
}

void update()
{
	HRESULT hr = URLDownloadToFile(NULL, ("https://raw.githubusercontent.com/frk1/hazedumper/master/csgo.json"), ("netvars.json"), 0, NULL);
	if (hr != S_OK) {
		MessageBoxA(NULL, "Error occoured on connection to github!", "Error", 0);
		exit(0);
	}
	FILE* infile = fopen("netvars.json", "r");
	fseek(infile, 0, SEEK_END);
	long filesize = ftell(infile);
	char* buf = new char[filesize + 1];
	fseek(infile, 0, SEEK_SET);
	fread(buf, 1, filesize, infile);
	fclose(infile);
	buf[filesize] = '\0';
	std::stringstream ss;
	ss.str(buf);
	delete[] buf;
	Json::Value netvars;
	ss >> netvars;
	omat::dwLocalPlayer22 = netvars["signatures"]["dwLocalPlayer"].asInt();
}