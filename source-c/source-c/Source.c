#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


void Shuffle(int array[], int size)  //size
{ 
	for (int i = 0; i < size; i++)
	{
		int randomIndex = rand() % size; //0~size-1 
		int temp = array[i];				//
		array[i] = array[randomIndex];		//셋을 합해서 임시 변수로 스왑하기
		array[randomIndex] = temp;			//
	}

}

void View(int count) // 플레이어의 체력을 표시하는 함수
{
	printf("health : "); // 플레이어의 체력 표시
	for (int i = 0; i < count; i++) // 플레이어의 체력만큼 ♥ 표시
	{
		printf("♥"); // 플레이어의 체력으로 표시할 문자 입력
	}
	printf("\n\n"); // 플레이어의 체력 표시 후 줄바꿈

	}





int main()
{
#pragma region 의사 난수
	// rand() : 0~32767 사이의 난수 값을 반환하는 함수.
	//
	//time(NULL) : 1970년 1월 1일 0시 0분 0초부터 현재까지의 초를 반환하는 함수.
	//srand(seed) : 난수 생성기의 시드를 설정하는 함수
	//
	//srand((int)time(NULL));
	// int index = rand() % 50 + 1; //1~50 사이의 난수 생성
	//
	//printf("random value : %d\n", index-1);
	//printf("random value : %d\n", index);
	//printf("random value : %d\n", index+1);

#pragma endregion

#pragma region 셔플 함수
	//int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//
	//int size = sizeof(list) / sizeof(int);
	//
	//Shuffle(list, size); //셔플 함수 호출
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("list[%d]=%d\n", i, list[i]);
	//	
	//}
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("list[%d] = ", i);
	//	printf("%d ", list[i]);
	//	printf("\n");
	//	//printf("list[%d] = %d\n", i, list[i]);
	//}

	//printf("셔플 전 : ");
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d ", list[i]);
	//}
	//printf("\n");
	////셔플 함수 호출
	//Shuffle(list, size);
	//printf("셔플 후 : ");
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d ", list[i]);
	//}
	//printf("\n");

#pragma endregion

#pragma region 풀이
	srand(time(NULL)); //난수 생성기 초기화

	int health = 5; // 플레이어의 체력
	int coumputer = rand() % 50 + 1; // 컴퓨터가 선택한 숫자 (1~50)
	int answer = scanf_s; // 플레이어가 입력한 값 감지

	while (health > 0) //플레이어의 채력이 있을때 
	{
		View(health); // 플레이어의 체력 표시

		printf("coumputer가 가지고 있는 값 : ");
		scanf_s("%d", &answer); // 플레이어가 입력한 값
		printf("\n");

		if (answer > coumputer)
		{
			health--;
			printf("컴퓨터가 가지고 있는 값보다 큽니다.\n");
			//답이 컴퓨터가 가지고 있는 값보다 크면 플레이어의 체력 감소
		}
		else if (answer < coumputer)
		{
			health--;
			printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
			// 답이 컴퓨터가 가지고 있는 값보다 작으면 플레이어의 체력 감소
		}
		else
		{
			break; // 플레이어가 컴퓨터가 가지고 있는 값을 맞추면 반복문 종료
			//이 항목에서 초과의 경우와 미만의 경우를 모두 처리했으므로
			//else 문을 사용하여 플레이어가 컴퓨터가 가지고 있는 값을 맞춘 경우를 처리합니다.
		}
	}

	if (health > 0) // 플레이어의 체력이 0보다 크면
	{
		printf("V I C T O R Y\n");
	}
	else // 플레이어의 체력이 0 이하가 되면
	{
		printf("D E F E A T\n");
	}

#pragma region 열거형을 조사해서 예시코드와 이론 정리

#pragma endregion

	
#pragma endregion	
	return 0;
}