/*
	작성일 : 2025-04-01
	작성자 : 김인국
	주 제 : 랭킹 시스템 세이브 로드
*/

/*
	파일 입출력
	1. fopen() - fclose() - FILE* fp
	2. 저장 : fputc, fputs    // fprintf()
	3. 불러오기 : fgetc, fgets // fscanf()
	4. 구조체를 이용해서 데어티러르 저장하고 싶다.
*/

#include "Rank.h"

int main()
{
	printf("1. 파일을 저장하는 함수 구현\n");
	//FileSaveTemp();
	printf("2. 파일을 읽어오는 함수 구현\n");
	FileLoadtemp();
	printf("3. 랭크 구조체를 구현\n\n");

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
		printf("새로운 플레이어의 이름을 입력하세요 : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요 : \n");
		scanf("%d", &newScore);

		AddRank(ranks, &order, newName, newScore);
	}

	PrintRanking(ranks, order);
	
	FileSave(RANKFILEPATH, ranks, order);


}