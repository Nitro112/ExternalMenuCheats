#include "Includes.h"
#include "RCS.h"


void Koodi::ESP()
{
	for (int i = 0; i < 32; i++)
	{
		XOR(DWORD base = Entity::getEntBase(i));
		XOR(auto gInd = Entity::getGlowIndex(base));
		XOR(auto gP = Entity::getGlowObj());
		XOR(auto gHel = Entity::getEntHp(base));

		if (Entity::getEntTeam(base) != LocalPlayer::getLocalTeam())
		{
			XOR(Entity::glowEsp(gP, gInd, 250, gHel * 1, 0, 255));
		}
		else if (Entity::getEntTeam(base) == LocalPlayer::getLocalTeam())
		{
			XOR(Entity::glowEsp(gP, gInd, 0, 0, 255, 255));
		}
	}
}

/*void Koodi::Chams(float r, float g, float b)
{
	for (int i = 0; i < 32; i++)
	{
		auto entbase = Entity::getEntBase(i);

		if (Entity::getEntTeam(entbase) != LocalPlayer::getLocalTeam())
		{
			wpm<BYTE>(BYTE(r), entbase + 0x70);
			wpm<BYTE>(BYTE(g), entbase + 0x71);
			wpm<BYTE>(BYTE(b), entbase + 0x72);
		}
		else if (Entity::getEntTeam(entbase) == LocalPlayer::getLocalTeam())
		{
			wpm<BYTE>(BYTE(0), entbase + 0x70);
			wpm<BYTE>(BYTE(0), entbase + 0x71);
			wpm<BYTE>(BYTE(180), entbase + 0x72);
		}
	}
}*/
