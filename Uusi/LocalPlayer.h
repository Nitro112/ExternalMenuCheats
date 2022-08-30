#pragma once

#include <windows.h>

//Just for vector and matrix shit (im lazy)
#include <d3d9.h>
#include <d3dx9.h>


typedef struct Vector {
	float x, y, z;
}Vector;


namespace LocalPlayer
{
	//Localplayer return functions
	extern DWORD			getLocalPlayer();												//Get the local player base address
	//extern DWORD			getLocalPlayerEng();
	extern D3DXVECTOR3		getLocalViewAngles();
	extern void				setLocalViewAngles(D3DXVECTOR3 angles);
	//extern D3DXVECTOR3		getLocalPos();
	extern D3DXVECTOR3		getAbsolutePos();
	extern void				setLocalPlayer();												//Set the local player base address
	//extern void				setLocalPlayerEng();
	extern D3DXVECTOR3		getLocalPunchAngles();
	extern int				getLocalFlags();												//Get the local player flags
	extern int				getLocalHealth();												//Get the local player health
	extern int				getLocalCrossID();												//Get the local player crosshair ID
	extern int				getLocalTeam();													//Get the local player team ID
	extern void				Shoot();
	extern int				getFlashMaxAlpha();
	extern void				setFlashMaxAlpha();
	extern D3DXVECTOR3		getLocalPos();													//Get the local player pos
	extern D3DXMATRIX		getLocalViewMatrix();												//Get the view matrix
	extern bool				IsGrenade(int classID);
																							//Void functions 
	extern void				forceJump();													//Force the local player to jump

	extern DWORD			LocalBaseaddress;												//Localplayer base address
	extern DWORD			LocalEngineaddress;
	extern bool				IsInGame();
	extern void				setLocalTriggerKey(const char* asd);
	extern const char*		getLocalTriggerKey();
}