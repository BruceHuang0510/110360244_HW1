#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b;
	printf("�п�J��ӼƦr\n");
	scanf_s("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("Y");
	}
	else
	{
		printf("N");
	}
}