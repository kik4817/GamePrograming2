#include "Rank.h"

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	//FILE* fp = fopen("Rank.txt", "w"); 헤더에 입력해서 위와 같음
	
	// fputc - 문자로 저장
	/*fputc('a', fp);
	fputc('\n', fp);
	fputc('a', fp);
	fputc('a', fp);*/
	
	// fputs - 문자열로 저장
	//fputs("a\naa", fp);
	
	// fprintf - 구조체를 한번에 저장
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
	printf("순서 : %d 점수 : %d 이름 : %s", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;
	
	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}
		
	while (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF) // EOF 파일이 끝날때 까지 읽어오는 코드
	{
		count++;
	}
	
	fclose(fptr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	// cout 횟수만큼 반복하는 코드가 필요하다.
	//printf("%d, %d, %c", rank[0].order, rank[0].score, rank[0].name);
	//printf("%d, %d, %c", rank[1].order, rank[1].score, rank[1].name);
	
	// 테두리 만들기
	printf("+------+------+------------------+\n");
	printf("| 순서 | 점수 |        이름      |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0;i < count;i++)
	{
		printf("| %3d  | %3d  |   %10s     |\n", rank[i].order, rank[i].score, rank[i].name);
	}

	// 테두리 만들기
	printf("+------+------+------------------+\n");

}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXPLAYER)
	{
		rank[*order].order = *order + 1;
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1); // NULL이 포함되어있어 -1을 해줘야함
		rank[*order].name[MAXLENGTH-1] = '\0';
		(*order)++;
	}
	else
	{
		printf("최대 플레이어 저장 수를 초과하였습니다.\n");
	}
}