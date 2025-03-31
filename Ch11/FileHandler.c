#include "FileHandler.h"

#define RANKFILEPATH "Rank.txt"

/*
	FILE* 선언하세요. 경로, 모드
*/

void SaveScore(char* name, int score)
{
	FILE* fp = fopen(RANKFILEPATH, "w"); // write txt(wt = w). write binary(wb)
	
	if (fp == NULL)
	{
		printf("경로에 파일이 존재하지 않습니다.");
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
		printf("경로에 파일이 존재하지 않습니다.");
		return;
	}

	// 저장할 공간이 필요하다.

	char name[4];
	int score;

	// fputc, fputs, fprintf

	fscanf(fp, "%s %d\n", name, &score);
	printf("이름 : %s, 점수 : %d\n", name, score);

	fclose(fp);
}

void GTXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}