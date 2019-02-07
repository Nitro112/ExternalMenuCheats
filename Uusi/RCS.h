#pragma once
namespace Koodi
{
	extern void aimbot(DWORD playerToAimAt);
	extern void autopistol();
	extern inline int currentWeapon();
	extern void noFlash();
	extern void ESP();
	extern DWORD getPlayer();
	extern void Chams(float r, float g, float b);
	extern unsigned long __stdcall Triggerbot(void*);
	extern unsigned long __stdcall Bunnyhop(void*);
}