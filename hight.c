#include <stdio.h>
int main()
{
	int feet = 0;
	double inch = 0;
	
	printf("please enter your height (inch):");
	scanf_s("%d", &feet);

	printf("please enter you height(foot) :");
	scanf_s("%lf", &inch);

	printf("your height is %f meters", (feet + inch / 12) * 0.3048);  //�ڸ�����������У�Ӧ��%f������%d

		return 0;

}