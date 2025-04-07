#include "START.h"

void GameStart()
{	
	MONEY* moneyPtr = 0;

	PLAYER player;
	COORD playerPos = { 1,1 };

	player.BasicPower = 20;
	SetPlayerName(&player);
	
	COORD mapPos = { 0,0 };
	ShowMap(map1, mapPos);
	player.pos = PLAYERCOORD(playerPos, mapPos);

	COORD infoPos = { 50,0 };
	COORD uiPos = { 50,10 };

	//IMAGE image1;
	//COORD imagePos = { 20,20 };
	//SetImage(&image1,imagePos, 2);

	while (true)
	{		
		GOTOXY(player.pos.X, player.pos.Y);
		printf(" ");
		SetPlayerInput(&player);
		GOTOXY(player.pos.X, player.pos.Y);
		printf("p");

		//COORD playerStagePos = { player.pos.X + mapPos.X, player.pos.Y + mapPos.Y };

		if (MoveToStage(map1, playerPos, '$'))
		{
			NEXTStage(map2, mapPos);
			player.pos = PLAYERCOORD(playerPos, mapPos);
			GetMoney(&player, &moneyPtr);
		}

		ShowPlayerUI(&player, uiPos);
		ShowInfoUI(infoPos);		
		Sleep(100);
	}

}
