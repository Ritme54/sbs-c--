#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> //malloc, free �Լ� ����� ���� ��� ����


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
//	printf("x�� �� : %d\n", x);
//	printf("y�� �� : %d\n", y);
//
//swap(&x, &y);
//printf("x�� �� : %d\n", x);
//printf("y�� �� : %d\n", y);	
//
//
//
//}


//void Average(double count, ...)
//{
//
//	va_list point;// ������
//	va_start(point, count); //va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ�
//								//va_start(������, count)
//	double sum = 0.0; //���� �ʱ�ȭ
//	for (int i = 0; i < count; i++) 
//	{
//		sum += va_arg(point, int);
//		//va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ�
//		// va_arg(������, Ư���� �ڷ���(int �Ǵ� duble)
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
#pragma region �����μ����
	////���� �μ� ����� ������ �Ű� ���� �ܿ� ������ �������� ���� �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.
	//stdarg.h ��� ������ �����Ͽ� ���� �μ� ����� ����� �� �ֽ��ϴ�.
	////void Average(int count, ...)
	//{100, 50, 30, 200, 150, 80, 90, 70, 60, 40, 20, 10};
	//va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������ ����
	//va_list point; //����
	//va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ�
	//va_start(point, count);
	//double sum = 0.0; //���� �ʱ�ȭ
	//for (int i = 0; i < count; i++)
	//{
	//	sum += va_arg(point, int);
	//	//va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ�
	//	// va_arg(������, Ư���� �ڷ���(int �Ǵ� duble)
	//}
	//double average = sum / count;
	//printf("average : %f\n", average);
	//va_end(point);

#pragma endregion
#pragma region �����μ�������� ��ձ��ϱ�
		//���� �μ� ����� ����Ͽ� ����� ���ϴ� �Լ��Դϴ�.
	//int count = 12;
	//Average(count, 100, 50, 30, 200, 150, 80, 90, 70, 60, 40, 20, 10);

	

#pragma endregion

#pragma region ���� �Ҵ�
	//���� �Ҵ��� ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.
	//���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	//�������� �޸��� ũ�⸦ �Ҵ��� �� ����Ʈ ������ �����մϴ�.
	//���� �Ҵ��� ���ؼ��� stdlib.h ��� ������ �����ؾ� �մϴ�.
	//���� �Ҵ��� ���� malloc �Լ��� ����ϸ�, �� �Լ��� �޸��� ũ�⸦ ����Ʈ ������ �����մϴ�.
	//Heap ������ �޸𸮸� �Ҵ��ϸ�, ����� ���� �Ŀ��� �ݵ�� free �Լ��� ����Ͽ� �޸𸮸� �����ؾ� �մϴ�.
	
	int* X = malloc(4); //4����Ʈ ũ���� �޸𸮸� �������� �Ҵ��մϴ�.
	*X = 10; //�Ҵ�� �޸𸮿� ���� �����մϴ�.
	printf("X�� ����Ű�� �� : %d\n", *X);
	free(X); //�������� �Ҵ�� �޸𸮸� �����մϴ�.

	X = malloc(5 * 4); //3���� int�� ������ ������ �� �ִ� �޸𸮸� �������� �Ҵ��մϴ�.=12����Ʈ
	for (int i = 0; i < 5; i++)
	{
		X[i] = (i + 1) * 20;
		printf("X[%d]�� �� : %d\n", i, X[i]);

	}




#pragma endregion

	
}