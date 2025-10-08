#include <stdio.h>
int main() {
	int type = 0;
	printf("please enter a number:");
	scanf_s("%d", &type);

	switch (type) {
	case 1:
		printf("hello\n");
		break;
	case 2:
		printf("good morning\n");
		break;
	case 3:
		printf("good afternoon\n");
		break;
	case 4:
		printf("good night\n");
		break;
	default:
		printf("see you \n");
		break;
	}
	return 0;
}