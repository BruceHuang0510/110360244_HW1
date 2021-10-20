#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c, d, e,f;
	printf("每天行駛里程:");
	scanf_s("%d", &a);
	printf("每加侖汽油行駛里程數:");
	scanf_s("%d", &b);
	printf("每天的過路費:");
	scanf_s("%d", &c);
	printf("每加侖汽油的價格:");
	scanf_s("%d", &d);
	printf("每天的停車費:");
	scanf_s("%d", &e);
	f = (a / b * d) + c + e;
	printf("每天開車上班的花費:%d", f);

}