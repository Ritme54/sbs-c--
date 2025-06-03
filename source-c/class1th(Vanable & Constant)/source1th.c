//소스 파일>우클-추가> 새 항목



#include <stdio.h>
//헤더

	 //main 함수는 프로그램의 진입점 역할을 하는 함수
void main()
{
	//printf("Gunman");

#pragma region 자료형
	//데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.
	// 자료형은 각각의 자료형마다 크기가 정해져 있으며 크기는 바이트 단위로 이루어짐.

	//자료형 변수의 이름=데이터; (;=한 문장의 끝을 알리는 기호)
	//자료형의 경우 자료형에 따라 저장할 수 있는 종류와 범위가 결정됨
	//단일 문자 저장 용어[ char:단일 문자 'A'(따움표 안)
	//int:정수형, float : 실수형

	//char packet 

#pragma endregion

#pragma region  변수 초반
	//데이터를 저장할 수 있는 메모리 공간을 생성하는 것
	//타자(한/영) 연습

	//뭔가를 만든다 할때 그것의 설정을 넣는다 하면 메모공간을 만들어준다.
	// 자료형 어떤 데이터를 저장할 수 있는지


	// char alphabet = 'A';
	// 
	// int integer = 100;
	// 
	// float decimal = 36.5f;

	//변수의 메모리 공간은 프로그램이 실행될 때마다 바뀝니다.
	//변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며
	// 원래 저장되어 있는 값은 새로 저장된 값에 의해 지워진다,
	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", integer);
	// printf("decimal 변수의 값 : %f\n", decimal);
	// 
	// alphabet = 'b';
	// integer = 200;
	// decimal = 7.5f;
	// 
	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", integer);
	// printf("decimal 변수의 값 : %f\n", decimal);

	//형식 지정자 
	// 단일 문자 %c,   정수 %d,    실수 %f
	// 
	// 변수 이름 규칙 네이밍 컨벤션 (예시:마이크로 소프트 컨벤션)
	// camel 표기법 :  첫 단어는 소문자로 그다음 단어부터 대문자로 [예시 : underScore]
	// pascal 표기법 : 단어의 첫글자를 대문자로 [예시 : Attack() 함수] 
	// snake 표기법 : 모든 글자를 대문자로 단어 사이사이는 언더바 [예시 : MAX_SIZE]

#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 대문자와 소문자를 구별하여 사용할 수 있습니다.

	//ex)  int score = 100;
	//ex)  int SCORE = 50;

	//2. 변수의 이름으로 예약어를 사용할 수 없습니다.

	// ex) int int 10; =X

	//3. 변수의 이름에 공백이 포함될 수 없습니다.
	//ex) int x value = 30;

	//4. 변수의 이름으로 특수 기호는 "_"와 "$"만 사용할 수 있습니다.

	// ex) int x_value = 20;

	//5. 변수의 이름은 숫자로 시작할 수 없습니다.
	//  ex) int 5day = 5;
	//  ex) int minute1 = 30;







#pragma endregion

#pragma region 상수 
	// 프로그램이 실행 중에 더 이상 값이 변경되지 않는 고정된 메모리

	//

	// const float pi = 3.141592f;

	//pi= 심볼릭 상수 3.141592f = 리터럴 상수

	//pi= 6.235f
		// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴 상수라고 하며,
		// 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.


#pragma endregion

#pragma region 산술 연산자

	//  1. 변수 = 변수 + 리터럴 상수
	//  2. 변수 = 리터럴 상수 - 심볼릭 상수
	//  3. 변수 = 변수 * 심볼릭 상수
	//  4. 변수 = 변수 / 리터럴 상수
	//  5. 변수 = 리터럴 상수 % 리터럴 상수

	//int a = 1000;
	//int b = 20;
	//int c = 1;
	//
	//const int x = 10; //=심볼릭 상수


	// 200=리터럴 상수

	//int A1 = a + 200;
	//int A2 = 200 - x;
	//int A3 = b * x;
	//int A4 = a / 200;
	//int A5 = 200 % 200;


	//printf("A1 변수의 값 : %d\n", A1);
	//printf("A2 변수의 값 : %d\n", A2);
	//printf("A3 변수의 값 : %d\n", A3);
	//printf("A4 변수의 값 : %d\n", A4);
	//printf("A5 변수의 값 : %d\n", A5);

#pragma endregion



#pragma region 디버깅

	//SOLID원칙 
	//디버깅

#pragma endregion



#pragma region 공부 하면서 넣기

	//velog 또는 gitHub에 기록하며 하기
	//알고리즘
	//포트폴리오 (unity) (자신있는걸로)
	// 팀 프로젝트
	// 포톤 네트워크
	//부산인디게임 커넥트 출품해보기
	//민들래-인디게임 팀 빌딩(여럿이서 만들어보고자 할때)



#pragma endregion

#pragma region 컴파일러
	//컴파일러는 소스 코드를 기계어로 번역하는 프로그램입니다.
	//컴파일러는 소스 코드를 읽고, 문법을 검사하고, 최적화된 기계어 코드로 변환합니다.
	//컴파일러는 C, C++, Java 등 다양한 프로그래밍 언어에 대해 사용됩니다.
	//컴파일러는 소스 코드를 실행 가능한 프로그램으로 변환하는 데 사용됩니다.
#pragma region 컴파일
//	//컴파일은 소스 코드를 기계어로 번역하는 과정입니다.
	//컴파일러는 소스 코드를 읽고, 문법을 검사하고, 최적화된 기계어 코드로 변환합니다.
	//컴파일러는 C, C++, Java 등 다양한 프로그래밍 언어에 대해 사용됩니다.
	//컴파일러는 소스 코드를 실행 가능한 프로그램으로 변환하는 데 사용됩니다.
#pragma endregion

#pragma endregion


}