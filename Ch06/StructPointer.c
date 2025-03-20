#include "StructPointer.h"

void Ch6Example()
{
	printf("Ch6\n\n");

	POS playerPos = { 5,5 };
	playerPos.posX = 3;
	playerPos.posY = 4;

	Player player1 = { "AAA", playerPos };

	/*printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]\n\n", 
		player1.playerName, player1.playerPos.posX, player1.playerPos.posY);*/
	
	ShowPlayerInfo1(player1);
	ChangePlayerPos(&player1);
	ShowPlayerInfo2(&player1);
	ShowPlayerInfo3(&player1);
}

void ShowPlayerInfo1(Player player1)
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]\n\n", 
		player1.playerName, player1.playerPos.posX, player1.playerPos.posY);
}

void ShowPlayerInfo2(const Player* playerPtr) // (*playerPtr).playerName
{
	// *playerPtr.playerName   ||  1 + 2  X 3 과 같다.
	// (*playerPtr).playerName || (1 + 2) X 3 과 같다.

	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]\n\n",
		(*playerPtr).playerName, (*playerPtr).playerPos.posX, (*playerPtr).playerPos.posY);
}

void ShowPlayerInfo3(const Player* playerPtr) // playerPtr->playerName
{
	printf("플레이어의 이름 : %s, 플레이어의 현재 위치 : [%d,%d]\n\n",
		playerPtr->playerName, playerPtr->playerPos.posX, playerPtr->playerPos.posY);
}

void ChangePlayerPos(Player* playerPtr)
{
	playerPtr->playerPos.posX += 1;
	playerPtr->playerPos.posY += 1;
}