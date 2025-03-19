#pragma once

/*
	��ǥ : �������� ���� �����ؼ� ����Ѵ�.
	����, �Ǽ�, ���� ǥ���ϴ� ��� - C���
	�������� �����ߴ�. (�̸�, ����, ��ȣ, Ÿ��) - #define ITEMCOUNT 5
	�������� ���� �����Ѵ�.
	�ϳ��� �迭�� ��� �������� ǥ���� �� �ִ�.
	�������� �����ؼ� ������ �����͸� �迭�� ǥ���Ѵ�.
*/

/*
	����ü
	- Struct : ����ڰ� ���� ������ �ڷ���
	- �� �����͸� ���� �����ұ�? (why)
*/

/*
	2���� ��ǥ - int x��ǥ, int y��ǥ
	int x;
	int y;
	�׻� 2���� ��ǥ�� �̷�� ���ִ�. �츮�� ���� ��ǥ�� �ǹ��ϴ� �ڷ����� ���� �� ������?
*/

/*
	struct �̸�
	{
		int xPos;
		int yPos;
	}
*/

/*
	1. ����ü ǥ�� ��� struct �̸� {int x, int y, int z}
	2. ����ü �ȿ� ����ü ���� �� ������? - �� : ����, ������ ���� ����, ȣ�� ����
*/

#include <stdio.h>

typedef struct Pos
{
	int xPos;
	int yPos;
}Pos;

/*
	����ü�� ������ �� ���� struct Ű���带 �ٿ��ִ� ���� ���ŷ���.
	typedef ����ϸ� ----Ÿ�� �̸��� () Ÿ�� ������ �����ϴ�.
	typedef struct Ÿ���� �̸��� ������ �� �ִ�.
	���� struct Ÿ�� �̸��� �����ϸ� struct Pos ���·δ� ����� ���Ѵ�.
*/

/*
	����ü�� �̿��ؼ� �Լ��� ����� ��
*/

typedef struct Circle // ������ ������ ������ �����̴� -> ���� ���̿� ȣ�� ���̸� ���� �� �ִ�.
{
	Pos origin;
	double radius;
}Circle;

void StructExample();

void CalculateCircleInfo(Circle circle);

// �÷��̾��� ������ ����ϴ� �Լ��� ��������.

typedef struct Player
{
	char* playerName;
	Pos playerPos;// 1. ��ǥ
	// 2. ����
	// 3. ������
}Player;

void ShowPlayerCurrentPos(Player player);

void MovePlayer(Player player);

void ShowPlayerCurrentPos2(Player* player);