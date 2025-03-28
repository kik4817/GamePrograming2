#include "Player.h"

void GetPlayerName(Player player) //, 좌표 , COORD playerPos
{
	//GotoXY(playerPos.X, playerPos.Y);
	printf("%s", player.name);
}

void SetPlayerName(Player* playerPtr)
{
	printf("플레이어의 이름을 입력해주세요.\n");
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

void SetPlayerRace(Player* playerPtr)
{
	printf("플레이어이 종족을 선택해주세요\n");
	printf("1. 인간\n2. 오크\n3. 트롤\n");
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
	SetPlayerName(playerPtr); // 모듈화
	//SetPlayerInput(playerPtr);
	SetPlayerRace(playerPtr);

	printf("\n플레이어 설정이 완료되었습니다.\n진행하려면 아무 버튼이나 입렵해주세요.\n");
	_getch();
	system("cls");
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

void ShowPlayerInfo(Player* playerPtr, COORD uiPos)
{
	GotoXY(uiPos.X, uiPos.Y);
	printf("플레이어의 정보");
	GotoXY(uiPos.X, uiPos.Y + 1);
	printf("이름 : %s", playerPtr->name);
	GotoXY(uiPos.X, uiPos.Y + 2);
	printf("좌표 : [%d][%d]", playerPtr->pos.X,playerPtr->pos.Y);
	GotoXY(uiPos.X, uiPos.Y + 3);
	printf("종족에 해당하는 숫자를 출력한다. (1:인간, 2:오크, 3:트롤) : %d", playerPtr->race);
}

//void ShowPlayerInfo(Player* playerPtr)
//{
//	 이름, 좌표, 종족
//	Player temPlayer = *playerPtr;
//
//	if (playerPtr == NULL)
//	{
//		return;
//	}

//	printf("%s", playerPtr->name);
//	printf("플레이어의 이름 : %s", ) ㄱ 밑에랑 같음
//	GetPlayerName(*playerPtr);
//	GetPlayerPos(*playerPtr);
//	GetPlayerRace(*playerPtr);
//}