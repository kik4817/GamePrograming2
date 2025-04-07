#include "OPTION.h"
#include "PLAYER.h"

void SetPlayerName(PLAYER* playerPtr)
{
	printf("플레이어의 이름을 입력해주세요.\n");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10);
	playerPtr->name = inputName;
	system("cls");
}

void SetPlayerInput(PLAYER* playerPtr)
{
	if ((_kbhit))
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPtr->pos.X -= 1;
			if (playerPtr->pos.X <= 0)
			{
				playerPtr->pos.X = 1;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->pos.X += 1;
			if (playerPtr->pos.X >= MAP_WIDTH-1)
			{
				playerPtr->pos.X = 18;
			}
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPtr->pos.Y -= 1;
			if (playerPtr->pos.Y <= 0)
			{
				playerPtr->pos.Y = 1;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->pos.Y += 1;
			if (playerPtr->pos.Y >= MAP_HEIGHT-1)
			{
				playerPtr->pos.Y = 8;
			}
		}
	}
}

void ShowPlayerUI(PLAYER* playerPtr, COORD UIPos)
{
	GOTOXY(UIPos.X, UIPos.Y);
	printf("플레이어 정보");
	GOTOXY(UIPos.X, UIPos.Y+1);
	printf("이름 : %s", playerPtr->name);	
}
