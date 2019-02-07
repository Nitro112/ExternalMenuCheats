#include "Includes.h"
#include "RCS.h"

unsigned long __stdcall Koodi::Bunnyhop(void*)
{
	while (true)
	{
		if (GetAsyncKeyState(VK_SPACE) && XOR(LocalPlayer::getLocalFlags() == FL_ON_GROUND) || GetAsyncKeyState(VK_SPACE) && XOR(LocalPlayer::getLocalFlags() == FL_ON_GROUND_CROUCHED))
		{
			XOR(LocalPlayer::forceJump());
		}
		Sleep(1);
	}
}