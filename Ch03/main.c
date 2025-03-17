/*
	�ۼ��� : 2025-03-17
	�ۼ��� : ���α�
	�� �� : �޸��� ��� (���� �Ҵ�)
*/

/*
	������ : �ּ� �ٷ�� ���
	������ ���� ���� : int* numptr;
	������ �ּҷ� ���� ���� ���� : *numptr;
	���� : int num; &num; ������ �Ҵ�� �ּҸ� ������ �� �ִ�.
*/

/*
	�Լ� ��� - �Ű� ���� ��ġ�� ���� ������ �ּҰ� ������
	void Function(int A, int B);
	�÷��̾��� ��ġ(x,y��ǥ) ���� �������ִ� �Լ��� ����� ������.
	���� ������Ʈ���� main������ �ڵ带 �Լ��� �ٲ㺸����.(�����͸� ����ؼ�)
*/

/*
	������ ���� ���¸� ����غ���.
	���� �Ҵ� ����
	�޸𸮸� ���� �Ҵ����ش�. �����Ҵ����� �Ҵ�� �޸𸮴� ������ ������ �� ����.
	���� ���� - �Լ��� ����� �� ���� �����ȴ�.
	�Լ� �ȿ��� �����Ҵ�� �޷θ��� �������� �ʴ´�.
	�ش� �޸��� ����� ���̳��� ����(����) ��������� �Ѵ�.
	free(������ ����);
	Inventory.h
*/

#include <stdio.h>
#include "Input.h"
#include "Inventory.h"

int* inventroyPtr;

void SetMemorryAndValue(int amount)
{
	//int* num1ptr = NULL;       // ����(4����Ʈ ���� ���� �����ϴ� ����)
	//num1ptr = malloc(sizeof(int)); // ���ο� �ּҸ� �Ҵ����� �� ���� ������? memory allocate // malloc
	//printf("�Ҵ��� �޸� �ּ��� �� : %p\n", num1ptr);

	//*num1ptr = amount;
	//printf("�Ҵ��� �޸��� ���� ȣ�� : %d\n", *num1ptr);

	int* num1ptr = NULL;
	num1ptr = malloc(sizeof(int));
	*num1ptr = amount;
	printf("�Ҵ��� �޸� �ּ��� �� : %p\n", num1ptr);
	printf("�Ҵ��� �޸��� ���� ȣ�� : %d\n\n", *num1ptr);

	free(num1ptr); // free()�Լ��� �������� ������ num1ptr�� �޸� �� ��� ���´�.
}

int main()
{
	printf("ch3\n\n");

	//InputExample();

	printf("������ ���� ���\n\n");

	int number = 1;
	int* numberPtr = &number;

	/*int input;
	scanf("%d\n", &input);*/



	// ��ǻ���� �޸� ������ ���� ������ �� �ִ� �ּҸ� �Ҵ��ߴ�.
	// ���ǹ�, Ư�� ��Ȳ������ �ڵ带 ����
	// �κ��丮 �ִ� ũ�� 4 (������ 4�� ����)
	// ���׷��̵� �ִ� ũ�� ���� (������ �� �ִ� ������ ������ �þ��.)


	SetMemorryAndValue(10);

	inventroyPtr = malloc(sizeof(int));
	*inventroyPtr = 0;

	// scanf
	// ctrl + k + s

	/*
		���� �߻�
		Throw : �б� ���ܰ� �߻��մϴ�. ������ �־�� �� �ڸ��� �ּҸ� �ְų�, �ּҸ� �־���� �ڸ��� ������ ������ �߻��ϴ� �����Դϴ�.
		�Լ� ���� �� ����� �� �� �������ּ���. 
		ptr - �ּ�
		*/

	while (1)
	{
		printf("1. �κ��丮�� ���� �����˴ϴ�.\n");
		printf("2. ���� �κ��丮�� ũ�⸦ �����մϴ�.\n");

		int inputNumber = -1;
		printf("Ű�� �Է����ּ���.\n");
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			IncreaseInventoryCount(inventroyPtr, 4);
		}
		else
		{
			ShowInventoryCount(inventroyPtr);
		}
	}


	free(inventroyPtr);
}