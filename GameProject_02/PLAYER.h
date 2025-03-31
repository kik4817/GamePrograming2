#pragma once

#include "OPTION.h"
#include "MAP.h"

typedef struct _PLAYER
{
	char* name;
	COORD pos;
}PLAYER;

void SetPlayerName(PLAYER* playerPtr);
void SetPlayerInput(PLAYER* playerPtr);

void ShowPlayerUI(PLAYER* playerPtr, COORD UIPos);

BOOL MoveTo(COORD pos1, COORD pos2);

void ShowMoveTo(char(*map)[MAP_WIDTH + 1], PLAYER* playerPtr, char moveTo);