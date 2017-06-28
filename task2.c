#include <stdio.h>
#include <math.h>


int main()

{
	long double L;
	printf("Enter the length of the circle:\n");
	scanf_s("%LF", &L);
	printf("S=%LF", 3.14*powl(L/6.28, 2));

	scanf_s("%LF", &L);
	return 0;
}