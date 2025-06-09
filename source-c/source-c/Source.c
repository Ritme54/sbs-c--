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


<<<<<<< Updated upstream


=======
	//배열은 원하는 원소에 원하는 값을 저장할 수 있으며
    //배열의 크기는 컴파일이 되는 시점부터 고정돈 메모리 공간을 가지게 된다.
		int list[5] = { 1,2, 3, 4, 5 };

		int* Y = &list;

		printf("list[0]의 값 : %d\n", list[0]);
		
		printf("Y변수의 값 : %p\n", Y);
		
		list[4] = 50;
		printf("list[4]의 값 : %d\n", list[4]);

		printf("list의 값: %d\n", list);

		Y = Y + 1;
		
		printf("Y변수의 값 : %p\n", Y);
		printf("list[1]의 주소 값 :%p\n", &list[1]);
		
		//float room[] = { 8.5,10.5,12.5 };
		//
		//배열의 크기는 생략할 수 있으며,
		//초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정된다.
		//pointer+1 에서 +1은 사용하는 자료값 즉 int=4byte 
>>>>>>> Stashed changes

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

<<<<<<< Updated upstream
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
=======
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

	//printf("name배열의 값 : %s\n", name);
	//            (문자열)
	//name[0] = 'S';
	//name = "booms"


	//인덱스 값에서 문자를 바꿀때는 ''사용
	//printf("name배열의 값 : %s\n", name);

	
>>>>>>> Stashed changes

#pragma endregion

#pragma region 풀이
	//srand(time(NULL)); //난수 생성기 초기화
	//
	//int health = 5; // 플레이어의 체력
	//int coumputer = rand() % 50 + 1; // 컴퓨터가 선택한 숫자 (1~50)
	//int answer = scanf_s; // 플레이어가 입력한 값 감지
	//
	//while (health > 0) //플레이어의 채력이 있을때 
	//{
	//	View(health); // 플레이어의 체력 표시
	//
	//	printf("coumputer가 가지고 있는 값 : ");
	//	scanf_s("%d", &answer); // 플레이어가 입력한 값
	//	printf("\n");
	//
	//	if (answer > coumputer)
	//	{
	//		health--;
	//		printf("컴퓨터가 가지고 있는 값보다 큽니다.\n");
	//		//답이 컴퓨터가 가지고 있는 값보다 크면 플레이어의 체력 감소
	//	}
	//	else if (answer < coumputer)
	//	{
	//		health--;
	//		printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
	//		// 답이 컴퓨터가 가지고 있는 값보다 작으면 플레이어의 체력 감소
	//	}
	//	else
	//	{
	//		break; // 플레이어가 컴퓨터가 가지고 있는 값을 맞추면 반복문 종료
	//		//이 항목에서 초과의 경우와 미만의 경우를 모두 처리했으므로
	//		//else 문을 사용하여 플레이어가 컴퓨터가 가지고 있는 값을 맞춘 경우를 처리합니다.
	//	}
	//}
	//
	//if (health > 0) // 플레이어의 체력이 0보다 크면
	//{
	//	printf("V I C T O R Y\n");
	//}
	//else // 플레이어의 체력이 0 이하가 되면
	//{
	//	printf("D E F E A T\n");
	//}

#pragma region 열거형에 대하여
	//열거형은여러개의 정수 상수를 묶어서 하나의 이름으로 정의할 수 있는 자료형입니다.
	//열거형을 사용하면 코드의 가독성을 높이고, 상수 값을 관리하기 쉽게 만들어줍니다.
	//enum 키워드를	사용하여 열거형을 정의할 수 있으며 별도의 값을 지정하지 않으면
	// 첫 번째 값은 0부터 시작하고, 이후 값은 이전 값에 1씩 더해진 값을 가집니다.
	//필요시 typedef를 사용하여 열거형을 정의할 수 있습니다.

	//typedef enum{rock, paper, scissors} HandType; //열거형 정의

	//열거형을 사용하는 이유
	// 1. 가독성 향상: 열거형을 사용하면 코드의 의미를 명확하게 표현할 수 있습니다.
	// 2. 상수 관리 용이: 열거형을 사용하면 관련된 상수들을 그룹화하여 관리할 수 있습니다.
	// 3. 코드 유지보수 용이: 열거형을 사용하면 상수 값을 변경할 때, 열거형 정의만 수정하면 되므로 코드 유지보수가 용이합니다.



typedef enum { warrior, mage, archer } CharacterType; // 캐릭터 타입 정의
	//typedef를 사용하여 열거형을 정의합니다. warrior, mage, archer는 각각 전사, 마법사, 궁수 캐릭터를 나타냅니다.
CharacterType Type; // 캐릭터 타입 변수 선언
//CharacterType은 열거형으로 정의된 캐릭터 타입을 나타내는 변수입니다.
 
printf("캐릭터를 선택하세요.\n");
scanf_s("%d", (int*)&Type); // 사용자로부터 캐릭터 타입 입력 받기


//사용자가 입력한 값을 Type 변수에 저장합니다. 입력 값은 0, 1, 2 중 하나입니다.

#pragma region 캐릭터 선택
	switch (Type) // 선택한 캐릭터에 따라 다른 메시지 출력
	{
	case warrior: // 전사 선택
		printf("전사를 선택하셨습니다.\n");
		break;
	case mage: // 마법사 선택
		printf("마법사를 선택하셨습니다.\n");
		break;
	case archer: // 궁수 선택
		printf("궁수를 선택하셨습니다.\n");
		break;
	default: // 잘못된 입력 처리
		printf("잘못된 입력입니다.\n");
		break;
	}



#pragma endregion

	
#pragma endregion	
	return 0;
}