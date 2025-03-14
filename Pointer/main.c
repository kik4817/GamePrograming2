/*
	�ۼ��� : 2025-03-13
	�ۼ��� : ���α�
	�� �� : �����Ϳ� ���� ���� 
*/

/*
	�����Ͱ� �����ΰ�?
	�����ʹ� �ּ��̴�.
	������ ���� : � �����͸� �����ϴ°�, �������� ũ��� ��� �Ǵ°�?
	��ǻ���� ���� : �̸����� ������ ȣ���Ѵ�. �ּҸ� ����Ѵ�.
*/

/*
	������ ����
	int number; number ������ ���� ������ �� �ִ�. number�� �ּҸ� ���� �ִ�.
	�ּ� �����ڸ� ����ؼ� ������ ����ִ� �ּҸ� ����� �� �ִ�. &number;
	������ �� : �ּ� �����ڴ� ������ ����ǰ� �� ���Ŀ� ����ؾ� �Ѵ�.

	������ ������ ������ �� ����ϴ� ��ȣ
	������ ������ : int* pointernumber;
	
	������ ������ ����ǰ� �� ���Ŀ� ���Ǵ� ��ȣ
	������ ������ : *pointernumber;
*/

/*
	������ ��𿡼� ����ϸ� ������?

	��ǻ�� �ȿ� �޸𸮸� �����ϴ� ����, �޸� �ּҸ� ������ �ϰ� �־���.
	�ּҸ� �˰� ������ ���� ��𼭳� ���� ������ �� �ִ�.
		
		- ����? ������ ����� �ΰ� ����� �߾�� �Ѵ�. ���α׷� ���� �߿� �޸𸮸� �Ҵ��ϰ� ����ϴ� ��� - ���� �Ҵ�
		- ���? �Լ����� ����� ���� �ܺο� ������ �ȵȴ�. Call By Reference
*/

/*
	����
	��ǻ���� �ּҸ� ��� ���
	 1. ������ ������ �����ϴ� ��� int* ������ ���� �̸�;
	 2. ������ ���� �ּҸ� �������� ��� - �ּҿ����� int number = 10; &number;
	 3. �ּҷ� ���� ���� �������� ��� int* numPtr;, *numPtr;
*/

#include <stdio.h>
#include "lecture.h"

// Call by Value vs Call by Reference

void CallValue(int number)
{
	number = 100;
}

void CallReference(int* numberPtr)
{
	// L - Value '=' R - Value
	//  int �ּ�       int
	// 16���� 0��019451ABC   10���� ����
	// �ΰ��� Ÿ���� �ٸ���. ���������� ���� �������� �Ѵ�.
	*numberPtr = 100;
}

void SwapPreview(int numA, int numB)
{
	int temp; // �����͸� �ӽ� ����
	temp = numA; // A �ӽ� ����
	numA = numB; // A�� B�� �� ����
	numB = temp; // B�� A�� �� ����

	// �̸� ���� ����
	printf("���ߵ� numA�� �� : %d\n", numA);
	printf("���ߵ� numB�� �� : %d\n", numB);
}

// �ܺο��� ������ ���� �����ϰ� �ʹ�. -> �ּ��� ���� �����Ѵ�.
void Swap(int* numA, int* numB)
{
	int* temp;
	temp = *numA;
	*numA = *numB;
	*numB = temp;
	
}

int main()
{
	printf("�����Ͱ� �����ΰ�\n");

	// �ǽ� 1. �����Ͱ� �����ΰ�
	int number = 10;
	printf("���� ��� : %d\n", number);
	// �����͸� ���
	printf("������ ��� : %p\n", &number);

	// �ǽ� 2. ������ ���
	// * , &
	// ������ ����

	int* pointerNumber;    // ������ ������ ����
	int num1 = 10;         // ������ ���� - �ּҰ� ���� ����
	pointerNumber = &num1; // ������ ������ ������ �ּҰ��� ����
	printf("������ ��� : %p\n", pointerNumber);
	printf("���� ��� : %d\n", *pointerNumber);

	// �������� : ������ �ǽ�

	// float�� ������ �����ϰ� �� ������ �ּҸ� �ٷ��غ�����.
	// �ּҿ� ����ִ� ���� ������ �����ڷ� ȣ���غ�����.
	
	float floatNum = 0.1f;
	float* floatPointer = &floatNum;

	// �ּҰ� ���
	// 0.1���� ��������;
	printf("�ּҰ��� ����Ѵ� : %p\n", &floatNum);
	printf("�ּҷ� ���� ���� ����ϱ�: %f\n", *floatPointer);

	int num2 = 5;
	int* num2Ptr = &num2;
	printf("�ּҰ��� ����Ѵ� : %p\n", &num2);
	printf("�ּҷ� ���� ���� ����ϱ�: %d\n", *num2Ptr);

	long long longNum = 100;
	long long* longNumptr = &longNum;

	printf("long long ����\n");
	printf("�ּҷ� ���� ���� ����Ѵ� : %d\n", *longNumptr);

	char charNum = 'A';
	char* charNumptr = &charNum;
	printf("�ּҰ��� ����Ѵ� : %p\n", &charNum);
	printf("�ּҷ� ���� ���� ����ϱ�: %c\n", *charNumptr);
		
	// Call by Value, Call by Reference

	printf("Call By Value, Call By Reference ����\n\n");

	int exampleNumber = 10;
	int* exampleNumberPtr = &exampleNumber;

	CallValue(exampleNumber);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n", exampleNumber);
	CallReference(exampleNumberPtr);
	printf("CallValue ���� �� exampleNumber�� �� : %d\n\n", exampleNumber);


	// swap�� �����غ���.
	// numA, numB, temp
	// ������ ��ȭ�Ǿ� �ִ� ���¸� ����ϰ� �ͽ��ϴ�.
	// �ѹ��� �� �� �ֵ��� ����� �����մϴ�.

	// ������ ����� �ϴ� ����
	int weaponLv = 1;
	int weaponBaseAP = 10;
	int weight = 5;

	int weaponPower = weaponLv * weight + weaponBaseAP;

	int* saveWeaponDat = &weaponPower;

	// 2���� ������� weaponPower ������ �� �� �ֽ��ϴ�.
	printf("���� ���ݷ� : %d\n", weaponPower);
	printf("���� ���ݷ� : %d\n\n", *saveWeaponDat);


	// Swap ����

	int numA = 50;
	int numB = 60;

	SwapPreview(numA, numB);

	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);


	Swap(&numA, &numB);
	printf("���� numA, numB�� ��\n");
	printf("numA : %d, numB : %d\n", numA, numB);

}