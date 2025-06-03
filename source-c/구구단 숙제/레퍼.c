#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> //malloc, free 함수 사용을 위한 헤더 파일


//00000000
//
//void swap(int* x, int* y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//	void main()
//{
//	int x = 10;
//	int y = 20;
//
//	printf("x의 값 : %d\n", x);
//	printf("y의 값 : %d\n", y);
//
//swap(&x, &y);
//printf("x의 값 : %d\n", x);
//printf("y의 값 : %d\n", y);	
//
//
//
//}


//void Average(double count, ...)
//{
//
//	va_list point;// 변수명
//	va_start(point, count); //va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수
//								//va_start(포인터, count)
//	double sum = 0.0; //변수 초기화
//	for (int i = 0; i < count; i++) 
//	{
//		sum += va_arg(point, int);
//		//va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수
//		// va_arg(포인터, 특정한 자료형(int 또는 duble)
//	}
//	double average = sum / count;
//
//	printf("average : %f\n", average);
//
//		va_end(point);
//
//
//}


void main()
{
#pragma region 가변인수목록
	////가변 인수 목록은 고정된 매개 변수 외에 개수가 정해지지 않은 인수를 추가로 받을 수 있는 인수입니다.
	//stdarg.h 헤더 파일을 포함하여 가변 인수 목록을 사용할 수 있습니다.
	////void Average(int count, ...)
	//{100, 50, 30, 200, 150, 80, 90, 70, 60, 40, 20, 10};
	//va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수
	//va_list point; //변수
	//va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수
	//va_start(point, count);
	//double sum = 0.0; //변수 초기화
	//for (int i = 0; i < count; i++)
	//{
	//	sum += va_arg(point, int);
	//	//va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수
	//	// va_arg(포인터, 특정한 자료형(int 또는 duble)
	//}
	//double average = sum / count;
	//printf("average : %f\n", average);
	//va_end(point);

#pragma endregion
#pragma region 가변인수목록으로 평균구하기
		//가변 인수 목록을 사용하여 평균을 구하는 함수입니다.
	//int count = 12;
	//Average(count, 100, 50, 30, 200, 150, 80, 90, 70, 60, 40, 20, 10);

	

#pragma endregion

#pragma region 동적 할당
	//동적 할당은 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 작업입니다.
	//동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경시킬 수 있으며,
	//동적으로 메모리의 크기를 할당할 때 바이트 단위로 지정합니다.
	//동적 할당을 위해서는 stdlib.h 헤더 파일을 포함해야 합니다.
	//동적 할당을 위해 malloc 함수를 사용하며, 이 함수는 메모리의 크기를 바이트 단위로 지정합니다.
	//Heap 영역에 메모리를 할당하며, 사용이 끝난 후에는 반드시 free 함수를 사용하여 메모리를 해제해야 합니다.
	
	int* X = malloc(4); //4바이트 크기의 메모리를 동적으로 할당합니다.
	*X = 10; //할당된 메모리에 값을 저장합니다.
	printf("X가 가리키는 값 : %d\n", *X);
	free(X); //동적으로 할당된 메모리를 해제합니다.

	X = malloc(5 * 4); //3개의 int형 변수를 저장할 수 있는 메모리를 동적으로 할당합니다.=12바이트
	for (int i = 0; i < 5; i++)
	{
		X[i] = (i + 1) * 20;
		printf("X[%d]의 값 : %d\n", i, X[i]);

	}




#pragma endregion

	
}