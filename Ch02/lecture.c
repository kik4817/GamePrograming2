#include "lecture.h"

// ���� ����
int GameScore = 0;

void ShowLecture()
{
	printf("���� ���� 1\n");

	// ������ �����ϰ� �ּҸ� ����غ�����.
	int num1 = 10;
	int* numPtr = &num1;     // �ּ� = ��
	printf("���� ��� : %d\n", num1);
	printf("�ּҸ� ��� : %p\n\n", numPtr);

	printf("���� �ǽ� 1\n"); // �� ������ ���� �����ϴ� �Լ��� �����Ѵ�.

	// int* 2�� �ʿ��ϴ�. int�� �ּҰ� 2�� �ʿ��ϴ�.
	int numA = 5;
	int numB = 6;
	printf("numA�� �� : %d, numB�� �� : %d\n", numA, numB);
	Swap(&numA, &numB);
	printf("numA�� �� : %d, numB�� �� : %d\n\n", numA, numB);

	printf("���� ���� 1\n"); // ������ ȹ���ϴ� �ý����� ���� // Ư�� �ൿ, �ð��� ���� ����

	//if(Ư�� ������ ����������)
	IncreaseScore(&GameScore, 10);
	IncreaseTemp(GameScore, 10);
	printf("���� ���� : %d\n\n", GameScore);

	printf("���� �ǽ� 2\n");

	// ���� 3���� �����غ�����.
	float weight = 1.5f;
	int weaponLv = 1;
	int baseAP = 10;

	// ���� ���ݷ��� ������Ű�� �Լ�
	// ���� �Լ��� ������ �� ������?
	printf("����ġ : %f, ���� : %d, �⺻ ���ݷ� : %d\n", weight, weaponLv, baseAP);
	UpgradeWeapon(&weaponLv, baseAP, &weight);
	printf("����ġ : %f, ���� : %d, �⺻ ���ݷ� : %d\n", weight, weaponLv, baseAP);

	// ����
	// �Լ��� �̿��ؼ� ���� �����Ѵ�. �ּҸ� �̿��ؼ� ���� ������ �� �ִ�.
	// ���� �ּҸ� ����ұ�? 
	// 1.�ܺ��� ���� �����ؾ� �� ��. 
	// 2. �����;� �� ������ Ÿ���� �ʹ� Ŭ �� �ּҸ����� ������ �� �ִ�.

	// �������� ������ ������Ű�� �Լ��� ���巯 ������.
	int getitem = 1;
	int itemBag = 0;
	printf("������\n");
	IncreaseItem(getitem, &itemBag);
	printf("���� %d\n", itemT);
	// �ÿ��̾��� ��ǥ�� �̵���Ű�� �Լ��� ����� ������.
	
}
void Swap(int* a, int* b)
{
	int temp = *a; // a�� �ּ��ε�, �ּҷ� ���� ���� �������� ������(&) temp�� ���� : 5���ڰ� ����.
	*a = *b;       // *�����ͺ��� = �� : a�� �ּҿ� ���� �����ض�. 
	*b = temp;     //*b = b�� �ּҿ� ���� �ҷ��Ͷ�
	// 1. (*b -> 6) 2. *a = 6 3. numA = 6

}

void IncreaseScore(int* score, int points)
{
	// GaemScore �ּҸ� �޾ƿԽ��ϴ�.
	// *�ּ� ���� = ��; �ܺο� �ִ� GameScore ���� ����ȴ�.

	*score += points;
}

void IncreaseTemp(int score, int points)
{
	// GaemScore �ּҸ� �޾ƿԽ��ϴ�.
	// *�ּ� ���� = ��; �ܺο� �ִ� GameScore ���� ����ȴ�.

	score += points;
}

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight)
{
	// ������ 1���� ��Ų��.
	// ����ġ�� Ư�� �������� �����Ѵ�.

	*weaponLv += 1;
	if (*weaponLv % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}
	printf("���� ���� ���ݷ� : %f\n", (*weaponLv) * (*weight) + baseAP);
}

void IncreaseItem(int getitem, int* itemBag)
{
	getitem += 1;

}

void PlayerPointer(int* pointX, int* pointY)
{
}
