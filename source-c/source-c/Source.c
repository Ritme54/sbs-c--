#include <stdio.h>
#include <stdarg.h>


void Stats(int health, const char* name)
{

	printf("health : %d\n", health);
	printf("name : %s\n", name);


}

void Swap(int *left, int *right)
{
	int temporary = *left;
	*left = *right;
	*right = temporary;


}


inline void collision()
{
	
	printf("You Die");

}

void Provide()
{
	printf("Provide\n");

}

void main() 
{


#pragma region �Լ�


	//�ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����.
	// 
	//�Լ��� ���α׷��� ���� ���϶� �Լ� ȣ�� ��ġ���� �ش� �Լ��� �̵��� ��,
	//�۾��� �����ϰ� �ٽ� ���� ��ġ�� ���ƿ��� ����
	// �Լ��� �۵��ϸ� �Լ��� ã�ư��� ������ �Ʒ��� �����Ѵ�.
	// 
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

	//int X = 10;
	//int Y = 20;
	//Swap(&X, &Y);
	//printf("X�� �� : %p\n", X);
	//printf("Y�� �� : %p\n", Y);
	

#pragma endregion



#pragma endregion


#pragma region ���۷���


#pragma endregion


#pragma region Call by Value���� (����)
	//Call by Refence (������ ���� �ذ�)
	//�ּҰ��� �����ؼ� �ذ��غ���


#pragma endregion


#pragma region ��� �Լ�
	//� �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.
		
	//Recursion(3);
	
	//return = �Լ��� ������.(����)
	
	//void Recursion(int count)
//{
//
//	if (count <=0)
//	{
//		return;
//	}
//
//	printf("Recursion\n");
//	Recursion(count - 1);
//}



#pragma endregion

#pragma region �ζ��� �Լ�
	//�Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ�

	//�̺�Ʈ ��� = on�̶� ��ġ�� ���� ���
	// �����ص�(ã�ƺ���)
	//in line

	
	//collision();



	//�ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ��� ��������
	//�ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �ȴ�.


#pragma endregion

#pragma region ���� �μ� ���
	//�����Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ���� �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.

	//stdarg.h
	//va_list �μ� ���
	//va_start ���� ������ �ּ� ����Ű��
	//->va_arg ���� ��ȯ�ϴ� �Լ�
	//va_end (���ص� ū ������ ���� �� ����) NULL�� �ʱ�ȭ�� �����ִ� ����
	
	//void average(int count, ...)
	// 
	//va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������ ����
	//va_list : ����
	//va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ�
	//va_start(������, count)
	// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ�
	// va_arg(������, Ư���� �ڷ���(int �Ǵ� duble)
	// va_end : ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�
	// va_end(������)	


#pragma endregion

#pragma region �Լ� ������
	//�Լ��� �ּ� ���� �����ϰ� ����ų �� �ִ� ������ �����Դϴ�.
	//�ڷ���(*���� �̸�)(�Ű�����, �Ű�����)
	//��� ȣ���ϴ� ���




//�����Ͱ� ���� �ּҸ� ����Ų��.

//void Provide()
//{
//	printf("Probide\n")
//
//}

//���� Ŀ�ø� ��Ű�� �ʰ� �̺�Ʈ ������ ���� ��� ȣ���ϰ� �Ѵ�.

void(*functionPointer)();

functionPointer = Provide;

functionPointer();

	
#pragma endregion




}


