#include <stdio.h>


//void Stats(int health, const char* name)
//{
//
//	printf("health : %d\n", health);
//	printf("name : %s\n", name);
//
//
//}

void Swap(int left, int right)
{
	int temporary = left;
	left = right;
	right = temporary;


}

void main() 
{


#pragma region �Լ�


	//�ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����.
	// 
	//�Լ��� ���α׷��� ���� ���϶� �Լ� ȣ�� ��ġ���� �ش� �Լ��� �̵��� ��,
	//�۾��� �����ϰ� �ٽ� ���� ��ġ�� ���ƿ��� ����
		//process();




#pragma region �Ű�����

//�Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� ����

//�Ű� ������ �Լ� ���ο����� ������ �̷������,
//���� ���� �Ű� ������ ������ �� �ֽ��ϴ�.

	//Stats(100, "slime");

	//Stats(200, "ime");

	//Stats(300, "lime");

#pragma endregion


#pragma region �μ�
	//�Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ��

	//�μ��� ��� ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.

	int X = 10;
	int Y = 20;
	
	int x = &X;
	int y = &Y;

	printf("%p\n", &X);
	
	printf("%p\n", &Y);
	printf("%d\n", Y);
	//�ӽú���
	//
	//  int Z = Y;
	 // Y = X;
	 // X = Z;
	//

	Swap(&x, &y);

	printf("x�� �� : %p\n", x);
	printf("y�� �� : %p\n", y);
	

#pragma endregion



#pragma endregion

#pragma region ���۷���


#pragma endregion


#pragma region Call by Value���� (����)
	//Call by Refence (������ ���� �ذ�)
	//�ּҰ��� �����ؼ� �ذ��غ���




#pragma endregion





}