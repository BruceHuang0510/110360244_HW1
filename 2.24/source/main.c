#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	printf("請輸入一個數字\n");
	scanf_s("%d", &number);
	if (number % 2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
}