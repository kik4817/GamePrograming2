#include "FileHandler.h"

#define RANKFILEPATH "Rank.txt"

/*
	FILE* �����ϼ���. ���, ���
*/

void SaveScore(char* name, int score)
{
	FILE* fp = fopen(RANKFILEPATH, "w"); // write txt(wt = w). write binary(wb)
	
	if (fp == NULL)
	{
		printf("��ο� ������ �������� �ʽ��ϴ�.");
		return;
	}

	// fputc, fputs, fprintf
	
	//char tempData[10] = 
	//fputs()

	fprintf(fp, "%s %d\n", name, score);

	fclose(fp);

}

void LoadRank()
{
	FILE* fp = fopen(RANKFILEPATH, "r");

	if (fp == NULL)
	{
		printf("��ο� ������ �������� �ʽ��ϴ�.");
		return;
	}

	// ������ ������ �ʿ��ϴ�.

	char name[4];
	int score;

	// fputc, fputs, fprintf

	fscanf(fp, "%s %d\n", name, &score);
	printf("�̸� : %s, ���� : %d\n", name, score);

	fclose(fp);
}

void GTXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}