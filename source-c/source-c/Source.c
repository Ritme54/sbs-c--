#include <stdio.h>
#include <math.h>

struct Card//struct ����ü �̸�
{
	char grade; //1byte +3byte(�е�) = 4byte
	int health; //4byte 
	double attack; //8byte
	
	//����ü�� ũ��� ����ü�� �����ϴ� ��� �߿���
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
};

struct where
{
	double x;
	double y;
};

struct Node
{
	int data; //��忡 ������ ������
	struct Node* next; //���� ��带 ����Ű�� ������
	//�ڱ� ���� ����ü
	};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	//�ϳ��� ��ü�� �����ϴ°�

	//����ü�� �����ϱ� ���� ����ü�� �޸� ������ ���� ���� �����Ƿ�,
	//����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� �����ϴ�.
	//����ü�� ������ �Ŀ��� ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� �ֽ��ϴ�.
	//����ü ����� �����Լ� �ܺο� �����.
	//����ü�� �����ϴ� ���
	//struct Card card1; //Card ����ü Ÿ���� ���� card1�� �����մϴ�.
	//����ü�� ������ �Ŀ��� ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� �ֽ��ϴ�.
	//card1.grade = 'A'; //card1�� grade ����� 'A'�� �ʱ�ȭ�մϴ�.
	//card1.health = 100; //card1�� health ����� 100���� �ʱ�ȭ�մϴ�.
	//card1.attack = 50.5; //card1�� attack ����� 50.5�� �ʱ�ȭ�մϴ�.
	//printf("ī�� ����:\n");
	//printf("���: %c\n", card1.grade); //card1�� grade ����� ����մϴ�.
	//printf("ü��: %d\n", card1.health); //card1�� health ����� ����մϴ�.
	//printf("���ݷ�: %.2f\n", card1.attack); //card1�� attack ����� ����մϴ�.

	//struct Card card = {'A', 200, 12.5, 5 };
	//����ü �ʱ�ȭ ����� ���ʿ������� ������� ���� �����ؾ� �մϴ�.

	//printf("��� : %c\n", card.grade);
	//printf("ü�� : %d\n", card.health);
	//printf("���ݷ� : %.2f\n", card.attack);
	//printf("���� : %.2f\n", card.shild);
	//
	//
	//{
	//	card. grade = 'A';
	//	card.health = 100;
	//	card.attack = 50.5;
	//	card.shild = 25.05;
	//};
	//	printf("ī�� ����\n");
	//	printf("���: %c\n", card.grade);
	//	printf("ü��: %d\n", card.health);
	//	printf("���ݷ�: %.2f\n", card.attack);
	//	printf("����: %.2f\n", card.shild);
	//������ ������

#pragma endregion

#pragma region ����Ʈ �е�
	//�ɹ� ������ �޸𸮿��� CPU�� ���� �� �ѹ��� ���� �� �ֵ���
	//�����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.
	//����ü ũ���� ��� �ɹ� ������ ������ ����
	// �޸� ũ�Ⱑ �ٸ��� ������ �� ������,
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����˴ϴ�.

	//printf("Card ����ü�� ũ�� : %u\n", sizeof(struct Card));
	
	
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	//printf("sqrt(100.0): %1f\n", sqrt(100));
	// sqrt= �������� ���ϴ� �Լ�
	// pow= �ŵ������� ���ϴ� �Լ�
	// pow(2, 3) = 2^3 = 8
	//printf("pow(2,3): %1f\n", pow(2, 3));

	
	//struct where A = { 0,0 };
	//struct where B = { 5,3 };
	//
	//double x = B.x - A.x; //x��ǥ�� ����
	//double y = B.y - A.y; //y��ǥ�� ����
	//	
	////�� �� ������ �Ÿ��� ���ϴ� ����
	//
	//double lenght = sqrt(pow(x, 2) + pow(y, 2));
	//printf("�� �� ������ �Ÿ�: %.2f\n\n", lenght);
	//
	//if (lenght >= 3.0)
	//{
	//	printf("Can't Attack\n");
	//}
	
#pragma endregion

#pragma region �ڱ� ���� ����ü
	//�ڱ� �ڽŰ� ���� Ÿ���� �����͸� ����� �����ϰ� �ִ� ����ü
	

	struct Node node1 = { 10, NULL};
	struct Node node2 = { 20, NULL};
	struct Node node3 = { 30, NULL};

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	struct Node* currentNode;

	currentNode = &node1;
	while (currentNode != NULL) //���� ��尡 NULL�� �ƴ� ������ �ݺ�
	{
		printf("��� ������: %d\n", currentNode->data); //���� ����� �����͸� ���
		currentNode = currentNode->next; //���� ���� �̵�
}



#pragma endregion

#pragma region typedef�� ���Ͽ�
	//typedef�� C�� C++���� �̹� �����ϴ� ������ Ÿ�Կ� ���ο� �̸��� �ο��ϴ� Ű�����Դϴ�.
	//typedef�� ����ϸ� �ڵ��� �������� ���̰�, ������ ������ Ÿ���� �����ϰ� ǥ���� �� �ֽ��ϴ�.
	typedef int Score;
	Score myScore = 100; // �� �ڵ忡�� typedef int Score;�� int Ÿ�Կ� Score��� ���ο� �̸��� �ο��մϴ�.
	//���⼭ Score�� int�� ������ Ÿ���� �˴ϴ�. ���� myScore�� int Ÿ���� ������ ����� ���Դϴ�.

	typedef struct {
		int x;
		int y;
	} Point;
	//�� ���� ����ü�� Point��� �̸��� �ο��մϴ�. ���� struct Ű���� ���� point�� ����� �� �ֽ��ϴ�.
#pragma endregion





}