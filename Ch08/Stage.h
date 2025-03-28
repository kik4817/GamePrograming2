#pragma once

char sword[4][4] =
{
	" * ",
	" * ",
	"***",
	" * ",
};

typedef struct
{
	char* name;
	char (*map)[6]; // 이중 배열을 포인터로 표현하는 형태
}Stage;

// 구조체 맵의 정보 (맵의 이름, 맵의 이미지)
// 구조체 아이템의 정보 (아이템 이름, 아이템 레벨, 아이템 이미지)
// 화면에 출력하는 코드

Stage GetStageInfo(int stageNumber); // 맵이 10개, 번호를 이용해서 맵의 정보를 가져오는 함수



// map = stage1;
