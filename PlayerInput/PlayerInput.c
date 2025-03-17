#include "PlayerInput.h"

void GetInput(int* playerX, int* playerY)
{
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		*playerX -= 1;
		if (*playerX <= 0)
		{
			*playerX = 0;
		}
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		*playerX += 1;

	}
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		*playerY -= 1;
		if (*playerY <= 0)
		{
			*playerY = 0;
		}
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		*playerY += 1;
	}
}

void InputExa()
{
	int playerX = 0;
	int playerY = 0;
	while (1)
	{
		GetInput(&playerX, &playerY);

		printf("x, y ÁÂÇ¥ : %d, %d\n", playerX, playerY);

		Sleep(100);

	}
}
