#include <stdio.h>
int main()
{
	int price = 0;
	int amount = 100;

	printf("�������");
	scanf_s("%d", &price);

	printf("������Ʊ��:");
	scanf_s("%d", &amount);

	int change = amount - price;
	printf("���㣺%d\n", change);

	return 0;
}