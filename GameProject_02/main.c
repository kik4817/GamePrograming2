#define _CRT_SECURE_NO_WARNINGS

#include "START.h"

int main()
{
	ShowTitle();

	printf("1. 게임 시작\n2. 게임 종료\n");
	int input = 0;
	scanf("%d", &input);

	switch (input)
	{
	case 1: GameStart(); break;
	case 2: return;
	}

	
}