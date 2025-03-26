/*
*	�ܼ� ���� �����
*	-������ ���, ����ü ���
*	- 2���� �迭 �̹��� ǥ��
* 
*	���������� �����, Ư�� ��ġ�� �����ϸ� ���� ���������� �̵��Ѵ�.
*	�ܼ� ȭ�� ���� UIâ�� ������ִ� ����� �Լ��� �����غ���.
*/

#pragma once

#include <stdio.h>   // printfm, scanf
#include <stdlib.h>  // rand
#include <stdbool.h> // true, false
#include <Windows.h> // GetAsync... system("cls")
#include <conio.h>   // _getch() �Է´�� �Լ�
#include <time.h>    // �ð� ���� ���
#include "Stage.h"

//typedef struct _POS  =  COORD pos
//{
//	int x;
//	int y;
//
//};

void GotoXY(int x, int y);

// 2���� �迭 �ּҷ� ���������� � ���·� �����ؾ��ϴ°� ?
// char (*stage)[������ ����]

void ShowStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);

// �÷��̾��� ��ǥ, Stage�ȿ� ������ �� ('@;)

// x,y��ǥ�� ����ִ� ���ڸ� ��ȯ�ϴ� �Լ�
char ReturnValueFromStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);

//char ReturnValueFromStruct(STAGE* stage);

// ���� ���������� �̵��� �����Ѱ���?
BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter );
//�̵��ϼ���.

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos);