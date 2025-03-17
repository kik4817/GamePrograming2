#pragma once
#include <Windows.h>
#include <stdio.h>

// 플레이어의 좌표
// 왼쪽 화살표키를 누르면 x 좌표를 1
void GetPlayerInput(int* playerX, int* playerY, int maxX);

void InputExample();