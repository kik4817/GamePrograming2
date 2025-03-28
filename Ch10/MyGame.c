#include "MyGame.h"

#include <stdio.h>

void GameStart()
{
	// 플레이어를 설정해주세요. (이름, 출력, 좌표)
	Player player;
	COORD playerPos = { 10,10 }; // 플레이어의 시작점
	SetPlayer(&player);
	

	// 스테이지 출력
	COORD stagePos = { 20,0 };
	ShowStage(Stage1, stagePos);
	

	player.pos = PlusCOORD(playerPos, stagePos); // 플레이어를 맵의 중앙에 넣는다,

	// 반복해서 실행되는 게임 로직UI 출력, 플레이어 조작
	// ShowPlayerUIInfo(%player);

	// UI 좌표
	COORD UserInterfacePos = { 60,0 };

	while (true)
	{
		// 1. 플레이어 이동
		GotoXY(player.pos.X, player.pos.Y);
		printf("  "); // 현제 플레이어를 지워준다
		SetPlayerInput(&player);
		GotoXY(player.pos.X, player.pos.Y);
		printf("★"); // 플레이어를 다시 그린다.

		// 2. Stage 특별한 문자와 값이 같으면 다음 스테이지로 이동하기
		
		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y }; // 위에 위치 좌표가 {20,0} 이여서 빼줘야한다.

		if (CanMoveStage(Stage1, playerStagePos, '@')) // playerStagePos 로 수정한다. 안바꿀때는 playerPos로 한다
		{
			NextStage(Stage2, stagePos); // 맵을 스테이지1 위치와 같은 위치
			player.pos = PlusCOORD(playerPos, stagePos); // 스테이지 이동했을 때 어디서 시작할건가
		}

		// 3. 플레이어의 정보 UI 출력
		ShowPlayerInfo(&player, UserInterfacePos);

		Sleep(100);
	}
}

// ----프로그램 진입점---
int main()
{
	GameStart();
}