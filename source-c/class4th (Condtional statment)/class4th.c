#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	//� ������ �־��� �� �ش� ���ǿ� ���� ������ �����ϵ��� �����ϴ� ��ɹ�

#pragma region ���� ������
	//�� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ��

	//> : ������ ���� �� ũ�ٸ�
	//< : �������� ���� �� ũ�ٸ�
	//>= : ������ ���� ũ�ų� ���ٸ�
	// <= : �������� ���� ũ�ų� ���ٸ�
	// == : ���� ���� ���ٸ�
	// != :	���� ���� �ٸ��ٸ�
#pragma endregion

#pragma region if��
		//� Ư���� ������ ���Ͽ� ������ �´´ٸ� ����Ǵ� ���ǹ�

		//if���� ������ 1�϶� ����Ǹ� 0�϶� ������� �ʴ´�.

		//int attack = 40;
		//
		//
		//if (attack>30)
		//{
		//	printf("\n");
		//}
#pragma endregion

#pragma region else if��
	//if������ �������� ������ ���������� �˻��ϰ� ������ ����ϴ� ���ǹ�
	//else if���� ��� ���� ���� ����� �� ������ if�� ���� ������ �ϳ��� �˻��ϴٰ� ���� ���� ������ �´� �б�� ���ϴ�.

	//int �� = 25;
	//int ��ø = 30;
	//
	//
	//
	//if (�� >= 30)
	//{ 
	//	printf("���");
	//}
	//else if (��ø>=30)
	//{
	//	printf("���");
	//}
	//
	//int second = 3600;
	//
	//if (second == 60)
	//{
	//	printf("1minute");
	//}

	//else if (second == 3600);
	//{
	//	printf("1hour");
	//}

#pragma endregion

#pragma region else��
	//if���� ������ ���� ���ǹ����� ��� ������ ���� ���� �� ����Ǵ� ���ǹ�

	//if���� ����ǤӤ� ��� ���ǹ��� ������ ���� �� ���� ���� ���ǹ��� ����˴ϴ�.

		//int number = 0;
	//
	//if (number > 0)
	//{
	//	printf("Posivite number");
	//}
	//else if (number < 0)
	//{
	//	printf("Negateive number");
	//}
	//else
	//{
	//	printf("Interger");
	//}

#pragma endregion


#pragma region �� ������
	//�� �� �̻��� ������ �����ϰų� �ϳ��� ������ ������Ű�� ������


#pragma region AND������
	//�ΰ��� ������ �´ٸ� ����Ǵ� ������

	//int strength = 20;
	//int intelligence = 30;
	//
	//if (strength >= 10 && intelligence >= 20)
	//{
	//	printf("success");
	//}
#pragma endregion

#pragma region OR������
	//�� ���� ������ �ϳ��� �´ٸ� ����Ǵ� �������Դϴ�.
//���ǹ��� �� ǥ������ ���ϴ� ���� ����� �̹� Ȯ�����ٸ� �� ������ �򰡸� �����մϴ�.


//int gold = 13;
//int silver = 300;
//
//if (gold >= 20 || silver >= 200)
//{
//	printf("buy");
//}


#pragma endregion


#pragma region NOT ������
//�ϳ��� ������ ���� ��Ű�� �������̴�.

//int power = 0;

	//if (!power)
	{	//
		//printf("power on");
	}	//
		//else
		//{
		//	printf("power off");
		//}


#pragma endregion

#pragma region ��и�
// �� 2��и�(-, +)  �� 1��и�(+,+)
// �� 3��и�(-, -)  �� 4��и�(+,-)
//����(0, 0) 5,0(x����)  0,5(y����)

//int x = 0;
//int y = 0;
//
//if (x > 0 && y > 0)
//{
//	printf("�� 1��и�");
//}
//else if (x < 0 && y > 0)
//{
//	printf("�� 2��и�");
//}
//else if (x > 0 && y < 0)
//{
//	printf("�� 4��и�");
//}
//else if (x<0 && y<0)
//{
//	printf("�� 3��и�");
//}
//else if (x == 0 && y!= 0)
//{
//	printf("y����");
//}
//else if (x != 0 && y == 0)
//{
//	printf("x����");
//}
//else
//{
//	printf("����");
//}
#pragma endregion

#pragma region switch��
//� ����� ���� �� ������� ����Ǵ� ��ɹ�

//switch������ ���ǽ����� �Ǽ��� ������ �Ǽ��� ����� ������ �� ����.

//int select = 5;
//switch (select)
//{
//case 0: printf("idle\n\n");
//	break;
//case 1: printf("attack\n\n");
//	break;
//case 2: printf("die\n\n");
//	break;
//default:printf("Exception\n");
//	break;
//}
//break�� Ż��(�ߴ�)�� ����
#pragma endregion


#pragma endregion 

#pragma region continue��
	//�ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���
	//
//	for (int x = 0; x < 10; x++)
//	{
//		if (x%3==0)
//		{
//			continue;
//		}
//		printf("x�� ��%d\n", x);
//	}
#pragma endregion


#pragma endregion



	
#pragma endregion

#pragma region ���� ������, ���� ���� ������ �Ẹ��
// ���� ���� �����ڶ� ��������ڿ� ���� �����ڸ� �ϳ��� ��Ÿ���� ��ȣ
	// a += b : a = a + b
	// ���α׷����� �ڵ��� �����ϰ� ǥ���Ͽ� �������� ���̰��� �� �� ���
	// ���� ���� ������ ��ȣ : +=, -=, *=, /=, %=

	//int x, y;
	//x = 20;
	//y = x;
	//
	//printf("x�� �� : %d\n", x); //x�� �� 20
	//printf("x = y�� �� : %d\n", x = y); //y�� x�� �� 20�� ���Թ���
	//printf("x+=y�� �� : %d\n", x += y); //x�� x + y�� �� 20 + 20�� ���Թ���
	//printf("x-=y�� �� : %d\n", x -= y); //x�� x - y�� �� 40 - 20�� ���Թ���
	//printf("x*=y�� �� : %d\n", x *= y); //x�� x * y�� �� 20 * 20�� ���Թ���
	//printf("x/=y�� �� : %d\n", x /= y); //x�� x / y�� �� 400 / 20�� ���Թ���
	//printf("x%%=y�� �� : %d\n", x %= y); //x�� x % y�� �� 20 % 20�� ���Թ���	
	//

#pragma endregion

}