#include <stdio.h>



#


void main()
{

#pragma region 자료형 변환
	//서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때
	// 기존에 저장했던 자료형을 다른 자료형을 다른 자료형으로 변환하는 과정

#pragma region 암묵적 형 변환
	//서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정

	//int integer = 100;
	//	float decimal = 36.5f;
	//
	//	//										int +  float
	//printf("char 자료형의 크기:%u\n", sizeof(integer+decimal));




	//표현 범위가 작은 데이터에 표현 범위가 큰 데이터를 저장하게 되면
	// 암묵적으로 데이터 손실이 발생합니다.

#pragma endregion

#pragma region 명시적 형 변환
	//연산이 이루어지기 전에 사용자가 직접 자료형을 변환하는 과정입니다.

	//정수형 변수끼리 연산을 수행하게 되면 정수의 결과값만 가질 수 있다.
	//(자료형)변수

	//int a1 = 10;
	//int a2 = 3;
	//float b1 = (float)a1/a2;
	//
	//printf("b1변수의 값 : %f\n", b1);

#pragma endregion



#pragma endregion

#pragma region 전처리기
	//프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정입니다.

	//젖처리기는 컴파일러가 아닌 선행처리기에 의해 처리되는 문장이기 때문에
	// 명령문 끝에 ";"을 사용하지 않습니다.
	//전처리 -> 컴파일-> .obj-> Linking							ㄱ
	//							ㄴstart up code(헤더 파일들)    - .exe 파일
	//							ㄴ운영체체 결정
	// Linking쪽에서 문제가 터져질때
	// 
	// 
	// 속도 (C/C++ > C#)
	// 범용성 (C/C++ < C#)
	//linking


#pragma endregion

#pragma region 매크로
	//프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정

		//printf("SIZE의 값 : % d\n", SIZE);
		//SIZE=30;
		//매크로의 경우 자료형이 존재하지 않으으모, 메모리 공간을 가지고 있지 않다.
		//매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가 실행될 때 매크로의 대체 목록을
		//넣어야 하므로 프로그램의 크기가 커지게 된다.
#pragma endregion

	//printf("channel 변수의 값 ; %d\n", channel);




#pragma region 정수의 승격
	//정수의 승격은 정수형 변수끼리 연산을 수행할 때 더 큰 데이터 타입으로 변환되는 과정을 의미합니다.
	//char, short, int, long, long long 등의 정수형 데이터 타입이 있으며, 이 타입들끼리 연산할 때 
	// 자동으로 높은 데이터 타입으로 변환됩니다.
	//이 과정은 암묵적 형 변환의 일종으로, 프로그래머가 명시적으로 형 변환을 하지 않아도 자동으로 이루어집니다.
	//이러한 승격은 오버플로우를 방지하고, 연산의 정확성을 높이는 데 도움을 줍니다.
	//
	//char a = 10; 
	//short b = 20; 
	//int c = 30;
	//
	//int result = a + b + c; // char와 short는 int로 승격되어 연산됨
	//printf("a 메모리크기:%d\n", sizeof(a)); // 1byte
	//printf("b 메모리크기:%d\n", sizeof(b)); // 2byte
	//printf("c 메모리크기:%d\n", sizeof(c)); // 4byte
	//
	//printf("result 메모리크기:%d\n", sizeof(result)); // 4byte
	//printf("result의 값: %d\n", result); // 60

#pragma endregion



}