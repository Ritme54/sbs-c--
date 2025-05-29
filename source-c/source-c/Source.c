#include <stdio.h>

void main()
{

#pragma region 배열 (인덱스)
	//같은 자료형의 변수들로 이루어진 유한 집합입니다.

	//배열의 경우 첫번째 원소는 0부터 시작한다.

//	int A1[6]; //[][][[][] int = 4byte * n
//
//	int size = sizeof(A1) / sizeof(int);
//
//	for (int i = 0; i < size; i++)
//	{
//		A1[i] = (i + 1) * 10;
//		printf("A1[%d]=%d\n", i, A1[i]);
//		
//	}
//printf("A1배열의 크기 : %d\n", size);
	


	//배열은 원하는 원소에 원하는 값을 저장할 수 있으며
    //배열의 크기는 컴파일이 되는 시점부터 고정돈 메모리 공간을 가지게 된다.
	//int list[5] = { 1,2, 3, 4, 5 };

	//int* Y = &list;

		//printf("list[0]의 값 : %d\n", list[0]);
		//
		//printf("Y변수의 값 : %p\n", Y);
		//
		//Y = Y + 1;
		//
		//printf("Y변수의 값 : %p\n", Y);
		//printf("list[1]의 주소 값 :%p\n", &list[1]);
		//
		//float room[] = { 8.5,10.5,12.5 };
		//
		////배열의 크기는 생략할 수 있으며,
		////초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정된다.
			//pointer+1 에서 +1은 사용하는 자료값 즉 int=4byte 

	//배열명은 포인터 상수

	//배열명 = 시작주소값이며, 배열의 요소들은 주소들이 연속적으로 붙어있다.
	//이 때 연속적인 주소 정보를 변경시키면 안 되기 때문에, 주소를 바꾸지 못하게 주소가 상수값으로
	//고정되어 있다.
	//그러므로 배열명은 포인터 상수이며, 배열의 주소를 변경할 수 없다.

#pragma endregion

#pragma region 문자열
		//연속적인 메모리 공간에 저장된 문자 변수의 집합이다.

		//문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며,
		//문자열 상수는 데이터 영역에 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없다.

//		const char* word = "Game";

	//word = "League of Leg\0end";
		//		6	1 2 1 3 1 3 1

		//printf("word의 문자열 : %s\n", word);
	
		//문자열의 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
		//마지막에 문자열의 끝을 알려주는 보이지 않는 제어문자 null(\0)이 존재한다.
		//Read Only data segment (읽기 전용 메모리 공간)
		// 문자열을 저장하게 되면 맨 마지막에 무효의 문자까지 저장한다.
		//ㅁㅁㅁㅁ
		//00FA5D0

	//char name[] = "James";

	printf("name배열의 값 : %s\n", name);
	//            (문자열)
	//name[0] = 'S';
	//name = "booms"


	//인덱스 값에서 문자를 바꿀때는 ''사용
	//printf("name배열의 값 : %s\n", name);

	

#pragma endregion

#pragma region 아스키 코드 유니코드 내용 찾기와 실전형 만들어보기 (숙제)
#pragma endregion



}