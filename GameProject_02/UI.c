#include "UI.h"

void ShowInfoUI(COORD infoUIPos)
{
	GOTOXY(infoUIPos.X, infoUIPos.Y);
	printf("$ : ����");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 1);
	printf("���꿡�� ���� ���� �ֽ��ϴ�.");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 2);
	printf("^ : ����");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 3);
	printf("���⸦ ���׷��̵� �Ҽ� �ֽ��ϴ�.");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 4);
	printf("@ : ����ž");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 5);
	printf("������ ������ ������ Ŭ���� �˴ϴ�.");
}