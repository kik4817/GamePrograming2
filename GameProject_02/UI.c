#include "UI.h"

void ShowInfoUI(COORD infoUIPos)
{
	GOTOXY(infoUIPos.X, infoUIPos.Y);
	printf("$ : 광산");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 1);
	printf("광산에서 돈을 벌수 있습니다.");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 2);
	printf("^ : 마을");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 3);
	printf("무기를 업그레이드 할수 있습니다.");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 4);
	printf("@ : 보스탑");
	GOTOXY(infoUIPos.X, infoUIPos.Y + 5);
	printf("보스를 잡으면 게임이 클리어 됩니다.");
}