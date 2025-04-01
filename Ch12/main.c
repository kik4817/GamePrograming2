/*
	�ۼ��� : 2025-04-01
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

int main()
{
	printf("1. ������ �����ϴ� �Լ� ����\n");
	//FileSaveTemp();
	printf("2. ������ �о���� �Լ� ����\n");
	FileLoadtemp();
	printf("3. ��ũ ����ü�� ����\n\n");

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
	AddRank(ranks, &order, "Bear", 100);
	AddRank(ranks, &order, "Candy", 150);
	AddRank(ranks, &order, "Danaaay1", 70);
	AddRank(ranks, &order, "Danaaay2", 70);
	AddRank(ranks, &order, "Danaaay3", 70);
	AddRank(ranks, &order, "Danaaay4", 70);
	/*AddRank(ranks, &order, "Danaaay5", 70);
	AddRank(ranks, &order, "Danaaay6", 70);
	AddRank(ranks, &order, "Danaaay7", 70);
	AddRank(ranks, &order, "Dany", 70);
	AddRank(ranks, &order, "Dany1", 70);*/
	
	//order = LoadRank(RANKFILEPATH, ranks);

	if (order < MAXPLAYER)
	{
		printf("���ο� �÷��̾��� �̸��� �Է��ϼ��� : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("������ �Է��ϼ��� : \n");
		scanf("%d", &newScore);

		AddRank(ranks, &order, newName, newScore);
	}

	PrintRanking(ranks, order);
	
	FileSave(RANKFILEPATH, ranks, order);


}