#include <stdio.h>

void main()
{
#pragma region 대입연산자

	//숙제 2025.05.22 (대입 연산자 사용하기)

	//대입 연산자 기호 : =
	//변수명 = 값; : 오른쪽 값을 왼쪽에 대입(할당)
	//변수명 = 변수; : 오른쪽 변수에 저장된 값을 왼쪽 변수에 대입(할당)
	//변수명 = 수식; : 오른쪽 수식의 연산값을 왼쪽 변수에 대입(할당)



#pragma endregion

#pragma region 대입 연산자 써보기

	int x, y, z;



	x = 30;
	y = x + 10;
	z = x + y;


	printf("x=%d,y=%d\n", x, y);
	printf("y=%d\n", y);
	printf("z=%d\n", z);

#pragma endregion


}