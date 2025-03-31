#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "MAP.h"

void GOTOXY(int x, int y);



void setTitle(char(*title)[MAP_WIDTH + 1], COORD titlePos);

void ShowTitle();

void ShowInfoUI(COORD infoUIPos);

void ShowMap(char(*map)[MAP_WIDTH + 1], COORD pos);

COORD PLAYERCOORD(COORD pos1, COORD pos2);