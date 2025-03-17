#include "Input.h"

/*
	while(1)
	{
		if(_kbhit){if(GetKey...
	}
*/

void GetPlayerInput(int* playerX, int* playerY, int maxX)
{
	if (_kbhit()) // Ű�� �Է����� �� �����Ѵ�
	{
		// x��ǥ
		if (GetAsyncKeyState(VK_LEFT))
		{
			// playerX ��ǥ�� -1 ���ش�. (��)
			*playerX -= 1;

			if (*playerX <= 0)
			{
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*playerX += 1;

			if (*playerX >= maxX)
			{
				*playerX = maxX;
			}
		}
		// y��ǥ
		else if (GetAsyncKeyState(VK_UP))
		{
			// playerX ��ǥ�� -1 ���ش�. (��)
			*playerY -= 1;

			if (*playerY <= 0)
			{
				*playerY = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			*playerY += 1;

			/*if (*playerY >= maxX)
			{
				*playerY = maxX;
			}*/
		}
	}
}

void InputExample()
{
	int playerX = 0;
	int playerY = 0;
	int maxX = 10;

	while (1)
	{
		GetPlayerInput(&playerX, &playerY, maxX);

		printf("x, y ��ǥ : %d, %d\n", playerX, playerY);

		Sleep(100);
	}
}
