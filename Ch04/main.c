/*
	�ۼ��� : 2025-03-18
	�ۼ��� : ���α�
	�� �� : �迭�� ������
*/

/*
	1. �迭(Array) : ��, ����, ��� ����ϴ°�?
	���� : ����ǥ (����, �����, ����)
	��� ���� : �ϳ��� ������ ���� Ÿ���� ������ ǥ���� �� �ִ�.
*/

/*
	����(Character) - '�ܾ�', 'a' 'p' 'p' 'l' 'e'
*/

#include <stdio.h>
#include "Item.h"
//#include <cstring>


int main()
{
	printf("�迭�� ������\n\n");
	printf("�迭 ���� : ����ǥ �����\n");
	int scoreA = 80; // ����
	int scoreB = 60; // ����
	int scoreC = 40; // ����
	printf("���� : %d, ���� : %d, ���� : %d,\n\n", scoreA, scoreB, scoreC);
	// ���� : '������' Ÿ������ ������ ����� - �޸��� ����� ũ��, 0101�ؼ��ϴ� ���, �����ϴ� �޸� �ּ�(&)
	// ���� Ÿ���� ������ �ϳ��� �̸����� ǥ���ϴ� ��� : �迭
	
	int scores[3] = { 80, 60, 40 }; // �迭�� ���� : int ������ Ÿ���� 3�� �����ϴ� scores �̸��� ����
	scores[0]; // (scores�ּ� + 0) = �ڱ� �ڽ�
	scores[1]; // (scores�ּ� + 1) = 2��° ����
	scores[2];
	printf("������ ������� ����ϼ���.\n");
	for (int i = 0; i < 3; i++)
	{
		printf("���� : %d\n", scores[i]);
	}
	printf("\n");

	// ������ ����
	// ������ �̸�(���ڿ�), ������ ����, ������ index

	char item1Name[10] = "AAA"; // char A X 3 - ���ڵ��� �迭 - ���ڿ�
	int item1Count = 1;
	int itemIndex = 1;

	printf("����\n");
	printf("������1���� ����\n");
	printf("������ ��ȣ : %d, ������ �̸� : %s, ������ ���� : %d\n\n", itemIndex, item1Name, item1Count);
	
	// �������� ������ �����Ѵ�. (������ ���� ������, ���̺� ������)
	ShowAllItemInfo();
	printf("\n");
	printf("���ڿ��� ���� ����\n");
	// ���(apple) ���ڷ� ����غ���
	char char1 = 'a';
	char char2 = 'p';
	char char3 = 'p';
	char char4 = 'l';
	char char5 = 'e';
	// appleis ����
	// apple is red
	// ���ڿ����� �������� ���鹮�ڸ� ����ؼ� �� ������ �������� �˸���.
	printf("%c%c%c%c%c\n", char1, char2, char3, char4, char5);

	char chars[5] = { 'a','p','p','l','e' }; // "apple"
	for (int i = 0; i < 5; i++)
	{
		printf("%c", chars[i]);
	}

	printf("\n");
	char scoreName[10] = "����"; // �������� �ǹ̰� ������ �ֽ��ϴ�.	16���� �ּҷ� ����
	printf("%s\n", scoreName); // string

	char scoreName2[10] = "English"; // �迭�� �������� �� ������ ������ ������ ��� �Ǵ°�? int -> 0
	printf("%c\n", scoreName2[0]);
	printf("%c\n", scoreName2[1]);

	// "����" - ���ڿ�	�޸� �ּ� | �� | �� |
	// �޸��� ù��° �ּҸ� �˰�, �޸��� ũ�⸦ �˸� ���ڸ� �ѹ��� ����� �� �ִ�.
	// "��" ���� �ּ�
	// �迭�� ������ �ּ��̴�.

	char* scorePtr = "Math";
	printf("�̸� : %s\n", scorePtr);
	//printf("%C\n", *scorePtr);
	printf("%C\n", *(scorePtr+0)); // Math "M"���� �ּ� - scorePtr(1����Ʈ)
	printf("%c\n", *(scorePtr + 1));
	printf("%c\n", *(scorePtr + 2));
	printf("%c\n", *(scorePtr + 3));
	// �� �迭�� �ּҷ� �����͸� �����ϰ� ������?
	// �ִ����� ȿ���� �޸𸮸� ����ϱ� ���ؼ��̴�.
	// �ּ� +1 2 3 4 5 (50�ܾ�)
	printf("\n\n");
	int number[10]; // 4x10

	// �������� �̟��� ǥ���ϴ� ���
	// �ܾ��� �迭�� ǥ���ϴ� ���

	char itemName[10] = "�̸�";
	char* itemNamePtr = "�̸�2";
	printf("%s, %s", itemName, itemNamePtr);

	printf("\n\n");
	ItemExample();
}