#pragma once
#include <stdio.h>
#include <string.h>

#define NAMELENGTH 50

// ����ü
// Player
// char name[�̸��� �ִ� ����]

typedef struct
{
	char name[NAMELENGTH];
}Player;

void SetPlayerName(char* playerNamePtr); // �÷��̾� �̸��� �����ش�.(�ּҸ� ��������� �Ѵ�.)

void SetPlayer(Player* player, const char* name); // Player*

void ShowPlayerInfo(Player* player);