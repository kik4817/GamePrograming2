#pragma once

#include "ConsoleGame.h"

// GetAsyncŰ ������ �̵��ϴ� ��
typedef struct _MyPlayerPos
{
	COORD pos;

}MyPlayerPos;

void SetPlayerAsy(MyPlayerPos* playerPos);
void ShowPlayerConcole(MyPlayerPos* playerPos);

// item.h
// item 2���� �迭�� �����ͼ� Ư�� ��ǥ�� ����ϱ�

// GotoXY

// Ư�� ��ǥ�� �̹��� ����ϱ� - �Լ�

// Ư���� �̺�Ʈ �߻� �� ������ ���� ����ϴ� �Լ� ����

// ���ڸ� �Է¹޾Ƽ� ���ǹ����� �񱳸� �� �� �̺�Ʈ�� ���� scanf, _getch

// Ư�� �������� ȹ���� �ϸ� �޴� Ű�� ���ؼ� ȹ���� ������ ������ Ȯ���Ѵ�.