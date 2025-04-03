/*
	�ۼ��� : 2025-04-03
	�ۼ��� : ���α�
	�� �� : ���� ����� ����
*/

/*
	1. ������ �����ͷ� ���� : �ƿ����� ���� �� �Ǵ�.
	2. �������� ���� �Ѵ� -> �迭�� ������ �� �ְ� �Ѵ�.
*/

/*
	1. 2���� �迭 �Լ��� ǥ�� - void �Լ� �̸�char (*map)(���� +1);
	2. ���� ���� �ε� �ý����� ���ӿ� �������� �� ( ����ü, �Լ�, ������)
	3. ����� ���� ��� ���ϱ�, ��� �����ؾ����� �� �𸣰ڴٸ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#define NameLength 20

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

typedef struct
{
	char name[NameLength];
	int price;
	// enum ���� ������ ǥ��
}Item;

void AddShopData(Item shop[], int* shopCount, const char* name, int price)
{
	strncpy(shop[*shopCount].name, name, NameLength);
	shop[*shopCount].price = price;
	(*shopCount)++;
}

void ShowShopTable(Item shop[], int count)
{	
	printf("+------+------+------------------+\n");
	printf("| ���� | ���� |        �̸�      |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0;i < count;i++)
	{
		printf("| %3d  | %3d  |   %10s     |\n", i + 1, shop[i].price, shop[i].name);
	}
		
	printf("+------+------+------------------+\n");
	_getch();

}

void ShowInventoryTable(Item inventory[], int count)
{
	printf("������ �κ��丮\n");
	printf("+------+------+------------------+\n");
	printf("| ���� | ���� |        �̸�      |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0;i < count;i++)
	{
		printf("| %3d  | %3d  |   %10s     |\n", i + 1, inventory[i].price, inventory[i].name);
	}

	printf("+------+------+------------------+\n");
	_getch();

}

void BuyItem(Item item, Item inventory[], int* count) // item : ������ �ִ� ������ ������, Inverntory : �÷��̾ ������ �κ��丮, �κ��丮�� ���� ��ġ
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NameLength);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount, bool* gameQuit)
{
	printf("������ �����߽��ϴ�.\n");
	while (true)
	{
		printf("1. ���� ����� Ȯ���Ѵ�.\n2. �������� �����Ѵ�.\n3. ������ ������.\n4. ���� ����\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1:
			ShowShopTable(shop, count);
			break;
		case 2:	
			printf("������ ������ ��ȣ�� �Է����ּ���.\n");
			scanf("%d", &itemIndex);
			BuyItem(shop[itemIndex-1], inventory, inventoryCount);
			break;
		case 3:	
			return;
		case 4:	
			*gameQuit = true;
			return;
		}
	}
}

int main()
{
	//Item item1 = { "�ռҵ�", 100 };
	//printf("������ �̸� : %s\n���� : %d\n", item1.name, item1.price);

	// ������ ������ �Ǹ�
	//Item Shop[10];
	////Shop[0].name =
	//strncpy(Shop[0].name, item1.name, NameLength);
	//Shop[0].price = item1.price;
	//printf("������ �̸� : %s\n���� : %d\n", Shop[0].name, Shop[0].price);

	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int InventoryCount = 0;
		
	AddShopData(Shop, &shopCount, "���ҵ�", 100);
	AddShopData(Shop, &shopCount, "�ռҵ�", 200);
	AddShopData(Shop, &shopCount, "����������", 100);
	AddShopData(Shop, &shopCount, "����", 10);

	
	
	//AddShopData(Shop, &shopCount, "�ռҵ�", 100);
	//printf("������ �̸� : %s\n���� : %d\n", Shop[0].name, Shop[0].price);
	
	bool gameQuit = false; // gameQuit -> "true"�� �Ǹ� ������ �����Ѵ�.
	
	while (1)
	{
		ShopPhase(Shop, Inventory, shopCount, &InventoryCount, &gameQuit);
		
		ShowInventoryTable(Inventory, InventoryCount);
		
		if (gameQuit)
		{
			break; // break 71���ٷ�,  return�� 77���ٷ�
		}
	}

	printf("������ ����Ǿ����ϴ�.");
}