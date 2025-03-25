#pragma once

// ������ ����ü
// 1. ������ �̸�
// 2. ������ ���� ( ���ݷ�, ����, ������, ���µ�)
// 3. 2���� �迭

#define ITEM_COL 10
#define ITEM_ROW 5



typedef struct _ITEM
{
	char* itemName;
	int itemstats;
	char (*itemImage)[ITEM_ROW + 1]
}ITEM;

void ExampleItem(ITEM* item, int itemindex);