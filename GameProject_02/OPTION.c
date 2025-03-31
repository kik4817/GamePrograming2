#include "OPTION.h"

void GOTOXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

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
	COORD titlePos = { 10,10 };
	setTitle(title, titlePos);
	Sleep(1000);
	system("cls");
}

void ShowInfoUI(COORD infoUIPos)
{
	GOTOXY(infoUIPos.X, infoUIPos.Y);
	printf("$ : 광산");
	GOTOXY(infoUIPos.X, infoUIPos.Y+1);
	printf("광산에서 돈을 벌수 있습니다.");
	GOTOXY(infoUIPos.X, infoUIPos.Y+2);
	printf("^ : 마을");
	GOTOXY(infoUIPos.X, infoUIPos.Y+3);
	printf("무기를 업그레이드 할수 있습니다.");
	GOTOXY(infoUIPos.X, infoUIPos.Y+4);
	printf("@ : 보스탑");
	GOTOXY(infoUIPos.X, infoUIPos.Y+5);
	printf("보스를 잡으면 게임이 클리어 됩니다.");
}

void ShowMap(char(*map)[MAP_WIDTH + 1], COORD pos)
{
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		GOTOXY(pos.X, pos.Y + i);
		printf("%s", map[i]);
	}
}

COORD PLAYERCOORD(COORD pos1, COORD pos2)
{
	COORD resultPos = { pos1.X + pos2.X,pos1.Y + pos2.Y };
	return resultPos;
}


