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
		array[i] = array[randomIndex];		//���� ���ؼ� �ӽ� ������ �����ϱ�
		array[randomIndex] = temp;			//
	}

}

void View(int count) // �÷��̾��� ü���� ǥ���ϴ� �Լ�
{
	printf("health : "); // �÷��̾��� ü�� ǥ��
	for (int i = 0; i < count; i++) // �÷��̾��� ü�¸�ŭ �� ǥ��
	{
		printf("��"); // �÷��̾��� ü������ ǥ���� ���� �Է�
	}
	printf("\n\n"); // �÷��̾��� ü�� ǥ�� �� �ٹٲ�

	}





int main()
{
#pragma region �ǻ� ����
	// rand() : 0~32767 ������ ���� ���� ��ȯ�ϴ� �Լ�.
	//
	//time(NULL) : 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ��������� �ʸ� ��ȯ�ϴ� �Լ�.
	//srand(seed) : ���� �������� �õ带 �����ϴ� �Լ�
	//
	//srand((int)time(NULL));
	// int index = rand() % 50 + 1; //1~50 ������ ���� ����
	//
	//printf("random value : %d\n", index-1);
	//printf("random value : %d\n", index);
	//printf("random value : %d\n", index+1);

#pragma endregion

#pragma region ���� �Լ�
	//int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//
	//int size = sizeof(list) / sizeof(int);
	//
	//Shuffle(list, size); //���� �Լ� ȣ��
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

	//printf("���� �� : ");
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d ", list[i]);
	//}
	//printf("\n");
	////���� �Լ� ȣ��
	//Shuffle(list, size);
	//printf("���� �� : ");
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d ", list[i]);
	//}
	//printf("\n");

#pragma endregion

#pragma region Ǯ��
	srand(time(NULL)); //���� ������ �ʱ�ȭ

	int health = 5; // �÷��̾��� ü��
	int coumputer = rand() % 50 + 1; // ��ǻ�Ͱ� ������ ���� (1~50)
	int answer = scanf_s; // �÷��̾ �Է��� �� ����

	while (health > 0) //�÷��̾��� ä���� ������ 
	{
		View(health); // �÷��̾��� ü�� ǥ��

		printf("coumputer�� ������ �ִ� �� : ");
		scanf_s("%d", &answer); // �÷��̾ �Է��� ��
		printf("\n");

		if (answer > coumputer)
		{
			health--;
			printf("��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
			//���� ��ǻ�Ͱ� ������ �ִ� ������ ũ�� �÷��̾��� ü�� ����
		}
		else if (answer < coumputer)
		{
			health--;
			printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
			// ���� ��ǻ�Ͱ� ������ �ִ� ������ ������ �÷��̾��� ü�� ����
		}
		else
		{
			break; // �÷��̾ ��ǻ�Ͱ� ������ �ִ� ���� ���߸� �ݺ��� ����
			//�� �׸񿡼� �ʰ��� ���� �̸��� ��츦 ��� ó�������Ƿ�
			//else ���� ����Ͽ� �÷��̾ ��ǻ�Ͱ� ������ �ִ� ���� ���� ��츦 ó���մϴ�.
		}
	}

	if (health > 0) // �÷��̾��� ü���� 0���� ũ��
	{
		printf("V I C T O R Y\n");
	}
	else // �÷��̾��� ü���� 0 ���ϰ� �Ǹ�
	{
		printf("D E F E A T\n");
	}

#pragma region �������� �����ؼ� �����ڵ�� �̷� ����

#pragma endregion

	
#pragma endregion	
	return 0;
}