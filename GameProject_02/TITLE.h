#pragma once

#include "OPTION.h"

char title[MAP_HEIGHT][MAP_WIDTH + 1];

void setTitle(char(*title)[MAP_WIDTH + 1], COORD titlePos);

void ShowTitle();