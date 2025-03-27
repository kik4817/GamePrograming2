#include "Player.h"

void GetPlayerName(Player player) //, ��ǥ , COORD playerPos
{
	//GotoXY(playerPos.X, playerPos.Y);
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	printf("�̸��� �Է����ּ���.\n");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10); // '\0' �ִ� 9
	//(*playerPtr).name
	playerPtr->name = inputName;
}

void SetPlayerInput(Player* playerPtr)
{
	// �÷��̾��� �Է��� �Ǻ��Ѵ�. 4���� return
	// ���� enum 0 : ����, 1: ������, 2 : ����, 3 : �Ʒ���
	// enum ��

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
		printf("RED �Դϴ�.");
		break;
	case GREEN:
		printf("GREEN �Դϴ�.");
		break;
	case BLUE:
		printf("BLUE �Դϴ�.");
		break;
	}
}

void ShowPlayerInfo(Player* playerPtr)
{
	// �̸�, ��ǥ, ����
	Player temPlayer = *playerPtr;

	if (playerPtr == NULL)
	{
		return;
	}

	printf("%s", playerPtr->name);
	//printf("�÷��̾��� �̸� : %s", ) �� �ؿ��� ����
	//GetPlayerName(*playerPtr);
	//GetPlayerPos(*playerPtr);
	//GetPlayerRace(*playerPtr);
}