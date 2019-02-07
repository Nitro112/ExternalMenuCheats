#include "Includes.h"
#include "RCS.h"

void Koodi::noFlash()
{
	if (XOR(LocalPlayer::getFlashMaxAlpha()) > 0)
	{
		XOR(LocalPlayer::setFlashMaxAlpha());
		Sleep(1);
	}
}