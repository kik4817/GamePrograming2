#include "Rank.h"

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	//FILE* fp = fopen("Rank.txt", "w"); ����� �Է��ؼ� ���� ����
	
	// fputc - ���ڷ� ����
	/*fputc('a', fp);
	fputc('\n', fp);
	fputc('a', fp);
	fputc('a', fp);*/
	
	// fputs - ���ڿ��� ����
	//fputs("a\naa", fp);
	
	// fprintf - ����ü�� �ѹ��� ����
	fprintf(fp, "%d %d %s", 1, 100, "Alice");

	fclose(fp);
}


void FileSave(const char* fileName, Rank rank[], int count)
{
	FILE* fptr = fopen(fileName, "w");
	for (int i = 0; i < count; i++)
	{
		fprintf(fptr, "%d %d %s\n", rank[i].order,rank[i].score,rank[i].name);
	}
	fclose(fptr);
}

void FileLoadtemp()
{
	FILE* fp2 = fopen("text.txt", "r");
	
	/*char mString[12];
	fgets(mString, 12, fp2);
	printf("%s\n", mString);*/

	int order = 0;
	int score = 0;
	char name[MAXLENGTH];
	fscanf(fp2, "%d %d %s", &order, &score, name);
	printf("���� : %d ���� : %d �̸� : %s", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;
	
	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL)
	{
		printf("���� ���� ����\n");
		return;
	}
		
	//while (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF) // EOF ������ ������ ���� �о���� �ڵ�
	//{
	//	count++;
	//}

	while (1)
	{
		if (fscanf(fptr, "%d %d %s", &rank[count].order, &rank[count].score, rank[count].name) == EOF)
		{
			break;
		}
		count++;
	}
	
	fclose(fptr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// cout Ƚ����ŭ �ݺ��ϴ� �ڵ尡 �ʿ��ϴ�.
	//printf("%d, %d, %c", rank[0].order, rank[0].score, rank[0].name);
	//printf("%d, %d, %c", rank[1].order, rank[1].score, rank[1].name);
	
	// �׵θ� �����
	printf("+------+------+------------------+\n");
	printf("| ���� | ���� |        �̸�      |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0;i < count;i++)
	{
		printf("| %3d  | %3d  |   %10s     |\n", i + 1, rank[i].score, rank[i].name);
	}

	// �׵θ� �����
	printf("+------+------+------------------+\n");

}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXPLAYER)
	{
		rank[*order].order = *order + 1;
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1); // NULL�� ���ԵǾ��־� -1�� �������
		rank[*order].name[MAXLENGTH-1] = '\0';
		(*order)++;
	}
	else
	{
		printf("�ִ� �÷��̾� ���� ���� �ʰ��Ͽ����ϴ�.\n");
	}
}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER) // 1. *order
	{
		printf("���ο� �÷��̾��� �̸��� �Է��ϼ��� : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("������ �Է��ϼ��� : \n");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore); // 2. ranks -> rank // 3. &order �տ� &�����
	}
}

void DeleteRankData(Rank rank[], int* order, int index)
{
	// 1. order�� �迭�� ���� : -1 ����� �Ѵ�.
	// 2. ����� ���� ������ ��������� �Ѵ�. order

	if (index < 0)
	{
		printf("��ŷ�� �����Ͱ� ��ϵǾ� ���� �ʽ��ϴ�.\n");
		return;
	}
	if (index >= *order)
	{
		printf("�߸��� �ε��� �Դϴ�.\n");
		return;
	}

	for (int i = index; i < *order-1;i++)
	{
		rank[i] = rank[i + 1];
	}
	
	(*order)--; // �����͸� �����߱� ������ ���� �������� �� ������ �����Ѵ�.

	/*rank[0] = rank[1];
	rank[1] = rank[2];
	rank[2] = rank[3];
	rank[3] = rank[4];

	rank[0];
	rank[1];
	rank[2] = rank[3];*/
}

int FineMaxIndex(Rank rank[], int size)
{
	int index = 0; // �ӽ÷� index �����Ѵ�

	// Rank������ �ȿ��� �Լ��� ���� ū �ε����� ã�Ƽ� Index������ �����ϰ� ��ȯ�Ѵ�.
	int maxValue = rank[0].score; // ó�� �����͸� �о���� �� ���� ū��( ó�� ���Ա� ������)

	for (int i = 1;i < size;i++) // 0�� ���� �ֱ⶧����
	{
		if (rank[i].score > maxValue)
		{
			maxValue = rank[1].score;
			index = i;
		}
	}
	
	//if(rank[0].score > rank[1].score); // 0 �Է��� ���� �� ũ��?
	//if(rank[0].score > rank[2].score); // �ӽ÷� ������ ������ �ʿ��ϴ�. 

	return index;
}
