/*
	�ۼ��� : 2025-03-25
	�ۼ��� : ���α�
	�� �� : 2���� �迭
*/

#include "2DimenstionArray.h"
#include "Stage.h"
#include "Item.h"

int main()
{
	//ShowLecture();
	STAGE stage1; // STAGEƼ���� �� ���� �̸��� stage1�� ����
	SetStage(&stage1,1);
	STAGE stage2; 
	SetStage(&stage2, 2);
	printf("�������� �̸� ��� : %s\n", stage1.name);
	printf("�������� 1�� �� ���\n");
	for(int i=0;i<STAGE_COL;i++)
	{
		printf("%s\n", stage1.map[i]);
	}
	printf("�������� �̸� ��� : %s\n", stage2.name);
	printf("�������� 2�� �� ���\n");
	for (int i=0;i < STAGE_COL;i++)
	{
		printf("%s\n", stage2.map[i]);
	}
}