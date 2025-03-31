#pragma once

#include "OPTION.h"

#define MAP_WIDTH 20
#define MAP_HEIGHT 10

typedef struct _MAP
{
	char (*map)[MAP_WIDTH + 1];
	COORD pos;
}MAP;

typedef struct _MAPIMAGE
{
	char (*mapImage)[MAP_WIDTH + 1];
}MAPIMAGE;

char title[MAP_HEIGHT][MAP_WIDTH + 1];

char map1[MAP_HEIGHT][MAP_WIDTH + 1];

char mapImage2[MAP_HEIGHT][MAP_WIDTH + 1];
char mapImage3[MAP_HEIGHT][MAP_WIDTH + 1];
char mapImage4[MAP_HEIGHT][MAP_WIDTH + 1];
