#include "MONEY.h"

bool isEnoughMoney(MONEY* moneyPtr)
{
	return moneyPtr->totalMoney >= moneyPtr->amount ? true : false;
}

bool isEnoughPower(PLAYER* playerPtr, int monsterHP)
{
	return playerPtr->BasicPower >= monsterHP ? true : false;
}

bool useMoney(MONEY* moneyPtr)
{
	if (isEnoughMoney(moneyPtr->price))
	{
		moneyPtr->totalMoney -= moneyPtr->price;
		printf("���� ������ �ִ� �� : %d\n", moneyPtr->totalMoney);
		return true;
	}
	else
	{
		printf("���� �����մϴ�.\n");
		return false;
	}
}

bool getMoney(PLAYER* playerPtr, MONEY* moneyPtr, int monsterHP)
{	
	if (isEnoughPower(playerPtr, monsterHP))
	{
		moneyPtr->totalMoney += moneyPtr->monsterReward;
		return true;
	}
	else
	{
		printf("���ݷ��� �����մϴ�.\n");
		return false;
	}
}

void GetMoney(PLAYER* playerPtr, MONEY* moneyPtr)
{
	moneyPtr->easyMoney = 100;
	moneyPtr->normalMoney = 500;
	moneyPtr->hardMoney = 1000;
	MONEY money;
	PLAYER player;
	int EMonster = 10;
	int NMonster = 20;
	int HMonster = 40;
	
	while (true)
	{		
		printf("\n���꿡 ���Ű� ȯ���մϴ�.\n");
		printf("1. ����\n2. ����\n3. �����\n4.������ ������\n");
		int input = 0;

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			getMoney(&player.BasicPower, &money.totalMoney, EMonster);
			moneyPtr->totalMoney += moneyPtr->easyMoney;
			printf("���� �������ϴ�. : %d\n", moneyPtr->totalMoney);
			break;
		case 2:
			getMoney(&player, &money, NMonster);
			moneyPtr->totalMoney += moneyPtr->normalMoney;
			printf("���� �������ϴ�. : %d\n", moneyPtr->totalMoney);
			break;
		case 3:
			getMoney(&player, &money, HMonster);
			moneyPtr->totalMoney += moneyPtr->hardMoney;
			printf("���� �������ϴ�. : %d\n", moneyPtr->totalMoney);
			break;
		case 4:		
			return;
		}		
	}
}
