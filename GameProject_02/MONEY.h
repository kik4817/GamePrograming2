#pragma once

#include "OPTION.h"

typedef struct _MONEY
{
	int totalMoney;
	int easyMoney;
	int normalMoney;
	int hardMoney;
	int amount;
	int price;
	int monsterReward;
}MONEY;

bool isEnoughMoney(MONEY* moneyPtr);
bool isEnoughPower(PLAYER* playerPtr, int monsterHP);
bool useMoney(MONEY* moneyPtr);
bool getMoney(PLAYER* playerPtr, MONEY* moneyPtr, int monsterHP);
void GetMoney(PLAYER* playerPtr, MONEY* moneyPtr);

extern PLAYER* playerPtr;