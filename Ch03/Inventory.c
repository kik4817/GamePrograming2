#include "Inventory.h"

//int* inventroyPtr;

void ShowInventoryCount(int* inventory)
{
	if (inventory == NULL)
	{
		printf("�κ��丮�� �ּҰ� �Ҵ�Ǿ� ���� �ʽ��ϴ�.\n");
	}
	else
	{
		printf("���� �κ��丮�� �ִ� �� : %d\n", *inventory);
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
