/*
	�ۼ��� : 2025-03-26
	�ۼ��� : ���α�
	�� �� : �ܼ� ���� �Լ� �����
*/

#include "ConsoleGame.h"
#include "Stage.h"
#include "MyGame.h"

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

	// ���������� ���Ե� ���ڸ� ����ϴ� ����
	COORD tempPos = { 1,10 };
	char tempchar = ReturnValueFromStage(Stage1, tempPos);
	printf("���������� Ư�� ��ǥ ���� : %c\n", tempchar);

	// �÷��̾��� ���� ��ġ�� Ư�� ������ ���

	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{
		system("cls");                // ��ü ȭ���� �����.
		ShowStage(Stage2, stagePos2); // ������ ���������� ����Ѵ�.
		GotoXY(61, 10);               // Ŀ�� ��ġ�� �̵��Ѵ�.
		printf("��");                  // �÷��̾� ���ڸ� ����Ѵ�. (showplayer)
	}

	// �÷��̾��� ��ġ�� �̵�
	while (true)
	{

	}
}