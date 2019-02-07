#include "includes.h"

DWORD LocalPlayer::LocalBaseaddress = 0x33B40000;
DWORD LocalPlayer::LocalEngineaddress = 0x0;
const char* triggerKey;

DWORD LocalPlayer::getLocalPlayer()
{
	return LocalPlayer::LocalBaseaddress;
}

DWORD LocalPlayer::getLocalPlayerEng()
{
	return LocalPlayer::LocalEngineaddress;
}

void LocalPlayer::setLocalPlayer()
{
	LocalPlayer::LocalBaseaddress = rpm<DWORD>(baseAddress + omat::dwLocalPlayer22);
}

void LocalPlayer::setLocalPlayerEng()
{
	LocalPlayer::LocalEngineaddress = rpm<DWORD>(engineAddress + offs::dwClientState);
}

int LocalPlayer::getLocalFlags()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + netvars::m_fFlags);
}

D3DXVECTOR3 LocalPlayer::getLocalViewAngles()
{
	return rpm<D3DXVECTOR3>(LocalPlayer::getLocalPlayerEng() + offs::dwClientState_ViewAngles);
}

D3DXVECTOR3 LocalPlayer::getLocalPos()
{
	return rpm<D3DXVECTOR3>(LocalPlayer::getLocalPlayer() + netvars::m_vecOrigin);
}

D3DXVECTOR3 LocalPlayer::getAbsolutePos()
{
	D3DXVECTOR3 position = getLocalPos();
	position.z += rpm<float>(LocalPlayer::getLocalPlayer() + netvars::m_vecViewOffset);
	return position;
}

D3DXVECTOR3 LocalPlayer::getLocalPunchAngles()
{
	return rpm<D3DXVECTOR3>(LocalPlayer::getLocalPlayer() + netvars::m_aimPunchAngle);
}

void LocalPlayer::setLocalViewAngles(D3DXVECTOR3 angles)
{
	wpm<D3DXVECTOR3>(angles, LocalPlayer::getLocalPlayerEng() + offs::dwClientState_ViewAngles);
}

int LocalPlayer::getLocalHealth()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + netvars::m_iHealth);
}

int LocalPlayer::getLocalTeam()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + netvars::m_iTeamNum);
}

int LocalPlayer::getFlashMaxAlpha()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + netvars::m_flFlashMaxAlpha);
}


void LocalPlayer::setFlashMaxAlpha()
{
	return wpm<int>(0, LocalBaseaddress + netvars::m_flFlashMaxAlpha);
}

void LocalPlayer::Shoot()
{
	wpm<int>(5, baseAddress + offs::dwForceAttack);
	Sleep(10);
	wpm<int>(4, baseAddress + offs::dwForceAttack);
}

void LocalPlayer::forceJump()
{
	wpm<int>(1, baseAddress + offs::dwForceJump);
	Sleep(35);
	wpm<int>(0, baseAddress + offs::dwForceJump);
}

int LocalPlayer::getLocalCrossID()
{
	auto temp = rpm<int>(LocalPlayer::getLocalPlayer() + netvars::m_iCrosshairId);
	if (temp <= 0 || temp > 32)
		return -1;
	return temp;
}

D3DXMATRIX	LocalPlayer::getViewMatrix()
{
	return rpm<D3DXMATRIX>(baseAddress + offs::dwViewMatrix);
}

bool LocalPlayer::IsInGame()
{
	int getInfo = rpm<int>(engineAddress + offs::dwClientState + offs::dwClientState_State);
	if (getInfo == 6)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool LocalPlayer::IsGrenade(int classID)
{
	if (classID == 49 || classID == 44  || classID == 43 || classID == 45 || classID == 47 || classID == 48)
		return true;
	else
		return false;
}

void LocalPlayer::setLocalTriggerKey(const char* asd)
{
	triggerKey = asd;
}

const char* LocalPlayer::getLocalTriggerKey()
{
	return triggerKey;
}