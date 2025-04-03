/*
	작성일 : 2025-04-03
	작성자 : 김인국
	주 제 : 상점 기능을 구현
*/

/*
	1. 상점을 데이터로 정의 : 아에팀을 복수 개 판다.
	2. 아이템을 정의 한다 -> 배열로 접근할 수 있게 한다.
*/

/*
	1. 2차원 배열 함수로 표현 - void 함수 이름char (*map)(길이 +1);
	2. 파일 저장 로드 시스템을 게임에 적용해줄 것 ( 구조체, 함수, 포인터)
	3. 만들고 싶은 기능 정하기, 어떻게 구현해야할지 잘 모르겠다면 질문
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
	// enum 으로 가격을 표시
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
	printf("| 순서 | 가격 |        이름      |\n");
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
	printf("유저의 인벤토리\n");
	printf("+------+------+------------------+\n");
	printf("| 순서 | 가격 |        이름      |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0;i < count;i++)
	{
		printf("| %3d  | %3d  |   %10s     |\n", i + 1, inventory[i].price, inventory[i].name);
	}

	printf("+------+------+------------------+\n");
	_getch();

}

void BuyItem(Item item, Item inventory[], int* count) // item : 상점에 있는 구매할 아이템, Inverntory : 플레이어가 저장할 인벤토리, 인벤토리의 저장 위치
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NameLength);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount, bool* gameQuit)
{
	printf("삼점에 진입했습니다.\n");
	while (true)
	{
		printf("1. 삼점 목록을 확인한다.\n2. 아이템을 구입한다.\n3. 상점을 떠난다.\n4. 게임 종료\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1:
			ShowShopTable(shop, count);
			break;
		case 2:	
			printf("구입할 아이템 번호를 입력해주세요.\n");
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
	//Item item1 = { "롱소드", 100 };
	//printf("아이템 이름 : %s\n가격 : %d\n", item1.name, item1.price);

	// 상점의 아이템 판매
	//Item Shop[10];
	////Shop[0].name =
	//strncpy(Shop[0].name, item1.name, NameLength);
	//Shop[0].price = item1.price;
	//printf("아이템 이름 : %s\n가격 : %d\n", Shop[0].name, Shop[0].price);

	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int InventoryCount = 0;
		
	AddShopData(Shop, &shopCount, "숏소드", 100);
	AddShopData(Shop, &shopCount, "롱소드", 200);
	AddShopData(Shop, &shopCount, "나무지팡이", 100);
	AddShopData(Shop, &shopCount, "포션", 10);

	
	
	//AddShopData(Shop, &shopCount, "롱소드", 100);
	//printf("아이템 이름 : %s\n가격 : %d\n", Shop[0].name, Shop[0].price);
	
	bool gameQuit = false; // gameQuit -> "true"가 되면 게임을 종료한다.
	
	while (1)
	{
		ShopPhase(Shop, Inventory, shopCount, &InventoryCount, &gameQuit);
		
		ShowInventoryTable(Inventory, InventoryCount);
		
		if (gameQuit)
		{
			break; // break 71번줄로,  return은 77번줄로
		}
	}

	printf("게임이 종료되었습니다.");
}