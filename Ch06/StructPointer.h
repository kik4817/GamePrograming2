#pragma once

#include <stdio.h>
#include <Windows.h>

// '�÷��̾�' - �̸�, ��ǥ, ������ ������

typedef struct _POS // COORD
{
	int posX;
	int posY;
}POS;

typedef struct _Player
{
	char* playerName; // "ȫ�浿"
	POS playerPos; // posX, posY | struct _POS = POS ���� 

}Player;

void Ch6Example();

void ShowPlayerInfo1(Player player);

void ShowPlayerInfo2(const Player* playerPtr);

void ShowPlayerInfo3(const Player* playerPtr);

void ChangePlayerPos(Player* playerPtr);