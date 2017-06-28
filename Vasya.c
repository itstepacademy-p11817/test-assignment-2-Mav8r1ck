#include <stdio.h>

int main()
{
	int i; //строки кода
	int b; //зарплата
	int c; //опоздания
	printf("Enter Desired income:\n");
	scanf_s("%d", &b);
	printf("Enter the number of lines of code:\n");
	scanf_s("%d", &i);
	printf("Enter the number of delays:\n");
	scanf_s("%d", &c);
	if (i == -1) //Введены значения зарплата и опоздания
	{
		int R = ((b + (c * 20)) * 100)/50;
		printf("The number of lines of code: %d\n",  R);

		scanf_s("%d", &c);
	}
	else if (c == -1) //Введены значения строки и зарплата
	{
		int R = (((i / 100) * 50) - b) / 20;
			if (R<0) //при отрицательном значении, Вася не доработал, нельзя опаздывать
			{
				printf("You must not to be late!!!"); //при отрицательном значении, Вася не доработал, нельзя опаздывать
			}
			else {
				printf("The number of delays: %d\n", R);
			}
			scanf_s("%d", &c);
	}
	else if (b == -1) //введены значения строки и опоздания
	{
		int R = ((i / 100) * 50) - c * 20; //при отрицательном значении, Васе надо работать больше и опоздывать меньше
			if (R < 0) {
				printf("You must pay the employer!");
		}
			else {
				printf("Income: %d\n", R);
			}
			scanf_s("%d", &c);
	}
	else {
		printf("Invalid values ​​entered!!!\n"); 
	}
	scanf_s("%d", &c);
	return 0;
}