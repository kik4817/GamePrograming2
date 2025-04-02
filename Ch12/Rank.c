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
		
	//while (fscanf(fptr, "%d %d %49s", &rank[count].order, &rank[count].score, rank[count].name) != EOF) // EOF 파일이 끝날때 까지 읽어오는 코드
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
	// cout 횟수만큼 반복하는 코드가 필요하다.
	//printf("%d, %d, %c", rank[0].order, rank[0].score, rank[0].name);
	//printf("%d, %d, %c", rank[1].order, rank[1].score, rank[1].name);
	
	// 테두리 만들기
	printf("+------+------+------------------+\n");
	printf("| 순서 | 점수 |        이름      |\n");
	printf("+------+------+------------------+\n");

	for (int i = 0;i < count;i++)
	{
		printf("| %3d  | %3d  |   %10s     |\n", i + 1, rank[i].score, rank[i].name);
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

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER) // 1. *order
	{
		printf("새로운 플레이어의 이름을 입력하세요 : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요 : \n");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore); // 2. ranks -> rank // 3. &order 앞에 &지우기
	}
}

void DeleteRankData(Rank rank[], int* order, int index)
{
	// 1. order는 배열의 순서 : -1 해줘야 한다.
	// 2. 지우고 싶은 순서를 전달해줘야 한다. order

	if (index < 0)
	{
		printf("랭킹의 데이터가 등록되어 있지 않습니다.\n");
		return;
	}
	if (index >= *order)
	{
		printf("잘못된 인덱스 입니다.\n");
		return;
	}

	for (int i = index; i < *order-1;i++)
	{
		rank[i] = rank[i + 1];
	}
	
	(*order)--; // 데이터를 삭제했기 때문에 현제 데이터의 총 갯수를 감소한다.

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
	int index = 0; // 임시로 index 지정한다

	// Rank데이터 안에서 함수가 가장 큰 인덱스를 찾아서 Index변수에 저장하고 반환한다.
	int maxValue = rank[0].score; // 처음 데이터를 읽어왔을 때 가장 큰수( 처음 들어왔기 때문에)

	for (int i = 1;i < size;i++) // 0은 위에 있기때문에
	{
		if (rank[i].score > maxValue)
		{
			maxValue = rank[1].score;
			index = i;
		}
	}
	
	//if(rank[0].score > rank[1].score); // 0 입력의 값이 더 크면?
	//if(rank[0].score > rank[2].score); // 임시로 저장할 변수가 필요하다. 

	return index;
}
