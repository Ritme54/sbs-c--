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

#pragma region else문
	//if문을 포함한 여러 조건문에서 모든 조건이 맞지 않을 때 실행되는 조건문

	//if문에 연결되ㅣㄴ 모든 조건문의 조건이 맞을 때 가장 위의 조건문이 실행됩니다.

		//int number = 0;
	//
	//if (number > 0)
	//{
	//	printf("Posivite number");
	//}
	//else if (number < 0)
	//{
	//	printf("Negateive number");
	//}
	//else
	//{
	//	printf("Interger");
	//}

#pragma endregion


#pragma region 논리 연산자
	//두 개 이상의 조건을 결합하거나 하나의 조건을 반전시키는 연산자


#pragma region AND연산자
	//두개의 조건이 맞다면 실행되는 연산자

	//int strength = 20;
	//int intelligence = 30;
	//
	//if (strength >= 10 && intelligence >= 20)
	//{
	//	printf("success");
	//}
#pragma endregion

#pragma region OR연산자
	//두 개의 조건중 하나라도 맞다면 실행되는 연산자입니다.
//조건문의 논리 표현식을 평가하는 도중 결과가 이미 확정났다면 그 이후의 평가를 생략합니다.


//int gold = 13;
//int silver = 300;
//
//if (gold >= 20 || silver >= 200)
//{
//	printf("buy");
//}


#pragma endregion


#pragma region NOT 연산자
//하나의 조건을 반전 시키는 연산자이다.

//int power = 0;

	//if (!power)
	{	//
		//printf("power on");
	}	//
		//else
		//{
		//	printf("power off");
		//}


#pragma endregion

#pragma region 사분면
// 제 2사분면(-, +)  제 1사분면(+,+)
// 제 3사분면(-, -)  제 4사분면(+,-)
//원점(0, 0) 5,0(x절편)  0,5(y절편)

//int x = 0;
//int y = 0;
//
//if (x > 0 && y > 0)
//{
//	printf("제 1사분면");
//}
//else if (x < 0 && y > 0)
//{
//	printf("제 2사분면");
//}
//else if (x > 0 && y < 0)
//{
//	printf("제 4사분면");
//}
//else if (x<0 && y<0)
//{
//	printf("제 3사분면");
//}
//else if (x == 0 && y!= 0)
//{
//	printf("y절편");
//}
//else if (x != 0 && y == 0)
//{
//	printf("x절편");
//}
//else
//{
//	printf("원점");
//}
#pragma endregion

#pragma region switch문
//어떤 결과에 따라 그 결과부터 실행되는 명령문

//switch문에는 조건식으로 실수형 변수와 실수형 산수를 선언할 수 없다.

//int select = 5;
//switch (select)
//{
//case 0: printf("idle\n\n");
//	break;
//case 1: printf("attack\n\n");
//	break;
//case 2: printf("die\n\n");
//	break;
//default:printf("Exception\n");
//	break;
//}
//break문 탈출(중단)에 쓰임
#pragma endregion


#pragma endregion 

#pragma region continue문
	//해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문
	//
//	for (int x = 0; x < 10; x++)
//	{
//		if (x%3==0)
//		{
//			continue;
//		}
//		printf("x의 값%d\n", x);
//	}
#pragma endregion


#pragma endregion



	
#pragma endregion

#pragma region 대입 연산자, 복합 대입 연산자 써보기
// 복합 대입 연산자란 산술연산자와 대입 연산자를 하나로 나타내는 기호
	// a += b : a = a + b
	// 프로그래밍중 코딩을 간략하게 표현하여 가독성을 높이고자 할 때 사용
	// 복합 대입 연산자 기호 : +=, -=, *=, /=, %=

	//int x, y;
	//x = 20;
	//y = x;
	//
	//printf("x의 값 : %d\n", x); //x의 값 20
	//printf("x = y의 값 : %d\n", x = y); //y는 x의 값 20을 대입받음
	//printf("x+=y의 값 : %d\n", x += y); //x는 x + y의 값 20 + 20을 대입받음
	//printf("x-=y의 값 : %d\n", x -= y); //x는 x - y의 값 40 - 20을 대입받음
	//printf("x*=y의 값 : %d\n", x *= y); //x는 x * y의 값 20 * 20을 대입받음
	//printf("x/=y의 값 : %d\n", x /= y); //x는 x / y의 값 400 / 20을 대입받음
	//printf("x%%=y의 값 : %d\n", x %= y); //x는 x % y의 값 20 % 20을 대입받음	
	//

#pragma endregion

}