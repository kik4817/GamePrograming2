/*
	�ۼ��� : 2025-03-31
	�ۼ��� : ���α�
	�� �� : File Stream & File input output ���� �����
*/

/*
	������ �����ϱ� ���� �ܰ�
	1. ������ ����� ��θ� �����Ѵ�.
	2. � ������ �������� �������ش�. (Ȯ����) [�޸���.txt]
	3. ������ ��� �����͸� �����Ѵ�.
*/

/*
	Ư�� ȯ��ü������ ������ �����Ѵ�. ��ǻ���� ��ġ�� ������ �ؾ��Ѵ�. (Window64��Ʈ ��ǻ��)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf, scanf (�ܼ� �����)
                   // ���� �����, ���� ����ü
#include "FileHandler.h"

/*
	������ �����ϴ� �Լ�
	fopen() - �ҷ��� ��θ� �������ش�.
	��� �����ð��� ���� ("r" "w" "a") ���� ����Ʈ ���ٵ� "w" = "wt"
*/

/*
	��Ʃ�� ��Ʈ����
	- ��Ʈ�� : � ������ ���������� �����ϴ� ��
	- ���� : �̸� �̸� �ӽ� ������ �ο��ؼ� �� �ӽ� �����͸� �����ش�, ��Ʃ�� ��� ��

	��Ʈ ��Ʈ��, ���� ��Ʈ���� �����ΰ�?
	��Ʈ(bit) 0,1 �̿췯�� ����, ����Ʈ(byte) : ������ �⺻ ����
	��Ʈ���� �����ؾ� ������ �ٷ� �� �ִ�.
	fopen = ���� ��Ʈ���� �������ִ� �Լ��̴�. "w", "r", "a"

*/

typedef struct _Poeple
{
	char Name[4];
	int age;
}Poeple;

// ĳ������ �̸�, ������ �����ϴ� ����ü�� �����.

typedef struct _Score
{
	char Name[4];
	int Score;
}Score;



/*
	C:\Users\Administrator\Desktop\GamePrograming2\Ch11\Example\�̸�(Example).txt
	fopen("�̸�") �� �ڵ尡 �ۼ��ǰ� �ִ� ���� �ּҸ� ��ȯ�Ѵ�,
	���� �̸� ��θ� �����غ���.
	������ �����ؼ� �����͸� �����ϰ� �ʹٸ�, �����̸�\\�����̸�.Ȯ����
*/

/*
	File ����ü ����ϸ� �ڵ带 �̿��ؼ� �����͸� �ܺο� ������ �� �ִ�.
	File������ �ּҸ� �����ؾ� ������ ���� �Ǵ� �о�� �� �ִ�.
	fopen(); fclose();

	fputs(); fprintf(); ���� ��尡 "w" �����͸� ������ �� �ִ�.
	fgets(); fscanf(); ���� ��尡 "r" �����͸� �о�� �� �ִ�.

	"w"��带 �����ϸ� ���� �����Ͱ� ���� �����ȴ�.
	"a"��带 �����ϸ� ���� �����Ϳ� �̾ �߰��ȴ�. (���� ��ŷ�� ���ο� ������ ����� �� �ִ�.)
*/

int main()
{
	printf("���� ���� �� ����� �ۼ��ϱ�\n\n");

	// ���, ��� ���� // ������ �����.
	//FILE* fp = fopen("Example2.txt", "w");
	FILE* fp = fopen("Example\\Example2.txt", "w");

	// ���� ����
	//fscanf(fp, "%s, %d", "BBB", 100);

	// 1. �����͸� ���ڿ��� ���� ������ ��.
	fputs("BBB 100\n", fp);
	// 2. ������ �ҷ��ͼ� �����ؾ� �Ѵ�.

	Poeple people1 = { "CCC", 15 };
	fprintf(fp, "%s %d\n", people1.Name, people1.age);

	// 3. �ǽ�, ���� ����ü�� ���� �޸��忡 �����غ�����.

	Score myScore = { "DDD", 1000 };
	fprintf(fp, "%s %d\n", myScore.Name, myScore.Score);
	fclose(fp); // ������ ������ ���´�.

	// 4. �Լ��� ǥ���غ� �� SaveScore	


	printf("\n��� �ȿ� �ִ� ������ �о����\n");

	FILE* fp2 = fopen("Example\\Example2.txt", "r");

	char name[4];
	int age;
	int MaxNumber = 3;

	for (int i = 0;i < MaxNumber;i++)
	{
		fscanf(fp2, "%s %d", name, &age);
		printf("�̸� : %s, ���� : %d\n", name, age);
	}

	fclose(fp2);

	printf("�Լ��� ������ �����ϱ�\n");

	// 1. ������ �̸� �����
	// 2. scanf �����͸� �Է� �� �ش� �����͸� �����ϱ�
	// 3. �Լ��� �����

	char mName[4] = "FFF";
	int mScore = 2500;
	SaveScore(mName, mScore);
	LoadRank();

	COORD pos = { 20,20 };
	GTXY(pos.X, pos.Y);
	printf("��ŷ");


}