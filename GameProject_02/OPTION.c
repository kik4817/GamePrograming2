#include "OPTION.h"

void GOTOXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

COORD PLAYERCOORD(COORD pos1, COORD pos2)
{
	COORD resultPos = { pos1.X + pos2.X,pos1.Y + pos2.Y };
	return resultPos;
}