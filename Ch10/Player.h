#pragma once
/*
	������
	enum �̸�;
	�̸��� �����Ѵ�. ���ڿ� �̸��� �����Ų��. const double PI = 3.14; �ɺ��� ���

	���� : const int ONE; TWO; THREE; �������� ��ȣ
		  const int ONE; TWO; THREE; ���� �̸�
*/

#include "ConsoleGame.h"



// ������ �ڸ����� �̿��ؼ� ������ ǥ���� �մϴ�.
// 00 0000 0000 (�ĺ���ȣ)(������ ����)(�ε��� ��ȣ)

typedef enum _COLOR // ������
{
	RED, GREEN, BLUE
}COLOR;

typedef enum _Race
{
	HUMAN = 1, ORC, TROLL
}RACE;

typedef struct _Player // ����ü
{
	char* name; // �̸��� �������ų� ����
	COORD pos;  // �÷��̾��� ��ǥ�� �����ϴ� �Լ�
	RACE race;  // �÷��̾ ������ ����
}Player;

// Player | Player* ũ�Ⱑ �پ���
void GetPlayerName(Player player); //, COORD playerPos
void SetPlayerName(Player* playerPtr);
void SetPlayerInput(Player* playerPtr);
void SetPlayerRace(Player* playerPtr);

void SetPlayer(Player* playerPtr);

void SelectColor(COLOR color);

void ShowPlayerInfo(Player* playerPtr, COORD uiPos);