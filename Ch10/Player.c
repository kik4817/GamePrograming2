#include "Player.h"

void GetPlayerName(Player player) //, 좌표 , COORD playerPos
{
	//GotoXY(playerPos.X, playerPos.Y);
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	printf("이름을 입력해주세요.\n");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10); // '\0' 최대 9
	//(*playerPtr).name
	playerPtr->name = inputName;
}

void SetPlayerInput(Player* playerPtr)
{
	// 플레이어의 입력을 판별한다. 4방향 return
	// 방향 enum 0 : 왼쪽, 1: 오른쪽, 2 : 위쪽, 3 : 아래쪽
	// enum 값

	if ((_kbhit))
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPtr->pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPtr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->pos.Y += 1;
		}
	}
}

void SelectColor(COLOR color)
{
	switch (color)
	{
	case RED:
		printf("RED 입니다.");
		break;
	case GREEN:
		printf("GREEN 입니다.");
		break;
	case BLUE:
		printf("BLUE 입니다.");
		break;
	}
}

void ShowPlayerInfo(Player* playerPtr)
{
	// 이름, 좌표, 종족
	Player temPlayer = *playerPtr;

	if (playerPtr == NULL)
	{
		return;
	}

	printf("%s", playerPtr->name);
	//printf("플레이어의 이름 : %s", ) ㄱ 밑에랑 같음
	//GetPlayerName(*playerPtr);
	//GetPlayerPos(*playerPtr);
	//GetPlayerRace(*playerPtr);
}