#include "TITLE.h"

char title[MAP_HEIGHT][MAP_WIDTH + 1] =
{
	" #####  ####  #### ",
	"   #   #     #     ",
	"   #   #     # ### ",
	"   #   #     #  ## ",
	"   #    ####  ## # "
};

void setTitle(char(*title)[MAP_WIDTH + 1], COORD titlePos)
{
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		GOTOXY(titlePos.X, titlePos.Y + i);
		printf("%s", title[i]);
	}

}

void ShowTitle()
{
	COORD titlePos = { 10,5 };
	setTitle(title, titlePos);
	Sleep(1000);
	system("cls");	
}