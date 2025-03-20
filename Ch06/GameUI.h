#pragma once

#include <stdio.h>    // printf, scanf
#include <Windows.h>  // 콘솔 관련
#include <conio.h>    // getch
#include <time.h>     // time
#include <stdlib.h>   // srand rand
#include <stdbool.h>  // true, false
#include "StructPointer.h"

/*
	아이템 구조체
	아이템 이름
	아이템 좌표
	아이템 레벨
	아이템 공격력 강화보너스
*/

typedef struct _Item
{
	char* ItemName;
	int ItemLv;
	int ItemBaseAttack;

}Item;


// 아이템의 좌표 플레이어의 좌표 비고해서 
// (itemX playerX 비교, itemY playerY 비교 둘다 같으면) -> 아이템획득

void GameStart();

void InputPlayerKey(Player* playerPtr);

//void GotoXY(POS pos);

void GotoXY(int X, int Y);

void ShowPlayerInfo(const Player* playerPtr);

void ItemInfo(const Item* itemPtr);