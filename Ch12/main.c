/*
	작성일 : 2025-04-01 ~ 2025-04-02
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
#include <stdlib.h>
#include <conio.h>

int main()
{
	/*printf("1. 파일을 저장하는 함수 구현\n");
	FileSaveTemp();
	printf("2. 파일을 읽어오는 함수 구현\n");
	FileLoadtemp();
	printf("3. 랭크 구조체를 구현\n\n");*/

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

	// 1. 데이터 파일을 로드하는 화면을구성한다.

	printf("데이터를 불러오는 중입니다.\n");
	for (int i = 0;i < 5;i++)
	{
		printf("...");
		Sleep(100);
	}
	printf(".........\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);
	printf("로딩이 완료되었습니다. 키를 입력해주세요.\n");
	_getch();
	system("cls");

	int firstRank = 0; // 랭킹 첫번째를 가르킨다.

	while (1)
	{
		printf("1. 데이터 추가\n2. 랭킹 확인\n3. 프로그램 종료\n4. 랭킹 데이터 삭제\n5. 1위의 정보를 출력\n");
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
			printf("랭킹 1위\n이름 : %s 점수 : %d\n", ranks[firstRank].name, ranks[firstRank].score);
			break;
		default:
			printf("잘못된 입력입니다. 키를 입력해주세요.\n");
			_getch();
			system("cls");
			break;

		}


	}

	//FileSave(RANKFILEPATH, ranks, order);
	//PrintRanking(ranks, order); // 데이터를 보여주는 코드
	//AddRankData(ranks, &order);
	//system("cls");
	//PrintRanking(ranks, order);

}