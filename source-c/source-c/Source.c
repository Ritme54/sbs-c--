#include <stdio.h>


//void Stats(int health, const char* name)
//{
//
//	printf("health : %d\n", health);
//	printf("name : %s\n", name);
//
//
//}

void Swap(int left, int right)
{
	int temporary = left;
	left = right;
	right = temporary;


}

void main() 
{


#pragma region 함수


	//하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합.
	// 
	//함수는 프로그램이 실행 중일때 함수 호출 위치에서 해당 함수로 이동한 뒤,
	//작업을 수행하고 다시 원래 위치로 돌아오는 구조
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

	int X = 10;
	int Y = 20;
	
	int x = &X;
	int y = &Y;

	printf("%p\n", &X);
	
	printf("%p\n", &Y);
	printf("%d\n", Y);
	//임시변수
	//
	//  int Z = Y;
	 // Y = X;
	 // X = Z;
	//

	Swap(&x, &y);

	printf("x의 값 : %p\n", x);
	printf("y의 값 : %p\n", y);
	

#pragma endregion



#pragma endregion

#pragma region 레퍼런스


#pragma endregion


#pragma region Call by Value문제 (숙제)
	//Call by Refence (참조에 의한 해결)
	//주소값을 참조해서 해결해보기




#pragma endregion





}