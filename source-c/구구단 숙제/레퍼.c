#include <stdio.h>




void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

	void main()
{
	int x = 10;
	int y = 20;

	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);

swap(&x, &y);
printf("x의 값 : %d\n", x);
printf("y의 값 : %d\n", y);	



}