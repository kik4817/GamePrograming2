#define _CRT_SECURE_NO_WARNINGS

#include "START.h"

int main()
{
	ShowTitle();

	printf("1. ���� ����\n2. ���� ����\n");
	int input = 0;
	scanf("%d", &input);

	switch (input)
	{
	case 1: GameStart(); break;
	case 2: return;
	}

	
}