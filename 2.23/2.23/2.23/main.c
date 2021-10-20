#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, k, score[3], max, min, num;
	printf("input three numbers:");
	scanf_s("%d %d %d", &score[0], &score[1], &score[2]);
	for (n = 0; n <= 1; n++) 
	{
		for (k = n + 1; k <= 2; k++)
		{
			if (score[n] < score[k])
			{
				num = score[n];
				score[n] = score[k];
				score[k] = num;
			}
		}
	}
	max = score[0];
	min = score[2];
	printf("最大值:%d 最小值:%d", max, min);
	return 0;
}