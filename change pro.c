#include <stdio.h>
int main()
{
	int price=0, payment=0;
	printf("please enter the price of the item:");
	scanf_s("%d", &price);

	printf("please enter the payment amount:");
	scanf_s("%d", &payment);

	int change = payment - price;

	if (change < 0) {
		printf("sorry,you don't have enough money to afford this item.\n");

	}
	else {
		printf("your change is %d\n", change);
	}
	return 0;
}