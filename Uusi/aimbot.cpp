#include "Includes.h"
#include "RCS.h"

int leftclick(float dwx, float dwy) {

	INPUT input;
	input.type = INPUT_MOUSE;
	input.mi.dwExtraInfo = 0;
	input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;
	input.mi.mouseData = 0;
	input.mi.time = 0;
	input.mi.dx = dwx;
	input.mi.dy = dwy;
	SendInput(1, &input, 1);
	return 0;
}


DWORD Koodi::getPlayer()
{
	D3DXVECTOR3 w2sHead;

	DWORD plrToAim = NULL;
	double lowestDist = 900;

	for (int i = 1; i < 32; i++)
	{
		auto base = Entity::getEntBase(i);

		if (Entity::getEntTeam(base) != LocalPlayer::getLocalTeam() && Entity::isValid(base) && !Entity::getEntImmunity(base))
		{
			WorldToScreen(Entity::getEntBonePos(base, 8), w2sHead, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
			double dist = sqrt(pow((GetSystemMetrics(SM_CXSCREEN) / 2) - w2sHead.x, 2) + pow((GetSystemMetrics(SM_CYSCREEN) / 2) - w2sHead.y, 2));

			if (dist < lowestDist)
			{
				lowestDist = dist;
				plrToAim = base;
			}
		}
	}

	return plrToAim;
}


void Koodi::aimbot(DWORD playerToAimAt)
{
	D3DXVECTOR3 w2sHead;
	if (playerToAimAt != NULL)
	{
		WorldToScreen(Entity::getEntBonePos(playerToAimAt, 8), w2sHead, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
		float headX = (w2sHead.x - (GetSystemMetrics(SM_CXSCREEN) / 2)) / 2;
		float headY = (w2sHead.y - (GetSystemMetrics(SM_CYSCREEN) / 2)) / 2;
		if (Entity::getSpotted(playerToAimAt) == 1)
		{
			if (headX > -100 && headX < 100 && headY > -100 && headY < 100)
			{
				//mouse_event(MOUSEEVENTF_MOVE, headX, headY, 0, 0);
				leftclick(headX, headY);
				//SetCursorPos(headX, headY);
			}
		}
	}
}