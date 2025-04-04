#include "PointerOperator.h"
#pragma once

void PointerExample()
{
	// sizeof()
	int number1 = 0;
	int* number1Ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumber1Ptr = &doubleNumber1;

	printf("\n\n");
	printf("포인터 연산 에제\n");
	printf("int 데이터의 크기 : %d\n", sizeof(number1));
	printf("double 데이터의 크기 : %d\n", sizeof(doubleNumber1));

	// 정수의 크기가 4
	// 주소의 크기는 어떻게 될까?
	printf("int 주소의 크기 : %d\n", sizeof(number1Ptr));
	printf("double 주소의 크기 : %d\n", sizeof(doubleNumber1Ptr));

	// x86 주소의 크기 실행 : 4바이트
	// x64 주소의 크기 실행 : 8바이트
	// 주소는 크기가 일정하다. 고정되어 있다. 동적 할당.

	// 주소 자체를 더하기 vs 주소를 참조해서 더하기
	// 변수를 사용하는데, 컴퓨터가 어딘가에 기억하고 있습니다. 주소라는 이름으로 기억하고 있다.
	// 변수의 이름으로 값을 가져올 수 있고, 주소로 부터 값을 가져올 수도 있습니다.

	// 주소 현태로 가져오는 방식(참조 형식) - 프로그램이 종료되거나, 직접 메모리를 해제하기 전까지 계속 남습니다. - 힙(Heap) 영역
	// 변수의 이름으로 가져오는 방식(값 형식) - () 코드 영역이 끝나는 시점에 메모리가 해제됩니다.              - 스틱(Stack) 영역

	// 모든 코드를 항상 저장하면 안될까요?
	// 게임 점수를 일정 값만큼 증가시키는 코드를 작성하고 싶어요.
	// 저장되어야함 데이터 : 게임 점수, 
	// 한 번만 사용하고 지우면 좋을 것 같다 : 게임 점수를 증가하고 싶은 가증치
	// 10분 실행된다.  
	 
	// 모든 코드를 한 번만 사용하고 저장을 안하면?	
	// GameScore 포인터로 변경해서 저장하는 기능을 구현할 수 없게 된다.

	// Call By Calue, Call By Reference 구분해서 사용해야 할 이유

	printf("number1Ptr의 값을 출력 : %d\n", (*number1Ptr) + 1);

	// 주소를 더해보자

	printf("주소를 출력해보자\n");
	printf("현제 주소 : %p\n", number1Ptr);
	// 주소를 더하면 어덯게 될까? 배열, 포인터
	number1Ptr = number1Ptr + 1;
	printf("현제 주소 : %p\n", number1Ptr);

	printf("double 주소 : %p\n", doubleNumber1Ptr);
	
	doubleNumber1Ptr = doubleNumber1Ptr + 1;
	printf("double 주소 : %p\n", doubleNumber1Ptr);

	// 주소를 더하면, 주소의 값이 가지고 있는 크기 만큼 증가한다.
	// 배열과 포인터의 관계 중요(★)

	

	
}
