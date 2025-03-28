#include "Player.h"

void GetPlayerName(Player player) //, ��ǥ , COORD playerPos
{
	//GotoXY(playerPos.X, playerPos.Y);
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	printf("�÷��̾��� �̸��� �Է����ּ���.\n");
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

void SetPlayerRace(Player* playerPtr)
{
	printf("�÷��̾��� ������ �������ּ���\n");
	printf("1. �ΰ�\n2. ��ũ\n3. Ʈ��\n");
	int inputNumber = -1;
	scanf_s("%d", &inputNumber);

	switch (inputNumber)
	{
	case 1:
		playerPtr->race = HUMAN;
		return;
	case 2:
		playerPtr->race = ORC;
		return;
	case 3:
		playerPtr->race = TROLL;
		return;
	default:
		SetPlayerRace(playerPtr);
	}
}

void SetPlayer(Player* playerPtr)
{
	SetPlayerName(playerPtr); // ���ȭ
	//SetPlayerInput(playerPtr);
	SetPlayerRace(playerPtr);

	printf("\n�÷��̾� ������ �Ϸ�Ǿ����ϴ�.\n�����Ϸ��� �ƹ� ��ư�̳� �Է����ּ���.\n");
	_getch();
	system("cls");
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

void ShowPlayerInfo(Player* playerPtr, COORD uiPos)
{
	GotoXY(uiPos.X, uiPos.Y);
	printf("�÷��̾��� ����");
	GotoXY(uiPos.X, uiPos.Y + 1);
	printf("�̸� : %s", playerPtr->name);
	GotoXY(uiPos.X, uiPos.Y + 2);
	printf("��ǥ : [%d][%d]", playerPtr->pos.X,playerPtr->pos.Y);
	GotoXY(uiPos.X, uiPos.Y + 3);
	printf("������ �ش��ϴ� ���ڸ� ����Ѵ�. (1:�ΰ�, 2:��ũ, 3:Ʈ��) : %d", playerPtr->race);
}

//void ShowPlayerInfo(Player* playerPtr)
//{
//	 �̸�, ��ǥ, ����
//	Player temPlayer = *playerPtr;
//
//	if (playerPtr == NULL)
//	{
//		return;
//	}

//	printf("%s", playerPtr->name);
//	printf("�÷��̾��� �̸� : %s", ) �� �ؿ��� ����
//	GetPlayerName(*playerPtr);
//	GetPlayerPos(*playerPtr);
//	GetPlayerRace(*playerPtr);
//}