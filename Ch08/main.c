/*
	�ۼ��� : 2025-03-24
	�ۼ��� : ���α�
	�� �� : ���ڿ��� ����
*/

/*
	���ڿ� : �迭�� �̷���� ����
	string : char(acter) array
*/

/*
	���ڿ� ���� ����� ����.
*/

#include "MyString.h"
#include "Player.h"

/*
	" " ���ڿ��� �迭
	" " ���� + 1 ũ�Ⱑ �����Ǿ� �ִ�.
	"apple" a,p,p,l,e,'0\' ���ڿ��� ���Ḧ �Ǹ��Ѵ�
	"apple is" | 01010001 ���ڿ��� ���� �˷��ֱ� ���ؼ� '\0'
*/

#define STAGE_HEIGHT 5
#define STAGE_WIDTH 6

// ������ ���̱� �� ũ�� ����� �̻��ϰ� ��µȴ�.

char stage1[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"######",  // char 2���� �迭
	"#    #",
	"# #  #",
	"#    #",
	"######"
};
char stage2[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"######",  // char 2���� �迭
	"#    #",
	"# #  #",
	"#    #",
	"######"
};

int main()
{
	//ArrayExample();
	
	// 1. ���� ����

	// �÷��� �� ĳ������ �̸��� �����Ѵ�. SetPlayerName
	
	// int, double �ּ� ( & )
	// ���ڿ�(������ �迭) �迭�� �̸��� �ּ�
	
	/*char* playerName;
	
	printf("�÷��̾��� �̸��� �Է����ּ���\n");
		
	char input[50];

	scanf_s("%s", input, 50);	
	playerName = input;
	printf("%s", playerName);*/
	
	//SetPlayerName(playerName);
	// char*�� ������ �ؼ� ���� �� �� �����͸� ȣ���Ѵ�. ShowPlayerInfo

	Player player;
	Player* playerPtr = &player;
	char inputA[10] = "";
	printf("�÷��̾��� �̸��� �Է����ּ���.\n");
	scanf_s("%s", inputA, 10);
	SetPlayer(&player, inputA);
	ShowPlayerInfo(&player);
	//printf("�÷��̾��� �̸� : %s\n", player.name);
	
	// 2���� �迭
	printf("\n");
	printf("�� ���\n");

	// ����x1�� ����xn�� ���
	for(int i=0; i<STAGE_HEIGHT; i++)
	{
		printf("%s\n", stage1[i]);
	}
	
}