#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RANKFILEPATH "Rank.txt"
#define MAXPLAYER 10
#define MAXLENGTH 50

typedef struct _Rank
{
	int order;
	int score;
	char name[MAXLENGTH]; // 이름 제한
}Rank;

void FileSaveTemp();

void FileSave(const char* fileName, Rank rank[], int count);

void FileLoadtemp();

int LoadRank(const char* fileName, Rank rank[]); // 메모장에 저장된 count를 반환하는 함수. void로 하면 int를 다시 만들어야함

//void PrintRanking(Rank rank);
void PrintRanking(Rank rank[], int count); // count수 만큼 랭킹을 출력하는 함수

void AddRank(Rank rank[], int* order, const char* name, int score);

void AddRankData(Rank rank[], int* order);

void DeleteRankData(Rank rank[], int* order, int index); // 컴퓨터는 갯수를 모르기때문에 최대치를 표현

int FineMaxIndex(Rank rank[], int size); 