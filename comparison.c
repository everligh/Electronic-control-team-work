#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("please enter two numbers:\n");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("%d is greater than %d\n", a, b);
	}
	else {
		printf("%d is greater than or equal to %d\n", b, a);
	}
	return 0;
}