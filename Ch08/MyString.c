#include "MyString.h"

void ArrayExample()
{
	printf("1. ���� �迭 ����\n\n");

	char name1 = 'a', name2 = 'p', name3 = 'p', name4 = 'l', name5 = 'e';
	printf("%c%c%c%c%c\n\n", name1, name2, name3, name4, name5);

	// �迭 : �ּ� + i
	char Words[5] = { name1, name2, name3, name4, name5 };
	for (int i = 0;i < 5;i++)
	{
		printf("%c", Words[i]);
	}
	
	// �迭�� �ּ�, �����͸� �̿��ؼ� ǥ���� �� ������?
	printf("\n\n");
	printf("%s\n", "apple");
	printf("%p\n\n", "apple");

	// "apple" << ���������� �ؼ�
	// %s char �迭�� �ּҸ� �������ڴ�.
	// "apple" - �ּҷ� ȣ���ϴ� �༮

	// �Լ��� �̿��ؼ� ���� �迭�� ���
	// scanf_s : ���ڿ��� ����� �� �ִ� ���� ��������� �Ѵ�.

	// ���� �迭�� �ּҸ� ������ �����ϰ� �ʹ�.
	char inputArray[6]; // a,p,p,l,e, '\0'
	char* inputWord = inputArray;
	printf("�ܾ �Է����ּ���.\n");
	scanf_s("%S", inputArray, 6); // �ּҸ� ���޹޾Ƽ� �����Ѵ�.
	printf("%s", inputArray);

	// ���ΰ��� �̸��� �������ּ���

	// �÷��̾� ����ü - char* �ּҸ� ���޹ް� ����

	char input[10];	

	printf("���ΰ��� �̸��� �Է����ּ���.\n");
	scanf_s("%s", input, 10);
	char* playerName = input; //���ڿ� ����

	printf("%s", playerName);
}
