/*
	�ۼ��� : 2025-03-20
	�ۼ��� : ���α�
	�� �� : ����ü�� ������
*/

/*
	����ü�� �ּҸ� �����ϰ� ����ϴ� ���
	
	����ü�� ������ TYPE : Player

	Ÿ���̸�* �̸�;
	Player* playerPtr;	
*/

/*
	����ü �������� ���� �����ϴ� ���

	void ShowPlayerInfo(Player* playerPtr)

	 1. playerPtr �ּ��̱� ������ ���� ������ �ؾ��Ѵ�. �����������ڸ� ���(*playerPtr)
	 2. ����ü�̤� �������� �����Ϳ� �����ϴ� ������ (���� ������ '.' (*playerPtr).playerName;
	 3. *playerPtr.playerName �������� �켱������ �����ϱ� ������ *(playerPtr.playerName)
	    -> playerPtr �ּҿ��� playerName ������ �Ŀ� �� �ּ��� ���� ����������.
	 4. ȭ��ǥ ������ : ����ü�� �ּ� ����-> *(playerPtr.������ ������) 
	{
	  (*playerPtr).playerName;
	  playerPtr->plaeyrName;
	}
	
*/

#include "StructPointer.h"
#include "GameUI.h"

int main()
{
	//Ch6Example();

	GameStart();
}