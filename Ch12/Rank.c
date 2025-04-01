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
	fprintf(fp, "%d %s %d", 1, "Alice", 100);

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
		
	while (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF) // EOF ������ ������ ���� �о���� �ڵ�
	{
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
		printf("| %3d  | %3d  |   %10s     |\n", rank[i].order, rank[i].score, rank[i].name);
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