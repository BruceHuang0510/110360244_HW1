#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c, d, e,f;
	printf("�C�Ѧ�p���{:");
	scanf_s("%d", &a);
	printf("�C�[�ڨT�o��p���{��:");
	scanf_s("%d", &b);
	printf("�C�Ѫ��L���O:");
	scanf_s("%d", &c);
	printf("�C�[�ڨT�o������:");
	scanf_s("%d", &d);
	printf("�C�Ѫ������O:");
	scanf_s("%d", &e);
	f = (a / b * d) + c + e;
	printf("�C�Ѷ}���W�Z����O:%d", f);

}