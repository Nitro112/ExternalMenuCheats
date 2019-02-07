#include "Includes.h"
#include "RCS.h"

unsigned long __stdcall Koodi::Triggerbot(void*)
{
	int key = VK_MENU;
	while (true)
	{
		if (LocalPlayer::getLocalTriggerKey() == "Left Alt")
		{
			key = VK_MENU;
		}
		if (LocalPlayer::getLocalTriggerKey() == "Scroll Down")
		{
			key = VK_MBUTTON;
		}
		if (LocalPlayer::getLocalTriggerKey() == "Mouse2")
		{
			key = VK_RBUTTON;
		}

		if (GetAsyncKeyState(key) & 0x8000 && XOR(LocalPlayer::getLocalCrossID()) > 0 && XOR(LocalPlayer::getLocalCrossID()) < 32)
		{
			XOR(LocalPlayer::Shoot());
		}
		
		Sleep(1);
	}
}
