#include <stdio.h>
int main() {
	int x = 0;
	int n = 0;
	printf("please enter a number:\n");
	scanf_s("%d", &x);

	while (x > 0) {
		x /= 10;
		n++;
	}
	printf("the number of digits is %d\n", n);
	
	return 0;
}