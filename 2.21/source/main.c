#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;
	//第一題
	for (i = 0; i < 9; i++)
	{
		printf("*");
	}

	for (j = 0; j < 7; j++)
	{
		printf("\n");
		printf("*");
		for (k = 0; k < 7; k++)
		{		
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		printf("*");
	}
	printf("\n\n");
	//第二題
	printf("   ***   ");
	printf("\n");
	printf(" *     *  ");
	
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		printf("*");
		for (k = 0; k < 7; k++)
		{
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	printf(" *     *  ");
	printf("\n");
	printf("   ***   ");
	printf("\n\n");
	//第三題
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("  *  \n");
	printf("\n");
	//第四題
	printf("     *      \n");
	printf("   *   *    \n");
	printf("  *     *   \n");
	printf(" *       *  \n");
	printf("*         * \n");
	printf(" *       *  \n");
	printf("  *     *   \n");
	printf("   *   *    \n");
	printf("     *      \n");

}







	