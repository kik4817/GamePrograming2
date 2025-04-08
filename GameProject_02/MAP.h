#pragma once

#include "OPTION.h"

#define MAP_WIDTH 20
#define MAP_HEIGHT 10

typedef struct _MAP
{
	char (*map)[MAP_WIDTH + 1];
	COORD pos;
}MAP;

typedef struct _IMAGE
{
	char (*image)[MAP_WIDTH + 1];
}IMAGE;

char map1[MAP_HEIGHT][MAP_WIDTH + 1];

char map2[MAP_HEIGHT][MAP_WIDTH + 1];
char map3[MAP_HEIGHT][MAP_WIDTH + 1];
char map4[MAP_HEIGHT][MAP_WIDTH + 1];

void ShowMap(char(*map)[MAP_WIDTH + 1], COORD pos);
//void SetImage(IMAGE* imagePtr, COORD pos, int imageIndex);

char ReturnValueFromStage(char(*map)[MAP_WIDTH + 1], COORD pos);
BOOL MoveToStage(char(*map)[MAP_WIDTH + 1], COORD playerPos, char exitMap);

void NEXTStage(char(*map)[MAP_WIDTH + 1], COORD mapPos);

//bool cantMove(char map[MAP_HEIGHT][MAP_WIDTH + 1], COORD playerPos, char cantgo);