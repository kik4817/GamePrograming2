#pragma once
#include <stdio.h>    // printf, scanf
#include <Windows.h>  // �ܼ� ����
#include <conio.h>    // getch
#include <time.h>     // time
#include <stdlib.h>   // srand rand
#include <stdbool.h>  // true, false

typedef struct
{
	char* playerName;
	COORD pos;
}Player;

typedef struct
{
	char* itemName;
	COORD pos;
	BOOL hasItem;
	// �̹���;
}Item;

// ����ü Stage - 2���� �迭

void GetPlayerInput(Player* playerPtr);
void ShowPlayer(const Player* playerPtr);

void InteractWithItem(Player* playerPtr, Item* itemPtr);

void ShowPlayerItemInfo(Item* itemPtr);
void showPlayerAllItemInfo(Item* itemArray, int length);
void ShowAllItem(Item itemArray[], int length);

void GoXY(int posX, int posY);
//void GOXY(COORD pos);
void GoXYCOORD(COORD pos);

// �� ���� ��ǥ�� �ŰԺ����� �޿ͼ� ���ϴ� �Լ�
BOOL ComPareCOORD(COORD pos1, COORD pos2);
