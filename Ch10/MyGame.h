#pragma once

#include "ConsoleGame.h"

// GetAsyncŰ ������ �̵��ϴ� ��
typedef struct MyPlayerPos
{
	int X;
	int Y;

}MyPlayerPos;

void PlayerConsoleMove(MyPlayerPos playerpos);

// item.h
// item 2���� �迭�� �����ͼ� Ư�� ��ǥ�� ����ϱ�

// GotoXY

// Ư�� ��ǥ�� �̹��� ����ϱ� - �Լ�

// Ư���� �̺�Ʈ �߻� �� ������ ���� ����ϴ� �Լ� ����

// ���ڸ� �Է¹޾Ƽ� ���ǹ����� �񱳸� �� �� �̺�Ʈ�� ���� scanf, _getch

// Ư�� �������� ȹ���� �ϸ� �޴� Ű�� ���ؼ� ȹ���� ������ ������ Ȯ���Ѵ�.