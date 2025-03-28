/*
	작성일 : 2025-03-26
	작성자 : 김인국
	주 제 : 콘솔 게임 함수 만들기
*/

/*
	작성일 : 2025-03-27
	작성자 : 김인국
	주 제 : 열거형 만들기
*/

/*
	작성일 : 2025-03-28
	작성자 : 김인국
	주 제 : C언어 콘솔게임 제작
*/

#include "ConsoleGame.h"
#include "Stage.h"
#include "MyGame.h"
#include "Player.h"

/*
	플레이어가 Stage1 탈출구 위치에 도달하면, 현제 화면을 지우고 Stage2 그린다.
*/

int main()
{
	/*for (int i = 0;i < STAGE_HEIGHT;i++)
	{		
		printf("%s\n", Stage2[i]);
	}*/

	COORD stagePos1 = { 20,0 };
	ShowStage(Stage1, stagePos1);
	

	COORD stagePos2 = { 60,0 };
	//ShowStage(Stage2, stagePos2);

	// 플레이어의 위치를 표현하는 것
	GotoXY(10, 10); // x = 가로, y = 세로
	printf("♥");
	//MyPlayerPos playerPos = { 0,0 };
	//ShowPlayerConcole();

	// 스테이지에 포함된 문자를 출력하는 예시
	COORD tempPos = { 1,1 };
	char tempchar = ReturnValueFromStage(Stage1, tempPos);
	printf("스테이지의 특정 좌표 문자 : %c\n", tempchar);

	// 2개의 구조체를 덧셈

	COORD tempPos1 = { 0,2 };
	COORD tempPos2 = { 3,4 };

	COORD tempResult = PlusCOORD(tempPos1, tempPos2);
	printf("두 구조체의 덧셈 값 : [%d, %d]\n", tempResult.X, tempResult.Y);

	// 플레이어의 구조체 함수를 사용 (1. 이름설정)
	
	Player player;
	//COORD playerPos1 = { 1,1 };

	SetPlayerName(&player);
	GetPlayerName(player); //, playerPos1

	// enum 예제
	system("cls");
	COLOR currentColor = RED; 
	SelectColor(currentColor);	
	
	ShowPlayerInfo(&player);


	// 플레이어의 다음 위치가 특정 문자인 경우


	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{
		//system("cls");                // 전체 화면을 지운다.
		ShowStage(Stage2, stagePos2); // 선택한 스테이지를 출력한다.
		GotoXY(61, 10);               // 커서 위치를 이동한다.
		printf("♥");                  // 플레이어 문자를 출력한다. (showplayer)
	}

	// 플레이어의 위치를 이동
	while (true)
	{

	}
}