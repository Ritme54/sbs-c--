#include <stdio.h>
#include <math.h>

struct Card//struct 구조체 이름
{
	char grade; //1byte +3byte(패딩) = 4byte
	int health; //4byte 
	double attack; //8byte
	
	//구조체의 크기는 구조체를 구성하는 멤버 중에서
	// 가장 큰 자료형의 배수가 되도록 설정합니다.
};

struct where
{
	double x;
	double y;
};

struct Node
{
	int data; //노드에 저장할 데이터
	struct Node* next; //다음 노드를 가리키는 포인터
	//자기 참조 구조체
	};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	//하나의 객체를 생성하는것

	//구조체를 선언하기 전에 구조체는 메모리 공간이 생성 되지 않으므로,
	//구조체 내부에 있는 데이터를 초기화 할 수 없습니다.
	//구조체를 선언한 후에는 구조체 내부에 있는 데이터를 초기화 할 수 있습니다.
	//구조체 설계는 메인함수 외부에 만든다.
	//구조체를 선언하는 방법
	//struct Card card1; //Card 구조체 타입의 변수 card1을 선언합니다.
	//구조체를 선언한 후에는 구조체 내부에 있는 데이터를 초기화 할 수 있습니다.
	//card1.grade = 'A'; //card1의 grade 멤버를 'A'로 초기화합니다.
	//card1.health = 100; //card1의 health 멤버를 100으로 초기화합니다.
	//card1.attack = 50.5; //card1의 attack 멤버를 50.5로 초기화합니다.
	//printf("카드 정보:\n");
	//printf("등급: %c\n", card1.grade); //card1의 grade 멤버를 출력합니다.
	//printf("체력: %d\n", card1.health); //card1의 health 멤버를 출력합니다.
	//printf("공격력: %.2f\n", card1.attack); //card1의 attack 멤버를 출력합니다.

	//struct Card card = {'A', 200, 12.5, 5 };
	//구조체 초기화 목록은 왼쪽에서부터 순서대로 값을 정의해야 합니다.

	//printf("등급 : %c\n", card.grade);
	//printf("체력 : %d\n", card.health);
	//printf("공격력 : %.2f\n", card.attack);
	//printf("쉴드 : %.2f\n", card.shild);
	//
	//
	//{
	//	card. grade = 'A';
	//	card.health = 100;
	//	card.attack = 50.5;
	//	card.shild = 25.05;
	//};
	//	printf("카드 정보\n");
	//	printf("등급: %c\n", card.grade);
	//	printf("체력: %d\n", card.health);
	//	printf("공격력: %.2f\n", card.attack);
	//	printf("쉴드: %.2f\n", card.shild);
	//데이터 오프셋

#pragma endregion

#pragma region 바이트 패딩
	//맴버 변수를 메모리에서 CPU로 읽을 때 한번에 읽을 수 있도록
	//컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화 작업입니다.
	//구조체 크기의 경우 맴버 변수의 순서에 따라
	// 메모리 크기가 다르게 설정될 수 있으며,
	// 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성됩니다.

	//printf("Card 구조체의 크기 : %u\n", sizeof(struct Card));
	
	
#pragma endregion

#pragma region 두 점 사이의 거리

	//printf("sqrt(100.0): %1f\n", sqrt(100));
	// sqrt= 제곱근을 구하는 함수
	// pow= 거듭제곱을 구하는 함수
	// pow(2, 3) = 2^3 = 8
	//printf("pow(2,3): %1f\n", pow(2, 3));

	
	//struct where A = { 0,0 };
	//struct where B = { 5,3 };
	//
	//double x = B.x - A.x; //x좌표의 차이
	//double y = B.y - A.y; //y좌표의 차이
	//	
	////두 점 사이의 거리를 구하는 공식
	//
	//double lenght = sqrt(pow(x, 2) + pow(y, 2));
	//printf("두 점 사이의 거리: %.2f\n\n", lenght);
	//
	//if (lenght >= 3.0)
	//{
	//	printf("Can't Attack\n");
	//}
	
#pragma endregion

#pragma region 자기 참조 구조체
	//자기 자신과 같은 타입의 포인터를 멤버로 포함하고 있는 구조체
	

	struct Node node1 = { 10, NULL};
	struct Node node2 = { 20, NULL};
	struct Node node3 = { 30, NULL};

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	struct Node* currentNode;

	currentNode = &node1;
	while (currentNode != NULL) //현재 노드가 NULL이 아닐 때까지 반복
	{
		printf("노드 데이터: %d\n", currentNode->data); //현재 노드의 데이터를 출력
		currentNode = currentNode->next; //다음 노드로 이동
}



#pragma endregion

#pragma region typedef에 대하여
	//typedef는 C와 C++에서 이미 존재하는 데이터 타입에 새로운 이름을 부여하는 키워드입니다.
	//typedef를 사용하면 코드의 가독성을 높이고, 복잡한 데이터 타입을 간단하게 표현할 수 있습니다.
	typedef int Score;
	Score myScore = 100; // 이 코드에서 typedef int Score;는 int 타입에 Score라는 새로운 이름을 부여합니다.
	//여기서 Score는 int와 동일한 타입이 됩니다. 따라서 myScore는 int 타입의 변수로 선언된 것입니다.

	typedef struct {
		int x;
		int y;
	} Point;
	//이 식은 구조체에 Point라는 이름을 부여합니다. 이제 struct 키워드 없이 point를 사용할 수 있습니다.
#pragma endregion





}