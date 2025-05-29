#include <stdio.h>

void main()
{

#pragma region 주소 연산자
	//변수의 주소 값을 반환하는 연산자 %p

//	int data = 10;
//	printf("data변수의 주소 : %p\n", &data);

	//데이터의 주소 값은 해당 데이터가 저장된 메모리의 시작 주소를 의미합니다.


#pragma endregion

#pragma region scanf_s 함수
	//               _s=시큐리티(안전)
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수

	//표준입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없습니다.

	//int A1 = 0;
	//
	//printf("A1 변수의 값을 입력 : ");
	//
	//scanf_s("%d", &A1);
	//
	//printf("A1의 변수의 값 : %d\n", A1);

	//버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며
	//형식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.

	//표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관하였다가
	//입력하는 순간 버퍼 안의 내용을 프로그램에 전송한다.

	//로딩= 데이터를 불러오는 작업(자연스럽게 처리하기 위해 로딩화면을 뛰운다던가)
	//동기 방식 = 맵 불러오기 끝->애니메이션 로딩
	//비동기 방식 = 맵 불러오기 X% -> 애니메이션 로딩 X% ->반복

	//버퍼(임시로 데이터를 받아두는 공간?)
	//소프트웨어 처리속도 > 하드웨어 처리속도


#pragma endregion

#pragma region 포인터
	//메모리의 주소 값을 저장할 수 있는 변수입니다.
	//int *변수명 -----ㄱ 1 2 3 4 
	// int packet = 10; ㅁㅁㅁㅁ 
	//					 00ffaa01~4
	// 
	//포인터 변수도 자신의 메모리 공간을 가지고 있으며
	//포인터 변수에 변수의 시작 주소를 저장하게 되면
	//해당 변수의 시작 주소를 가리키게 됩니다.

	//int X = 10;
	//int* Y = &X;
	//
	//	printf("X의 주소 : %p\n", &X);
	//	printf("Y의 주소 : %p\n", Y);

	//포인터 변수는 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.

	//int packet = 10;
	//int* pointer = &packet;
	// 
	// *pointer= &packet ==역참조
	//
	//*pointer = 99; 
	//
	//
	//
	//printf("packet의 값 : %d\n", packet);
	//printf("pointer가 가르키는 값 : %d\n", *pointer);
	//
	//**		int storage = 20;
	//**        pointer = &storage;
	//
	//printf("storage의 주소 : %p\n", &storage);
	//printf("pointer의 값: %p\n\n", pointer);

	//포인터 변수의 크기는 중앙 처리 장치가 한번에 처리할 수 있는 크기로 정해지며,
	//한번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.

	//("pointer변수의 크기: %u\n", sizeof(pointer));

#pragma endregion

#pragma region 상수 지시 포인터
	//포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록
	//지정되어 있는 포인터 입니다.

	//const 자료형* =메모리 접근해서 값 바꾸는게 막혀있다.

		//int height = 10;
		//int width = 20;
		//
		//const int* pointer= &height;
		//
		////*pointer = 33;
		//printf("pointer의 값 : %p\n", pointer);
		//printf("pointer의 값 : %d\n", *pointer);
		//
		//pointer = &width;
		//printf("pointer의 값 : %p\n", pointer);
		//printf("pointer의 값 : %d\n", *pointer);


#pragma endregion

#pragma region 포인터 상수
	//포인터 변수가 가리키고 있는 주소 값을 변경할 수 없도록 지정되어 있는 포인터 입니다.
	//자료형 (int) *const 변수 고정
//    ex)int *const A=;
//int Maxhp = 200;
//int Maxmp = 100;
//
//int* const point = &Maxhp;
////	int* point = &Maxmp;
//
//printf("point주소의 값:%p\n", point);
//printf("point의 값 : %d\n", *point);

#pragma endregion


#pragma region 범용 포인터
	//자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터 입니다.

	//void * 변수

//char x = 'A';
//
//int y = 12;
//
//float z = 34.5f;
//
//void* pointer = &x;
//
//*(char*)pointer = 'B';
//
//pointer = &y;
//
//*(int*)pointer = 20;
//
//pointer = &z;
//
//*(float*)pointer = 7.5f;
//
//printf("x주소의 값 : %p\n", &x);
//printf("y주소의 값 : %p\n", &y);
//printf("z주소의 값 : %p\n", &z);
//
//printf("x변수의 값 : %c\n", x);
//printf("y변수의 값 : %d\n", y);
//printf("z변수의 값 : %f\n", z);

// *pointer = 'A'; 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없으므로
//범용 포인터가 가리키는 변수의 자료형으로 변환해주어야 한다.
//(int*) <-형변환

#pragma endregion



}