#include <stdio.h>

void main()
{
#pragma region 대입연산자

	//숙제 2025.05.22 (대입 연산자 사용하기)

	//대입 연산자 기호 : =
	//변수명 = 값; : 오른쪽 값을 왼쪽에 대입(할당)
	//변수명 = 변수; : 오른쪽 변수에 저장된 값을 왼쪽 변수에 대입(할당)
	//변수명 = 수식; : 오른쪽 수식의 연산값을 왼쪽 변수에 대입(할당)

	// 복합 대입 연산자란 산술연산자와 대입 연산자를 하나로 나타내는 기호
	// a += b : a = a + b
	// 프로그래밍중 코딩을 간략하게 표현하여 가독성을 높이고자 할 때 사용
	// 복합 대입 연산자 기호 : +=, -=, *=, /=, %=

#pragma endregion

#pragma region 대입 연산자, 복합 대입 연산자 써보기

	//int x, y;
	//x = 20;
	//y = x;

	//printf("x의 값 : %d\n", x); //x의 값 20
	//printf("x = y의 값 : %d\n", x = y); //y는 x의 값 20을 대입받음
	//printf("x+=y의 값 : %d\n", x += y); //x는 x + y의 값 20 + 20을 대입받음
	//printf("x-=y의 값 : %d\n", x -= y); //x는 x - y의 값 40 - 20을 대입받음
	//printf("x*=y의 값 : %d\n", x *= y); //x는 x * y의 값 20 * 20을 대입받음
	//printf("x/=y의 값 : %d\n", x /= y); //x는 x / y의 값 400 / 20을 대입받음
	//printf("x%%=y의 값 : %d\n", x %= y); //x는 x % y의 값 20 % 20을 대입받음	


#pragma endregion

#pragma region 반복문
	//프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문

#pragma region 증감 연산자
	//피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자


#pragma endregion

#pragma region 전위 증감 연산자
	//변수의 값을 증감시킨 후에 연산을 수행하는 연산자입니다.

	//1. 값을 증감시킵니다. 2. 값을 할당합니다.

	//int x1 = 0;
	//int x2 = ++x1;
	//
	//printf("x1변수의 값 : %d\n", x1);
	//printf("x2변수의 값 : %d\n", x2);
	// 
	//x2 = --x1;
	//printf("x1변수의 값 : %d\n", x1);
	//printf("x2변수의 값 : %d\n", x2);
#pragma endregion

#pragma region 후위 증감 연산자
	//연산을 수행한 다음 변수의 값을 증감시키는 연산자입니다.

	//int z1 = 0;
	//int z2 = 0;
	//
	//z1 = z2++;
	//
	//printf("z1변수의 값 : %d\n", z1);
	//printf("z2변수의 값 : %d\n", z2);
	//
	//z2 = z1--;
	//
	//printf("z1변수의 값 : %d\n", z1);
	//printf("z2변수의 값 : %d\n", z2);


#pragma endregion

#pragma region for문
    // 초기식을 연산하여 조건식의 결과에 따라 특정한 수만큼 반복하는 반복문
	
	//반복문이 동작하는 순서는 "초기화>조건 검사>실행
	//초기식>조건식>반복문 안에서 실행될 내용
	
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("i변수의 값 : %d\n", i);
	//}
	
	//for (int i = 0; i < 50; i++)
	//{
	//	printf("i변수의 값 : %d\n", i);
	//}
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문.

	//while (조건)
	//{
	//}

	
	//int am= 30;
	//while (am>0)
	//{
	//printf("am변수의 값 : %d\n", am);
	//am--;
	//}
	
	//int am = 0;
	//while (am < 31)
	//{
	//	printf("am변수의 값 : %d\n", am);
	//	am++;
	//}

// 반복문을 순차적으로 실행하면서 조건 분기를 만나게 되면
	// 어느 쪽으로 실행 흐름이 갈 지 미리 예측입니다.
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문

//int G = 0;

//do
//{
//	printf("access");
//} while (G > 3);


	// 반복문의 경우 미리 예측해서 실행하는 구조를 가지며
	//예측이 틀렸다면 현재 반복문 내의 조건 분기만 다시 검사하여 처리함.



#pragma endregion

#pragma region nested for문
    //for문 안에 for문이 있는 경우

   // for (int i = 0; i < 3; i++)
   // {
   // 	printf("i변수의 값 : %d\n", i);
   // 
   // 	for (int j = 0; j < 3; j++)
   // 	{
   // 		printf("j변수의 값 : %d\n", j);
   // 	}
   // 	printf("\n");
   // }


#pragma endregion


#pragma endregion






}