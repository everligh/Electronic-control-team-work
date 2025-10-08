#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);   //在输入中必须加入&符号

	double c = (a + b) / 2.0;   //在double和float中必须加入小数位，否则会被当作整数处理
	printf("%d和%d的平均值是%f\n", a, b, c);

	return 0;
}