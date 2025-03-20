#include "Struct.h"

void StructExample()
{
	// 플레이어의 정보를 만들어 본다. (1. 위치 값)

	struct Pos playerPos = { 1,1 };

	// 플레이어의 좌표를 출력해주세요
	// 접근 연산자 (.) 내부의 데이터에 접근할 수 있다.

	printf("[%d, %d]", playerPos.xPos, playerPos.yPos);

	Pos origin1 = { 0,0 };
	struct Circle myCircle = { origin1, 2.5 };

	printf("원점 : {%d,%d}, 반지름 : %1f", myCircle.origin.xPos, myCircle.origin.yPos);
	CalculateCircleInfo(myCircle);
	

	char playerName[10] = "ABC";
	Stats playerSt = { 20, 10 };
	Player myPlayer = { playerName, playerPos, playerSt };
	ShowPlayerCurrentPos(myPlayer);
}

void CalculateCircleInfo(Circle circle)
{
	// 호의 길이 2 * pi * 8
	printf("호의 길이 : %1f\n", 2 * 3.14 * circle.radius);
	printf("원의 넓이 : %1f\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("원점의 위치 : {%d, %d}\n", circle.origin.xPos, circle.origin.yPos);
}

void ShowPlayerCurrentPos(Player player)
{
	printf("플레이어 이름 : %s\n", player.playerName);
	printf("플레이어 좌표 : %d, %d\n", player.playerPos.xPos, player.playerPos.yPos);
	printf("플레이어 스탯 : HP : %d, 공격력 : %d\n", player.playerStats.HP, player.playerStats.basePower);
}

void MovePlayer(Player player)
{

}

void ShowPlayerCurrentPos2(Player* player)
{

}
