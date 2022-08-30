#include "Includes.h"
DWORD LocalPlayer::LocalBaseaddress = 0;
const char* triggerKey;

DWORD LocalPlayer::getLocalPlayer()
{
	return LocalPlayer::LocalBaseaddress;
}

void LocalPlayer::setLocalPlayer()
{
	LocalPlayer::LocalBaseaddress = rpm<DWORD>(baseAddress + g_offsets::dwLocalPlayer);
}

int LocalPlayer::getLocalFlags()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + g_netvars::m_fFlags);
}

D3DXVECTOR3 LocalPlayer::getLocalViewAngles()
{
	return rpm<D3DXVECTOR3>(clientState + g_offsets::dwClientState_ViewAngles);
}

D3DXVECTOR3 LocalPlayer::getLocalPos()
{
	return rpm<D3DXVECTOR3>(LocalPlayer::getLocalPlayer() + g_netvars::m_vecOrigin);
}

D3DXVECTOR3 LocalPlayer::getAbsolutePos()
{
	D3DXVECTOR3 position = getLocalPos();
	position.z += rpm<float>(LocalPlayer::getLocalPlayer() + g_netvars::m_vecViewOffset);
	return position;
}

D3DXVECTOR3 LocalPlayer::getLocalPunchAngles()
{
	return rpm<D3DXVECTOR3>(LocalPlayer::getLocalPlayer() + g_netvars::m_aimPunchAngle);
}

void LocalPlayer::setLocalViewAngles(D3DXVECTOR3 angles)
{
	wpm<D3DXVECTOR3>(angles, clientState + g_offsets::dwClientState_ViewAngles);
}

int LocalPlayer::getLocalHealth()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + g_netvars::m_iHealth);
}

int LocalPlayer::getLocalTeam()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + g_netvars::m_iTeamNum);
}

int LocalPlayer::getFlashMaxAlpha()
{
	return rpm<int>(LocalPlayer::getLocalPlayer() + g_netvars::m_flFlashMaxAlpha);
}


void LocalPlayer::setFlashMaxAlpha()
{
	return wpm<int>(0, LocalBaseaddress + g_netvars::m_flFlashMaxAlpha);
}

void LocalPlayer::Shoot()
{
	wpm<int>(5, baseAddress + g_offsets::dwForceAttack);
	Sleep(10);
	wpm<int>(4, baseAddress + g_offsets::dwForceAttack);
}

void LocalPlayer::forceJump()
{
	wpm<int>(1, baseAddress + g_offsets::dwForceJump);
	Sleep(35);
	wpm<int>(0, baseAddress + g_offsets::dwForceJump);
}

int LocalPlayer::getLocalCrossID()
{
	auto temp = rpm<int>(LocalPlayer::getLocalPlayer() + g_netvars::m_iCrosshairId);
	if (temp <= 0 || temp > 32)
		return -1;
	return temp;
}

D3DXMATRIX	LocalPlayer::getLocalViewMatrix()
{
	return rpm<D3DXMATRIX>(baseAddress + g_offsets::dwViewMatrix);
}

bool LocalPlayer::IsInGame()
{
	int getInfo = rpm<int>(engineAddress + g_offsets::dwClientState + g_offsets::dwClientState_State);
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