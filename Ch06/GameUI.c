#include "GameUI.h"

/*
	���� ��ǥ : �÷��̾��� ��ǥ�� Ű����κ��� �Է¹޾� ����Ǵ� �Լ��� �����
	1. �÷��̾� ��ǥ ���� - ����ü ����
	2. Ű���带 �Է¹޴� �Լ� - �÷��̾� ��ǥ�� �Ű� ������ �޴� �Լ� Player*
	3. Ŀ�� ��ġ�� �����ؼ� UI�� ����Ѵ�.
*/

void GameStart()
{	
	// �÷��̾��� ������ �Է�
	POS playerPos = { 0,0 };
	Player myPlayer = { "�÷��̾�", playerPos };

	while (true)
	{
		// 1. ������ �Է��� �޽��ϴ�.
		// 2. ����� ������ ȭ�鿡 ����Ѵ�.
		// 3. Sleep(100)
		InputPlayerKey(&myPlayer);
		ShowPlayerInfo(&myPlayer);
		Sleep(100);
	}
}

void InputPlayerKey(Player* playerPtr)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPtr->playerPos.posX -= 1;	
			if (playerPtr->playerPos.posX <= 0)
			{
				playerPtr->playerPos.posX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->playerPos.posX += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPtr->playerPos.posY -= 1;
			if (playerPtr->playerPos.posY <= 0)
			{
				playerPtr->playerPos.posY = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->playerPos.posY += 1;
		}
	}

}

void GotoXY(int X, int Y)
{
	COORD pos = { X,Y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowPlayerInfo(const Player* playerPtr)
{
	GotoXY(50, 1);
	printf("�÷��̾��� ����\n");

	GotoXY(50, 3);
	printf("�÷��̾��� �̸� : %s", playerPtr->playerName);

	GotoXY(50, 4);
	printf("�÷��̾��� ��ġ : (%d, %d)", playerPtr->playerPos.posX, playerPtr->playerPos.posY);

	GotoXY(playerPtr->playerPos.posX, playerPtr->playerPos.posY);
	printf("a");

}

void ItemInfo(const Item* itemPtr)
{

}
