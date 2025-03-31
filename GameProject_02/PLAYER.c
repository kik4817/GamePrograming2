#include "OPTION.h"
#include "PLAYER.h"

void SetPlayerName(PLAYER* playerPtr)
{
	printf("이름을 입력해주세요.\n");
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
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->pos.X += 1;
			if (playerPtr->pos.X >= MAP_WIDTH)
			{
				playerPtr->pos.X = 19;
			}
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

void ShowPlayerUI(PLAYER* playerPtr, COORD UIPos)
{
	GOTOXY(UIPos.X, UIPos.Y);
	printf("플레이어 정보");
	GOTOXY(UIPos.X, UIPos.Y+1);
	printf("이름 : %s", playerPtr->name);
}

BOOL MoveTo(COORD pos1, COORD pos2)
{
	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ShowMoveTo(char(*map)[MAP_WIDTH + 1], PLAYER* playerPtr, char moveTo)
{
	
}
