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
	char name[MAXLENGTH]; // �̸� ����
}Rank;

void FileSaveTemp();

void FileSave(const char* fileName, Rank rank[], int count);

void FileLoadtemp();

int LoadRank(const char* fileName, Rank rank[]); // �޸��忡 ����� count�� ��ȯ�ϴ� �Լ�. void�� �ϸ� int�� �ٽ� ��������

//void PrintRanking(Rank rank);
void PrintRanking(Rank rank[], int count); // count�� ��ŭ ��ŷ�� ����ϴ� �Լ�

void AddRank(Rank rank[], int* order, const char* name, int score);

void AddRankData(Rank rank[], int* order);

void DeleteRankData(Rank rank[], int* order, int index); // ��ǻ�ʹ� ������ �𸣱⶧���� �ִ�ġ�� ǥ��

int FineMaxIndex(Rank rank[], int size); 