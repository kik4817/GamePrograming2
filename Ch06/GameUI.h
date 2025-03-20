#pragma once

#include <stdio.h>    // printf, scanf
#include <Windows.h>  // �ܼ� ����
#include <conio.h>    // getch
#include <time.h>     // time
#include <stdlib.h>   // srand rand
#include <stdbool.h>  // true, false
#include "StructPointer.h"

/*
	������ ����ü
	������ �̸�
	������ ��ǥ
	������ ����
	������ ���ݷ� ��ȭ���ʽ�
*/

typedef struct _Item
{
	char* ItemName;
	int ItemLv;
	int ItemBaseAttack;

}Item;


// �������� ��ǥ �÷��̾��� ��ǥ ����ؼ� 
// (itemX playerX ��, itemY playerY �� �Ѵ� ������) -> ������ȹ��

void GameStart();

void InputPlayerKey(Player* playerPtr);

//void GotoXY(POS pos);

void GotoXY(int X, int Y);

void ShowPlayerInfo(const Player* playerPtr);

void ItemInfo(const Item* itemPtr);