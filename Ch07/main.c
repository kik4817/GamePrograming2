/*
	ÀÛ¼ºÀÏ : 2025-03-21
	ÀÛ¼ºÀÚ : ±èÀÎ±¹
	ÁÖ Á¦ : ±¸Á¶Ã¼·Î °ÔÀÓ ¸¸µé±â
*/

/*
	Æ÷ÀÎÅÍ - ÁÖ¼Ò¸¦ ÀÌ¿ëÇÒ ¼ö ÀÖ°ÔµÇ¾ú´Ù.
	1. Æ÷ÀÎÅÍ º¯¼ö ¼±¾ðÇÏ´Â ¹ý        int* numptr;
	2. º¯¼ö·Î ºÎÅÍ ÁÖ¼Ò¸¦ È£ÃâÇÏ´Â ¹ý  int num; &num;
	3. ÁÖ¼Ò¿¡¼­ °ªÀ» ÂüÁ¶ÇÏ´Â ¹ý      *numberptr;
*/

/*
	Æ÷ÀÎÅÍ¿Í ¿¬»êÀÚ
	Æ÷ÀÎÅÍÀÇ µ¡¼À °á°ú : ÀÚ·áÇüÀÇ Å©±â¸¸Å­ Áõ°¡ÇÑ´Ù.
	¹è¿­             : (Æ÷ÀÎÅÍ ÁÖ¼Ò + i) i¹øÂ° ÁÖ¼Ò¸¦ È£­„³ª´À °Í
*/

/*
	±¸Á¶Ã¼ : »ç¿ëÀÚ Á¤ÀÇ ÀÚ·áÇü
*/

/*
	°ÔÀÓ¿¡ »ç¿ëÇÒ ÇÔ¼ö ±¸Çö
	Player - Item - Enemy
*/

/*
	±â´É
	1. ÀÌµ¿À» ±¸Çö
	2. »óÈ£ÀÛ¿ë ±¸Çö
*/

#include "player.h"

int main()
{
	// ÇÃ·¹ÀÌ¾îÀÇ ±âº» µ¥ÀÌÅÍ¸¦ ¼³Á¤
	COORD playerPos = { 0,0 };
	Player player = { "¸ðÇè°¡", playerPos }; // ÀÌ¸§, ÁÂÇ¥

	COORD itemAPos = { 5,5 };
	Item itemA = { "¾ÆÀÌÅÛA", itemAPos, false }; // ÀÌ¸§, ÁÂÇ¥, È¹µæ ¿©ºÎ

	COORD itemBPos = { 10,10 };
	Item itemB = { "¾ÆÀÌÅÛB", itemBPos, false };

	Item* GameItems[2] = { &itemA, &itemB };    // item¹è¿­À» °¡Á®¿Í¼­ »ç¿ëÇÏ´Â ÇÔ¼ö

	while (true)
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);

		GoXYCOORD(itemAPos);
		printf("¡Ù");

		//GoXYCOORD(itemBPos);
		//printf("¡Û");

		InteractWithItem(&player, &itemA); // ÁÖ¼Ò¿¡ µ¥ÀÌÅÍ°¡ º¯°æµÇÁö ¾Ê¾Ò´Ù. -> Call by Calue, Ref
		ShowPlayerItemInfo(&itemA);
		//ShowPlayerItemInfo(&itemB);
		//InteractWithItem(&player, &GameItems[2]);
		//showPlayerAllItemInfo(GameItems, 2);

		// ¹è¿­À» ¸Å°Ôº¯¼ö·Î ¹Þ¾Æ¿Í¼­ °¢°¡ÀÇ µ¥ÀÌÅÍ¿¡ Á¢±ÙÇÑ´Ù.


		
		Sleep(100);
	}
}