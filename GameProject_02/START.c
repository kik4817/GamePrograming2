#include "START.h"

void GameStart()
{	
	PLAYER player;
	COORD playerPos = { 1,1 };
	COORD mapPos = { 0,0 };
		
	SetPlayerName(&player);
	ShowMap(map1, mapPos);
	
	player.pos = PLAYERCOORD(playerPos, mapPos);

	COORD infoPos = { 50,0 };
	COORD uiPos = { 50,10 };



	while (true)
	{
		GOTOXY(player.pos.X, player.pos.Y);
		printf(" ");
		SetPlayerInput(&player);
		GOTOXY(player.pos.X, player.pos.Y);
		printf("p");

		ShowPlayerUI(&player, uiPos);
		ShowInfoUI(infoPos);
		Sleep(100);
	}

}
