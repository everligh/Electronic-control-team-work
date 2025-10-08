#include <stdio.h>
int main() {
	const int BASE = 1000;
	const double STANDARD = 40.0;
	int hours = 0;
	double rate = 0.0;
	double salary = 0.0;

	printf("pkease enter hours you worked:\n");
	scanf_s("%d", &hours);
	printf("please enter your hourly rate:\n");
	scanf_s("%lf", &rate);

	if (hours <= 40) {
		salary = hours * rate;
	}
	else {
		salary = 40 * rate + (hours - 40) * rate * 1.5;
	}
	printf("your salary is %f\n", salary);
	return 0;
}