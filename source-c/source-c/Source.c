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


<<<<<<< Updated upstream


=======
	//�迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������
    //�迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �ȴ�.
		int list[5] = { 1,2, 3, 4, 5 };

		int* Y = &list;

		printf("list[0]�� �� : %d\n", list[0]);
		
		printf("Y������ �� : %p\n", Y);
		
		list[4] = 50;
		printf("list[4]�� �� : %d\n", list[4]);

		printf("list�� ��: %d\n", list);

		Y = Y + 1;
		
		printf("Y������ �� : %p\n", Y);
		printf("list[1]�� �ּ� �� :%p\n", &list[1]);
		
		//float room[] = { 8.5,10.5,12.5 };
		//
		//�迭�� ũ��� ������ �� ������,
		//�ʱ�ȭ ��Ͽ��� ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����ȴ�.
		//pointer+1 ���� +1�� ����ϴ� �ڷᰪ �� int=4byte 
>>>>>>> Stashed changes

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

<<<<<<< Updated upstream
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
=======
		//���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
		//���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������ ���ڿ��� ���� ������ �� ����.

//		const char* word = "Game";

	//word = "League of Leg\0end";
		//		6	1 2 1 3 1 3 1

		//printf("word�� ���ڿ� : %s\n", word);
	
		//���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�,
		//�������� ���ڿ��� ���� �˷��ִ� ������ �ʴ� ����� null(\0)�� �����Ѵ�.
		//Read Only data segment (�б� ���� �޸� ����)
		// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ�� ���ڱ��� �����Ѵ�.
		//��������
		//00FA5D0

	//char name[] = "James";

	//printf("name�迭�� �� : %s\n", name);
	//            (���ڿ�)
	//name[0] = 'S';
	//name = "booms"


	//�ε��� ������ ���ڸ� �ٲܶ��� ''���
	//printf("name�迭�� �� : %s\n", name);

	
>>>>>>> Stashed changes

#pragma endregion

#pragma region Ǯ��
	//srand(time(NULL)); //���� ������ �ʱ�ȭ
	//
	//int health = 5; // �÷��̾��� ü��
	//int coumputer = rand() % 50 + 1; // ��ǻ�Ͱ� ������ ���� (1~50)
	//int answer = scanf_s; // �÷��̾ �Է��� �� ����
	//
	//while (health > 0) //�÷��̾��� ä���� ������ 
	//{
	//	View(health); // �÷��̾��� ü�� ǥ��
	//
	//	printf("coumputer�� ������ �ִ� �� : ");
	//	scanf_s("%d", &answer); // �÷��̾ �Է��� ��
	//	printf("\n");
	//
	//	if (answer > coumputer)
	//	{
	//		health--;
	//		printf("��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
	//		//���� ��ǻ�Ͱ� ������ �ִ� ������ ũ�� �÷��̾��� ü�� ����
	//	}
	//	else if (answer < coumputer)
	//	{
	//		health--;
	//		printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
	//		// ���� ��ǻ�Ͱ� ������ �ִ� ������ ������ �÷��̾��� ü�� ����
	//	}
	//	else
	//	{
	//		break; // �÷��̾ ��ǻ�Ͱ� ������ �ִ� ���� ���߸� �ݺ��� ����
	//		//�� �׸񿡼� �ʰ��� ���� �̸��� ��츦 ��� ó�������Ƿ�
	//		//else ���� ����Ͽ� �÷��̾ ��ǻ�Ͱ� ������ �ִ� ���� ���� ��츦 ó���մϴ�.
	//	}
	//}
	//
	//if (health > 0) // �÷��̾��� ü���� 0���� ũ��
	//{
	//	printf("V I C T O R Y\n");
	//}
	//else // �÷��̾��� ü���� 0 ���ϰ� �Ǹ�
	//{
	//	printf("D E F E A T\n");
	//}

#pragma region �������� ���Ͽ�
	//���������������� ���� ����� ��� �ϳ��� �̸����� ������ �� �ִ� �ڷ����Դϴ�.
	//�������� ����ϸ� �ڵ��� �������� ���̰�, ��� ���� �����ϱ� ���� ������ݴϴ�.
	//enum Ű���带	����Ͽ� �������� ������ �� ������ ������ ���� �������� ������
	// ù ��° ���� 0���� �����ϰ�, ���� ���� ���� ���� 1�� ������ ���� �����ϴ�.
	//�ʿ�� typedef�� ����Ͽ� �������� ������ �� �ֽ��ϴ�.

	//typedef enum{rock, paper, scissors} HandType; //������ ����

	//�������� ����ϴ� ����
	// 1. ������ ���: �������� ����ϸ� �ڵ��� �ǹ̸� ��Ȯ�ϰ� ǥ���� �� �ֽ��ϴ�.
	// 2. ��� ���� ����: �������� ����ϸ� ���õ� ������� �׷�ȭ�Ͽ� ������ �� �ֽ��ϴ�.
	// 3. �ڵ� �������� ����: �������� ����ϸ� ��� ���� ������ ��, ������ ���Ǹ� �����ϸ� �ǹǷ� �ڵ� ���������� �����մϴ�.



typedef enum { warrior, mage, archer } CharacterType; // ĳ���� Ÿ�� ����
	//typedef�� ����Ͽ� �������� �����մϴ�. warrior, mage, archer�� ���� ����, ������, �ü� ĳ���͸� ��Ÿ���ϴ�.
CharacterType Type; // ĳ���� Ÿ�� ���� ����
//CharacterType�� ���������� ���ǵ� ĳ���� Ÿ���� ��Ÿ���� �����Դϴ�.
 
printf("ĳ���͸� �����ϼ���.\n");
scanf_s("%d", (int*)&Type); // ����ڷκ��� ĳ���� Ÿ�� �Է� �ޱ�


//����ڰ� �Է��� ���� Type ������ �����մϴ�. �Է� ���� 0, 1, 2 �� �ϳ��Դϴ�.

#pragma region ĳ���� ����
	switch (Type) // ������ ĳ���Ϳ� ���� �ٸ� �޽��� ���
	{
	case warrior: // ���� ����
		printf("���縦 �����ϼ̽��ϴ�.\n");
		break;
	case mage: // ������ ����
		printf("�����縦 �����ϼ̽��ϴ�.\n");
		break;
	case archer: // �ü� ����
		printf("�ü��� �����ϼ̽��ϴ�.\n");
		break;
	default: // �߸��� �Է� ó��
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}



#pragma endregion

	
#pragma endregion	
	return 0;
}