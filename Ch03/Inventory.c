#include "Inventory.h"

//int* inventroyPtr;

void ShowInventoryCount(int* inventory)
{
	if (inventory == NULL)
	{
		printf("인벤토리의 주소가 할당되어 있지 않습니다.\n");
	}
	else
	{
		printf("현제 인벤토리의 최대 수 : %d\n", *inventory);
	}
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	*inventory += increaseCount;
}

//void InventoryExample()
//{
//	inventroyPtr = malloc(sizeof(int));
//	*inventroyPtr = 0;
//
//	ShowInventoryCount(inventroyPtr);
//
//	free(inventroyPtr);
//}
