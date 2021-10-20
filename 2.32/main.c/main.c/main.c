#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float t, b;
	int k;
	printf("身高(公尺):");
	scanf_s("%f", &t);
	printf("體重(公斤):");
	scanf_s("%d", &k);
	b = k / (t * t);
	printf("你的BMI值為%f\n",b);
	if (b < 18.5)
	{
		printf("Underweight");
	}
	else if (18.5 <= b < 24.9)
	{
		printf("Normal");
	}
	else if (25 <= b < 29.9)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obese");
	}
}