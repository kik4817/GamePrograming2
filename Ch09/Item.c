#include "Item.h"

char SwordImage1[ITEM_COL][ITEM_ROW + 1] =
{
	"     ",
	"     ",
	"  *  ",
	" * * ",
	" * * ",
	" * * ",
	"*****",
	"  *  ",
	"  *  ",
	"     "
};

char SwordImage2[ITEM_COL][ITEM_ROW + 1] =
{	
	"  *  ",
	" * * ",
	" * * ",
	" * * ",
	" * * ",
	" * * ",
	" * * ",
	"*****",
	"  *  ",
	"  *  "
};

void ExampleItem(ITEM* item, int itemindex)
{
	item->itemName = "Ότ ΌÒµε";
	item->itemImage[ITEM_ROW + 1] = SwordImage1;
}
