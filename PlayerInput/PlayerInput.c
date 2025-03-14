#include "PlayerInput.h"

int playerX = 0;
int playerY = 0;

void GetInput(int* playerX, int* playerY)
{
	while (1)
	{
		if (_kbhit()
		{
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				*playerX--;
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				*playerX++;
			}
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				*playerY--;
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				*playerY++;
			}
		}
	}
}
