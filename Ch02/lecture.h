#pragma once
#include <stdio.h>

void ShowLecture();

void Swap(int* a, int* b); // �Լ��� ���ڿ� � ��쿡 �����͸� ����ؾ� �ұ�?

void IncreaseScore(int* score, int points); // score �ּ�, points ��

void IncreaseTemp(int score, int points);

void UpgradeWeapon(int* weaponLv, int baseAP, float* weight);

// ���� �Լ��� �����غ�����.
void IncreaseItem(int* getitem, int itemT);

void PlayerPointer(int* pointX, int* pointY);