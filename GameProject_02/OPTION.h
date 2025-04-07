#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "MAP.h"
#include "PLAYER.h"
#include "TITLE.h"
#include "UI.h"
#include "MONEY.h"
#include "ITEM.h"

void GOTOXY(int x, int y);

COORD PLAYERCOORD(COORD pos1, COORD pos2);