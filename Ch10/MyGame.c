#include "MyGame.h"

#include <stdio.h>

void GameStart()
{
	// �÷��̾ �������ּ���. (�̸�, ���, ��ǥ)
	Player player;
	COORD playerPos = { 10,10 }; // �÷��̾��� ������
	SetPlayer(&player);
	

	// �������� ���
	COORD stagePos = { 20,0 };
	ShowStage(Stage1, stagePos);
	

	player.pos = PlusCOORD(playerPos, stagePos); // �÷��̾ ���� �߾ӿ� �ִ´�,

	// �ݺ��ؼ� ����Ǵ� ���� ����UI ���, �÷��̾� ����
	// ShowPlayerUIInfo(%player);

	// UI ��ǥ
	COORD UserInterfacePos = { 60,0 };

	while (true)
	{
		// 1. �÷��̾� �̵�
		GotoXY(player.pos.X, player.pos.Y);
		printf("  "); // ���� �÷��̾ �����ش�
		SetPlayerInput(&player);
		GotoXY(player.pos.X, player.pos.Y);
		printf("��"); // �÷��̾ �ٽ� �׸���.

		// 2. Stage Ư���� ���ڿ� ���� ������ ���� ���������� �̵��ϱ�
		
		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y }; // ���� ��ġ ��ǥ�� {20,0} �̿��� ������Ѵ�.

		if (CanMoveStage(Stage1, playerStagePos, '@')) // playerStagePos �� �����Ѵ�. �ȹٲܶ��� playerPos�� �Ѵ�
		{
			NextStage(Stage2, stagePos); // ���� ��������1 ��ġ�� ���� ��ġ
			player.pos = PlusCOORD(playerPos, stagePos); // �������� �̵����� �� ��� �����Ұǰ�
		}

		// 3. �÷��̾��� ���� UI ���
		ShowPlayerInfo(&player, UserInterfacePos);

		Sleep(100);
	}
}

// ----���α׷� ������---
int main()
{
	GameStart();
}