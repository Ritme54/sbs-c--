#include <stdio.h>
#include <stdarg.h>


void Stats(int health, const char* name)
{

	printf("health : %d\n", health);
	printf("name : %s\n", name);


}

void Swap(int *left, int *right)
{
	int temporary = *left;
	*left = *right;
	*right = temporary;


}


inline void collision()
{
	
	printf("You Die");

}

void Provide()
{
	printf("Provide\n");

}

void main() 
{


#pragma region 함수


	//하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합.
	// 
	//함수는 프로그램이 실행 중일때 함수 호출 위치에서 해당 함수로 이동한 뒤,
	//작업을 수행하고 다시 원래 위치로 돌아오는 구조
	// 함수가 작동하면 함수를 찾아가서 위에서 아래로 실행한다.
	// 
		//process();




#pragma region 매개변수

//함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수

//매개 변수는 함수 내부에서만 연산이 이루어지며,
//여러 개의 매개 변수를 생성할 수 있습니다.

	//Stats(100, "slime");

	//Stats(200, "ime");

	//Stats(300, "lime");

#pragma endregion


#pragma region 인수
	//함수가 호출될 때 매개 변수에 실제로 전달되는 값

	//인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의 자료형이 서로 일치해야 합니다.

	//int X = 10;
	//int Y = 20;
	//Swap(&X, &Y);
	//printf("X의 값 : %p\n", X);
	//printf("Y의 값 : %p\n", Y);
	

#pragma endregion



#pragma endregion


#pragma region 레퍼런스


#pragma endregion


#pragma region Call by Value문제 (숙제)
	//Call by Refence (참조에 의한 해결)
	//주소값을 참조해서 해결해보기


#pragma endregion


#pragma region 재귀 함수
	//어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.
		
	//Recursion(3);
	
	//return = 함수를 끝낸다.(종료)
	
	//void Recursion(int count)
//{
//
//	if (count <=0)
//	{
//		return;
//	}
//
//	printf("Recursion\n");
//	Recursion(count - 1);
//}



#pragma endregion

#pragma region 인라인 함수
	//함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 복사하여 전달하는 방식의 함수

	//이벤트 기반 = on이란 전치사 많이 사용
	// 오버해드(찾아보기)
	//in line

	
	//collision();



	//인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가 빠르지만
	//인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에 실행 파일의 크기가 커지게 된다.


#pragma endregion

#pragma region 가변 인수 목록
	//고정되어 있는 매개 변수 외에 개수가 정해지지 않은 인수를 추가로 받을 수 있는 인수입니다.

	//stdarg.h
	//va_list 인수 목록
	//va_start 시작 포인터 주소 가르키기
	//->va_arg 값을 반환하는 함수
	//va_end (안해도 큰 문제가 없을 수 있음) NULL로 초기화를 시켜주는 변수
	
	//void average(int count, ...)
	// 
	//va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수
	//va_list : 변수
	//va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수
	//va_start(포인터, count)
	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수
	// va_arg(포인터, 특정한 자료형(int 또는 duble)
	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수
	// va_end(포인터)	


#pragma endregion

#pragma region 함수 포인터
	//함수의 주소 값을 저장하고 가리킬 수 있는 포인터 변수입니다.
	//자료형(*변수 이름)(매개변수, 매개변수)
	//대신 호출하는 방식




//포인터가 시작 주소를 가리킨다.

//void Provide()
//{
//	printf("Probide\n")
//
//}

//서로 커플링 시키지 않고 이벤트 버스를 만들어서 대신 호출하게 한다.

void(*functionPointer)();

functionPointer = Provide;

functionPointer();

	
#pragma endregion




}


