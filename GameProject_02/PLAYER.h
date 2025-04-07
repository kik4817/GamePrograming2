#pragma once

#include "OPTION.h"

typedef struct _PLAYER
{
	char* name;
	int BasicPower;
	COORD pos;
}PLAYER;



void SetPlayerName(PLAYER* playerPtr);
void SetPlayerInput(PLAYER* playerPtr);

void ShowPlayerUI(PLAYER* playerPtr, COORD UIPos);

