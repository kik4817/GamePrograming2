#include "OPTION.h"
#include "MAP.h"

char map1[MAP_HEIGHT][MAP_WIDTH + 1] =
{
	"####################",	
	"#                  #",	
	"#                ^ #",	
	"#                  #",	
	"#                  #",	
	"#  $               #",	
	"#                  #",	
	"#                  #",	
	"#        @         #",	
	"####################"	
};

char mapImage1[MAP_HEIGHT][MAP_WIDTH + 1] =
{
	"####################",
	"#    $$$$$$$$$$$   #",
	"#   $$        $$$  #",
	"#  $$$       $   $ #",
	"# $$ $     $$    $ #",
	"# $   $   $  $   $ #",
	"# $     $     $  $ #",
	"# $     $      $$  #",
	"#  $$$$$$$$$$$$    #",
	"####################"
};

char mapImage2[MAP_HEIGHT][MAP_WIDTH + 1] =
{
	"####################",
	"#                  #",
	"#  **************  #",
	"# **************** #",
	"#  * **      ** *  #",
	"#  * **  **  ** *  #",
	"#  *     **     *  #",
	"#  **************  #",
	"#                  #",
	"####################"
};

char mapImage3[MAP_HEIGHT][MAP_WIDTH + 1] =
{
	"####################",
	"#    ##########    #",
	"#   #          #   #",
	"#   # ##    ## #   #",
	"#  #  ##    ##  #  #",
	"#  #     ##     #  #",
	"# #      ##      # #",
	"# #      ##      # #",
	"# ################ #",
	"####################"
};

void ShowMap(char(*map)[MAP_WIDTH + 1], COORD mapPos)
{		
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		GOTOXY(mapPos.X, mapPos.Y + i);
		printf("%s", map[i]);
	}
}

void SetImage(IMAGE* imagePtr, COORD imagePos, int imageIndex)
{
	switch (imageIndex)
	{
	case 1:
		imagePtr->image = mapImage1;
		for (int i = 0; i < MAP_HEIGHT; i++)
		{
			GOTOXY(imagePos.X, imagePos.Y + i);
			printf("%s", imagePtr->image[i]);
		}
		break;
	case 2 :
		imagePtr->image = mapImage2;
		for (int i = 0; i < MAP_HEIGHT; i++)
		{
			GOTOXY(imagePos.X, imagePos.Y + i);
			printf("%s", imagePtr->image[i]);
		}
		break;
	case 3 :
		imagePtr->image = mapImage3;
		for (int i = 0; i < MAP_HEIGHT; i++)
		{
			GOTOXY(imagePos.X, imagePos.Y + i);
			printf("%s", imagePtr->image[i]);
		}
		break;
	}
}

char ReturnValueFromStage(char(*map)[MAP_WIDTH + 1], COORD pos)
{
	char returnValue = ' ';
	returnValue = map[pos.Y][pos.X];
	return returnValue;
}

BOOL MoveToStage(char(*map)[MAP_WIDTH + 1], COORD playerPos, char exitMap)
{
	char stageChar = ReturnValueFromStage(map, playerPos);
	if (stageChar == exitMap)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void NEXTStage(char(*map)[MAP_WIDTH + 1], COORD mapPos)
{
	system("cls");
	ShowMap(map, mapPos);
	//SetImage(mapImagePtr, mapPos, index );
}

//bool cantMove(char map[MAP_HEIGHT][MAP_WIDTH + 1], COORD playerPos, char cantgo)
//{
//	if (playerPos.X < 0 || playerPos.X >= MAP_HEIGHT || playerPos.Y < 0 || playerPos.X >= MAP_WIDTH)
//	{
//	return true;
//	}
//	return map[playerPos.X][playerPos.Y] == cantgo;
//}
