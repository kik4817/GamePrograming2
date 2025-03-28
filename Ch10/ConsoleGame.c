#include "ConsoleGame.h"

void GotoXY(int x, int y) // �ܼ� â�� x,y��ǥ�� Ŀ���� ��ġ�� �̵���Ų��.
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	for (int i = 0;i < STAGE_HEIGHT;i++)
	{
		GotoXY(pos.X, pos.Y + i);
		printf("%s", stage[i]);
	}

	//GotoXY(pos.X, pos.Y);
	//printf("%s", stage[0]);
	//GotoXY(pos.X, pos.Y + 1);
	//printf("%s", stage[1]);
	//GotoXY(pos.X, pos.Y + 2);
	//printf("%s", stage[2]);
	////
	//GotoXY(pos.X, pos.Y + n);
	//printf("%s", stage[n]);
}

char ReturnValueFromStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	char returnValue = ' ';
	returnValue = stage[pos.Y][pos.X];
	return returnValue;
}

BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter)
{
	char stageChar = ReturnValueFromStage(stage, playerPos);

	if (stageChar == exitCharacter)
	{
		//GotoXY(60, 0);
		//printf("���� ���������� �̵��մϴ�.\n"); // ��� �ϰ� ������ UI�� ǥ�� GotoXY�� ǥ��
		return true;
	}
	else
	{
		//GotoXY(60, 0);
		//printf("�̵��� �� �����ϴ�.\n");
		return false;
	}

}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{
	// �ܼ� â�� �����ش�
	system("cls");
	// ���� ���������� ��ǥ�� �̿��ؼ� �׸���.
	ShowStage(stage, stagePos);
}

COORD PlusCOORD(COORD pos1, COORD pos2)
{
	/*SHORT newPosx = pos1.X + pos2.X;
	SHORT newPosy = pos1.Y + pos2.Y;
	COORD resultPos = { newPosx, newPosy };*/
	
	COORD resultPos = { pos1.X + pos2.X, pos1.Y + pos2.Y };

	return resultPos;
}

// ������ ���� ���Ѵ�.
// �������� 2�� 