#include <stdio.h>
#include <math.h>

int main()

{
	long double v, t, a;
	printf("Enter speed:\n");
	scanf_s("%LF", &v);
	printf("Enter time:\n");
	scanf_s("%LF", &t);
	printf("Enter acceleration:\n");
	scanf_s("%LF", &a);
	printf("Distance S=%LF", ((v*t)+(a*powl(t, 2.0))/2.0));

	scanf_s("%LF", &a);
	return 0;
}