/*
	�ۼ��� : 2025-04-01 ~ 2025-04-02
	�ۼ��� : ���α�
	�� �� : ��ŷ �ý��� ���̺� �ε�
*/

/*
	���� �����
	1. fopen() - fclose() - FILE* fp
	2. ���� : fputc, fputs    // fprintf()
	3. �ҷ����� : fgetc, fgets // fscanf()
	4. ����ü�� �̿��ؼ� ����Ƽ���� �����ϰ� �ʹ�.
*/

#include "Rank.h"
#include <stdlib.h>
#include <conio.h>

int main()
{
	/*printf("1. ������ �����ϴ� �Լ� ����\n");
	FileSaveTemp();
	printf("2. ������ �о���� �Լ� ����\n");
	FileLoadtemp();
	printf("3. ��ũ ����ü�� ����\n\n");*/

	//Rank ranks[MAXPLAYER];
	//int count = 0;
	//count++;
	//ranks[0].order = count;
	//ranks[0].score = 100;
	//strncpy(ranks[0].name, "Bear", MAXLENGTH);
	//count++;
	//ranks[1].order = count;
	//ranks[1].score = 100;
	//strncpy(ranks[1].name, "Candy", MAXLENGTH);
	//PrintRanking(ranks, count);

	Rank ranks[MAXPLAYER];
	int order = 0;
	//AddRank(ranks, &order, "Bear", 100);
	//AddRank(ranks, &order, "Candy", 150);
	//AddRank(ranks, &order, "Danaaay1", 70);
	//AddRank(ranks, &order, "Danaaay2", 70);
	//AddRank(ranks, &order, "Danaaay3", 70);
	//AddRank(ranks, &order, "Danaaay4", 70);
	/*AddRank(ranks, &order, "Danaaay5", 70);
	AddRank(ranks, &order, "Danaaay6", 70);
	AddRank(ranks, &order, "Danaaay7", 70);
	AddRank(ranks, &order, "Dany", 70);
	AddRank(ranks, &order, "Dany1", 70);*/

	//order = LoadRank(RANKFILEPATH, ranks);

	// 1. ������ ������ �ε��ϴ� ȭ���������Ѵ�.

	printf("�����͸� �ҷ����� ���Դϴ�.\n");
	for (int i = 0;i < 5;i++)
	{
		printf("...");
		Sleep(100);
	}
	printf(".........\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);
	printf("�ε��� �Ϸ�Ǿ����ϴ�. Ű�� �Է����ּ���.\n");
	_getch();
	system("cls");

	int firstRank = 0; // ��ŷ ù��°�� ����Ų��.

	while (1)
	{
		printf("1. ������ �߰�\n2. ��ŷ Ȯ��\n3. ���α׷� ����\n4. ��ŷ ������ ����\n5. 1���� ������ ���\n");
		int input = 0;
		scanf("%d", &input);

		switch (input)
		{
		case 1: system("cls");AddRankData(ranks, &order);system("cls"); break;
		case 2: system("cls");PrintRanking(ranks, order);break;
		case 3: FileSave(RANKFILEPATH, ranks, order); return;
		case 4: 
			DeleteRankData(ranks, &order, 1);
			break;
		case 5: 
			system("cls");
			firstRank = FineMaxIndex(ranks, order);
			printf("��ŷ 1��\n�̸� : %s ���� : %d\n", ranks[firstRank].name, ranks[firstRank].score);
			break;
		default:
			printf("�߸��� �Է��Դϴ�. Ű�� �Է����ּ���.\n");
			_getch();
			system("cls");
			break;

		}


	}

	//FileSave(RANKFILEPATH, ranks, order);
	//PrintRanking(ranks, order); // �����͸� �����ִ� �ڵ�
	//AddRankData(ranks, &order);
	//system("cls");
	//PrintRanking(ranks, order);

}