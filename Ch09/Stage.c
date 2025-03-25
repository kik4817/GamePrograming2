#include "Stage.h"

char Stage1[STAGE_COL][STAGE_ROW+1] =
{
	"######",
	"#    #",
	"#    #",
	"#    #",	
	"######"

};

char Stage2[STAGE_COL][STAGE_ROW+1] =
{
    "######",
	"##   #",
	"#  # #",
	"#   ##",
	"######"

};

void SetStage(STAGE* stagePtr, int index)
{
	switch (index)
	{
	case 1:
		stagePtr->name = "황혼의 숲";
		stagePtr->map = Stage1;
		break;
	case 2:
		stagePtr->name = "버섯 숲";
		stagePtr->map = Stage2;
		break;
	default:
		printf("잘못된 스테이지 번호입니다.\n");
		break;
	}
}
