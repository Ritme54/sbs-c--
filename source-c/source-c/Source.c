#include <stdio.h>

void main()
{
#pragma region 조건문
	//어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문

#pragma region 관계 연산자
	//두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로 나타냄

	//> : 왼쪽의 값이 더 크다면
	//< : 오른쪽의 값이 더 크다면
	//>= : 왼쪽의 값이 크거나 같다면
	// <= : 오른쪽의 값이 크거나 같다면
	// == : 값이 서로 같다면
	// != :	값이 서로 다르다면
#pragma endregion

<<<<<<< HEAD
#pragma region if문
	//어떤 특정한 조건을 비교하여 조건이 맞는다면 실행되는 조건문

	//if문은 조건이 1일때 실행되며 0일때 실행되지 않는다.

	//int attack = 40;
	//
	//
	//if (attack>30)
	//{
	//	printf("\n");
	//}
#pragma endregion

#pragma region else if문
	//if문에서 여러개의 조건을 순차적으로 검사하고 싶을때 사용하는 조건문
	//else if문의 경우 여러 개를 사용할 수 있으며 if문 부터 위에서 하나씩 검사하다가 가장 먼저 조건이 맞는 분기로 들어갑니다.

	//int 힘 = 25;
	//int 민첩 = 30;
	//
	//
	//
	//if (힘 >= 30)
	//{ 
	//	printf("통과");
	//}
	//else if (민첩>=30)
	//{
	//	printf("통과");
	//}
	//
	//int second = 3600;
	//
	//if (second == 60)
	//{
	//	printf("1minute");
	//}
	
	//else if (second == 3600);
	//{
	//	printf("1hour");
	//}

#pragma endregion


#pragma endregion


=======
	// 복합 대입 연산자란 산술연산자와 대입 연산자를 하나로 나타내는 기호
	// a += b : a = a + b
	// 프로그래밍중 코딩을 간략하게 표현하여 가독성을 높이고자 할 때 사용
	// 복합 대입 연산자 기호 : +=, -=, *=, /=, %=

#pragma endregion

#pragma region 대입 연산자, 복합 대입 연산자 써보기

	int x, y;
	x = 20;
	y = x;

	printf("x의 값 : %d\n", x); //x의 값 20
	printf("x = y의 값 : %d\n", x = y); //y는 x의 값 20을 대입받음
	printf("x+=y의 값 : %d\n", x += y); //x는 x + y의 값 20 + 20을 대입받음
	printf("x-=y의 값 : %d\n", x -= y); //x는 x - y의 값 40 - 20을 대입받음
	printf("x*=y의 값 : %d\n", x *= y); //x는 x * y의 값 20 * 20을 대입받음
	printf("x/=y의 값 : %d\n", x /= y); //x는 x / y의 값 400 / 20을 대입받음
	printf("x%%=y의 값 : %d\n", x %= y); //x는 x % y의 값 20 % 20을 대입받음	


#pragma endregion
>>>>>>> 6c92ca68424c8d06078d78bc035f58215a2b8258


}