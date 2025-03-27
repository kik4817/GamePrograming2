#include "MyGame.h"

void SetPlayerAsy(MyPlayerPos* playerPos)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPos->pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPos->pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPos->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPos->pos.Y += 1;
		}
	}
}

void ShowPlayerConcole(MyPlayerPos* playerPos)
{
	GotoXY(playerPos->pos.X, playerPos->pos.Y);
	printf("X");
}

