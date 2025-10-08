#include <stdio.h>
int main()
{
	int feet = 0;
	double inch = 0;
	
	printf("please enter your height (inch):");
	scanf_s("%d", &feet);

	printf("please enter you height(foot) :");
	scanf_s("%lf", &inch);

	printf("your height is %f meters", (feet + inch / 12) * 0.3048);  //在浮点数的输出中，应用%f而不是%d

		return 0;

}