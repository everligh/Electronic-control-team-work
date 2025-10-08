#include <stdio.h>
int main() {
	const int STANDARD = 60;
	int score=0;

	printf("please enter your score;");
	scanf_s("%d", &score);
	if (score >= STANDARD) {
		printf("Congratulations! You passed the exam.\n");
	}
	else {
		printf("Sorry,you did not pass the exam.\n");
	}
	return 0;
}