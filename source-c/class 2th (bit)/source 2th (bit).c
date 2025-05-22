#include <stdio.h>

void main()
{
#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0또는 1의 조합으로 논리 계산을 수행하는 단위이다.
	// 메모리는 비트 단위로 데이터를 저장할 수 있으며
	// 한개의 비트에는 0 또는 1의 값만 저장할 수 있습니다. 8bit = 1byte

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬
	// ex(10= 1010 15=1111)

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1byte에 2진수로 저장된 값을 2의 제곱으로 나타낸다.
	//각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	//각각의 비트를 모두 더하여 10진수로 나타냅니다.


#pragma endregion


#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자
	// AND 연산자 

#pragma endregion
#pragma region  AND 연산자
	//두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.

	//int x1 = 10; // 00001010
	//int y1 = 6;  // 00000110
	//             // 00000010 = 2
	//
	//printf( x1 & y1 : %d\n, x1 & y1);

#pragma endregion

#pragma region OR 연산자
	//두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자
	//8 or 12 0001000 00001100
	//                00001100 = 12
	//|=OR 연산자

	//int x2 = 8;
	//int y2 = 12;
	//
	//printf("x2 | y2 : %d", x2 | y2);
	//

#pragma region XOR 연산자

	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면 1을 반환하는 연산자

	//x3=3;00000011
	//y3=8;00001000
	//     00001011 = 11

	//int x3 = 3; //00010001
	//int y3 = 8; //00010110
	//             //00000111
	//printf("x3 ^ y3 %d", x3 ^ y3);



#pragma endregion

#pragma region NOT 연산자

	// 비트를 반전시키는 연산자.

		//char packet = 14; 00001110
		//                  11110001= 
		//비트의 경우 가장 앞에 있는 비트는 부호를 나타내며 1이 있다면 값은 음수가 됩니다
		// -128+64+32+16+1
		//printf("~packet %d", ~packet); = -15


#pragma endregion

#pragma region 시프트 연산자

	//값의 모든 비트를 지정한 수만큼 특정한 위치로 이동시키는 연산자

	//char data = 10; //00001010 
	 //왼쪽시프트 : << 이동할 칸만큼 숫자를 적는다
	 // 
	 //오른쪽 시프트 : >> 

	//printf("data<<2 : %d\n", data << 2);
	//printf("data>>2 : %d\n", data >> 2);
#pragma endregion



#pragma endregion

#pragma region  오버플로우
	//특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정

	//char byte = 129;
	//-128=10000000
	//printf("byte 변수의 값 : %d", byte);
	//실수일때 오버플로우가 발생하면 infinity 라는 값으로 출력된다


#pragma endregion

#pragma region  언더플로우

//특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정
//언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
//실수일 때 언더플로우가 발생하면 0이라는 값으로 출력합니다.

//char byte = -129;
//printf("byte 변수의 값 : %d", byte);
#pragma endregion

#pragma region  부호 없는 자료형

//정수 값을 저장할 수 있는 자료형 중에서,
//부호 비트 없이 양의 정수와 0만을 표현할 수 있는 자료형 0~X까지 %u

//실수는 IEEE 754 구조가 부호 비트를 포함하고 있으므로 부호 없이 사용할 수 없습니다.

//int experience = -1;
//printf("experience 변수의 값 : %u\n", experience);
//
//experience = 4294967295;
//printf("experience 변수의 값 : %d\n", experience);

#pragma endregion

#pragma region 실수를 저장하는 방법

//값이 6.125일때 정수를 따로 때서 구한다 
//6 = 00000110
// 0.125*2=0.25 ~~~ 0
// 0.25*2= 0.5  ~~~ 0
// 0.5*2 = 1.0  ~~~ 1
// 00000110.001

//double attack = 0.3f;
//printf("attack 변수의 값 : %.f\n", attack); //소숫점 원하는 자리까지 할때는 %.Nf N=숫자

#pragma region 고정소수점
 // 소수점의 위를 고정하여 소수점의 위치를 나타내는 방법
// 고정 소수점은 정수부와 소수부의 크기가 작으므로 표현할 수 있는 범위가 한정되어 있습니다.
//고정소수점 = 1bit | 15bit | 16bit

//float 단정도 32bit , double 배정도 64bit
#pragma endregion

#pragma region 부동소수점
// 소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법입니다.
//가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않습니다.
// 부동소수점 32bit = 1bit |8bit | 23bit
//                          지수   가수
//정규화 bias 8bit 
#pragma endregion


#pragma endregion


}