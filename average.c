#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);   //�������б������&����

	double c = (a + b) / 2.0;   //��double��float�б������С��λ������ᱻ������������
	printf("%d��%d��ƽ��ֵ��%f\n", a, b, c);

	return 0;
}