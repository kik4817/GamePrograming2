/*
	작성일 : 2025-03-25
	작성자 : 김인국
	주 제 : 2차원 배열
*/

#include "2DimenstionArray.h"
#include "Stage.h"
#include "Item.h"

int main()
{
	//ShowLecture();
	STAGE stage1; // STAGE티입의 빈 상자 이름의 stage1인 변수
	SetStage(&stage1,1);
	STAGE stage2; 
	SetStage(&stage2, 2);
	printf("스테이지 이름 출력 : %s\n", stage1.name);
	printf("스테이지 1의 맵 출력\n");
	for(int i=0;i<STAGE_COL;i++)
	{
		printf("%s\n", stage1.map[i]);
	}
	printf("스테이지 이름 출력 : %s\n", stage2.name);
	printf("스테이지 2의 맵 출력\n");
	for (int i=0;i < STAGE_COL;i++)
	{
		printf("%s\n", stage2.map[i]);
	}
}