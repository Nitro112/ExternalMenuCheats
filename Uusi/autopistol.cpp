#include "Includes.h"
#include "RCS.h"


inline int Koodi::currentWeapon()
{
	/* Reading LocalPlayer's Weapon */
	DWORD LocalWeapon = rpm<DWORD>(LocalPlayer::getLocalPlayer() + netvars::m_hActiveWeapon);
	DWORD duck = LocalWeapon & 0xFFF;
	DWORD horse = rpm<DWORD>(baseAddress + offs::dwEntityList + (duck - 1) * 16);
	int cock = rpm<int>(horse + netvars::m_iItemDefinitionIndex); /* LocalPlayer's Current Weapon */
	return cock;
}

void Koodi::autopistol()
{
	if (GetAsyncKeyState(VK_LBUTTON) && !LocalPlayer::IsGrenade(currentWeapon()))
	{
		XOR(LocalPlayer::Shoot());
	}
}