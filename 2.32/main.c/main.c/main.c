#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float t, b;
	int k;
	printf("����(����):");
	scanf_s("%f", &t);
	printf("�魫(����):");
	scanf_s("%d", &k);
	b = k / (t * t);
	printf("�A��BMI�Ȭ�%f\n",b);
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