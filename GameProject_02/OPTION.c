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
	printf("$ : ����");
	GOTOXY(infoUIPos.X, infoUIPos.Y+1);
	printf("���꿡�� ���� ���� �ֽ��ϴ�.");
	GOTOXY(infoUIPos.X, infoUIPos.Y+2);
	printf("^ : ����");
	GOTOXY(infoUIPos.X, infoUIPos.Y+3);
	printf("���⸦ ���׷��̵� �Ҽ� �ֽ��ϴ�.");
	GOTOXY(infoUIPos.X, infoUIPos.Y+4);
	printf("@ : ����ž");
	GOTOXY(infoUIPos.X, infoUIPos.Y+5);
	printf("������ ������ ������ Ŭ���� �˴ϴ�.");
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


