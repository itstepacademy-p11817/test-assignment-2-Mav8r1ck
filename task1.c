#include <stdio.h>

int main()

{
	long R1, R2, R3;
	printf("Enter resistane 1:\n");
	scanf_s("%li", &R1);
	printf("Enter resistane 2:\n");
	scanf_s("%li", &R2);
	printf("Enter resistane 3:\n");
	scanf_s("%li", &R3);
	printf("%li", (1/R1+1/R2+1/R3));

	scanf_s("%li", &R1);
	return 0;
}