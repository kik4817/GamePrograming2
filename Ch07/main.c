/*
	�ۼ��� : 2025-03-21
	�ۼ��� : ���α�
	�� �� : ����ü�� ���� �����
*/

/*
	������ - �ּҸ� �̿��� �� �ְԵǾ���.
	1. ������ ���� �����ϴ� ��        int* numptr;
	2. ������ ���� �ּҸ� ȣ���ϴ� ��  int num; &num;
	3. �ּҿ��� ���� �����ϴ� ��      *numberptr;
*/

/*
	�����Ϳ� ������
	�������� ���� ��� : �ڷ����� ũ�⸸ŭ �����Ѵ�.
	�迭             : (������ �ּ� + i) i��° �ּҸ� ȣ������ ��
*/

/*
	����ü : ����� ���� �ڷ���
*/

/*
	���ӿ� ����� �Լ� ����
	Player - Item - Enemy
*/

/*
	���
	1. �̵��� ����
	2. ��ȣ�ۿ� ����
*/

#include "player.h"

int main()
{
	// �÷��̾��� �⺻ �����͸� ����
	COORD playerPos = { 0,0 };
	Player player = { "���谡", playerPos }; // �̸�, ��ǥ

	COORD itemAPos = { 5,5 };
	Item itemA = { "������A", itemAPos, false }; // �̸�, ��ǥ, ȹ�� ����

	COORD itemBPos = { 10,10 };
	Item itemB = { "������B", itemBPos, false };

	Item* GameItems[2] = { &itemA, &itemB };    // item�迭�� �����ͼ� ����ϴ� �Լ�

	while (true)
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);

		GoXYCOORD(itemAPos);
		printf("��");

		//GoXYCOORD(itemBPos);
		//printf("��");

		InteractWithItem(&player, &itemA); // �ּҿ� �����Ͱ� ������� �ʾҴ�. -> Call by Calue, Ref
		ShowPlayerItemInfo(&itemA);
		//ShowPlayerItemInfo(&itemB);
		//InteractWithItem(&player, &GameItems[2]);
		//showPlayerAllItemInfo(GameItems, 2);

		// �迭�� �ŰԺ����� �޾ƿͼ� ������ �����Ϳ� �����Ѵ�.


		
		Sleep(100);
	}
}