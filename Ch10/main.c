/*
	�ۼ��� : 2025-03-26
	�ۼ��� : ���α�
	�� �� : �ܼ� ���� �Լ� �����
*/

/*
	�ۼ��� : 2025-03-27
	�ۼ��� : ���α�
	�� �� : ������ �����
*/

/*
	�ۼ��� : 2025-03-28
	�ۼ��� : ���α�
	�� �� : C��� �ְܼ��� ����
*/

#include "ConsoleGame.h"
#include "Stage.h"
#include "MyGame.h"
#include "Player.h"

/*
	�÷��̾ Stage1 Ż�ⱸ ��ġ�� �����ϸ�, ���� ȭ���� ����� Stage2 �׸���.
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

	// �÷��̾��� ��ġ�� ǥ���ϴ� ��
	GotoXY(10, 10); // x = ����, y = ����
	printf("��");
	//MyPlayerPos playerPos = { 0,0 };
	//ShowPlayerConcole();

	// ���������� ���Ե� ���ڸ� ����ϴ� ����
	COORD tempPos = { 1,1 };
	char tempchar = ReturnValueFromStage(Stage1, tempPos);
	printf("���������� Ư�� ��ǥ ���� : %c\n", tempchar);

	// 2���� ����ü�� ����

	COORD tempPos1 = { 0,2 };
	COORD tempPos2 = { 3,4 };

	COORD tempResult = PlusCOORD(tempPos1, tempPos2);
	printf("�� ����ü�� ���� �� : [%d, %d]\n", tempResult.X, tempResult.Y);

	// �÷��̾��� ����ü �Լ��� ��� (1. �̸�����)
	
	Player player;
	//COORD playerPos1 = { 1,1 };

	SetPlayerName(&player);
	GetPlayerName(player); //, playerPos1

	// enum ����
	system("cls");
	COLOR currentColor = RED; 
	SelectColor(currentColor);	
	
	ShowPlayerInfo(&player);


	// �÷��̾��� ���� ��ġ�� Ư�� ������ ���


	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{
		//system("cls");                // ��ü ȭ���� �����.
		ShowStage(Stage2, stagePos2); // ������ ���������� ����Ѵ�.
		GotoXY(61, 10);               // Ŀ�� ��ġ�� �̵��Ѵ�.
		printf("��");                  // �÷��̾� ���ڸ� ����Ѵ�. (showplayer)
	}

	// �÷��̾��� ��ġ�� �̵�
	while (true)
	{

	}
}