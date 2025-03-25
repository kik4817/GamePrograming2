#include "2DimenstionArray.h"

void ShowLecture()
{
	printf("2���� �迭\n\n");

	int arr1[4][2] =
	{
		{0,1},
		{1,1},
		{1,0},
		{1,1}
	};

	int arr2[2][4] =
	{
		{0,1,1,0},
		{1,0,0,0}
	};

	// arr1�� �� ���� = ���� * ����

	printf("%d ", arr1[0][0]);
	printf("%d \n", arr1[0][1]);
	printf("%d ", arr1[1][0]);
	printf("%d \n", arr1[1][1]);
	printf("%d ", arr1[2][0]);
	printf("%d \n", arr1[2][1]);
	printf("%d ", arr1[3][0]);
	printf("%d \n", arr1[3][1]);

	printf("\n");
	printf("�ݺ������� ǥ���� 2���� �迭\n\n");

	// for �ݺ������� ǥ���غ���
	// ���θ� 1���� �迭�̶�Ȥ �����ϰ� �ݺ������� ǥ���غ���.
	// ���� col | ���� row

	printf("arr1 �迭 ���\n");
	for (int c = 0; c < COL;c++)
	{
		for (int r = 0; r < ROW; r++)
		{
			printf("%d ", arr1[c][r]);
		}
		printf("\n");
	}

	// ����
	// ���� �ѹ� : ���ø� ���, ��ó����
	// const COL_SIZE (���ø� ���)

	printf("arr2 �迭 ���\n");
	for (int c = 0; c < 2; c++)
	{
		for (int r = 0; r < 4; r++)
		{
			printf("%d ", arr2[c][r]);
		}
		printf("\n");
	}

	// char[][]  char[*ptr][����];
	// ���ڸ� ������ Ÿ������ �ϴ� 2���� �迭�� ��������.
	// �� ����� 4 X 5 ���� ������ '#'
	printf("\n\n");
	char map1[4][5] =
	{
		{'#','#','#','#','#'},
		{'#',' ',' ',' ','#'},
		{'#',' ',' ',' ','#'},
		{'#','#','#','#','#'},
	};

	// char* map2[4] // char* ������ �迭

	char map2[5][6+1] = // ������ �迭
	{
	"######",  // '#','#','#','#','#','#' '\0' "" ���ڿ��� ��
	"#    #",
	"#    #",
	"#    #",
	"######"
	};
	
	printf("stage1 ���\n\n");
	
	for (int c = 0;c < 5;c++)
	{
		for (int r = 0; r < 7;r++)
		{
			printf("%c", map2[c][r]);
		}
		printf("\n");
	}

	printf("\n");

	for (int c = 0;c < 4;c++)
	{
		for (int r = 0; r < 5;r++)
		{
			printf("%c", map1[c][r]);
		}
		printf("\n");
	}
}
