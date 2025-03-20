#include "Struct.h"

void StructExample()
{
	// �÷��̾��� ������ ����� ����. (1. ��ġ ��)

	struct Pos playerPos = { 1,1 };

	// �÷��̾��� ��ǥ�� ������ּ���
	// ���� ������ (.) ������ �����Ϳ� ������ �� �ִ�.

	printf("[%d, %d]", playerPos.xPos, playerPos.yPos);

	Pos origin1 = { 0,0 };
	struct Circle myCircle = { origin1, 2.5 };

	printf("���� : {%d,%d}, ������ : %1f", myCircle.origin.xPos, myCircle.origin.yPos);
	CalculateCircleInfo(myCircle);
	

	char playerName[10] = "ABC";
	Stats playerSt = { 20, 10 };
	Player myPlayer = { playerName, playerPos, playerSt };
	ShowPlayerCurrentPos(myPlayer);
}

void CalculateCircleInfo(Circle circle)
{
	// ȣ�� ���� 2 * pi * 8
	printf("ȣ�� ���� : %1f\n", 2 * 3.14 * circle.radius);
	printf("���� ���� : %1f\n", 0.5 * 3.14 * circle.radius * circle.radius);
	printf("������ ��ġ : {%d, %d}\n", circle.origin.xPos, circle.origin.yPos);
}

void ShowPlayerCurrentPos(Player player)
{
	printf("�÷��̾� �̸� : %s\n", player.playerName);
	printf("�÷��̾� ��ǥ : %d, %d\n", player.playerPos.xPos, player.playerPos.yPos);
	printf("�÷��̾� ���� : HP : %d, ���ݷ� : %d\n", player.playerStats.HP, player.playerStats.basePower);
}

void MovePlayer(Player player)
{

}

void ShowPlayerCurrentPos2(Player* player)
{

}
