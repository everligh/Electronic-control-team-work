#include <stdio.h>
int main()
{
	int price = 0;
	int amount = 100;

	printf("«Î ‰»ÎΩ∂Ó£∫");
	scanf_s("%d", &price);

	printf("«Î ‰»Î∆±√Ê:");
	scanf_s("%d", &amount);

	int change = amount - price;
	printf("’“¡„£∫%d\n", change);

	return 0;
}