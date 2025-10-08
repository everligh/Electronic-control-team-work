#include <stdio.h>
int main() {
	int a = 0,b = 0,c = 0;
    int max = 0;
    printf("please enter three numbers:");
    scanf_s("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            max = a;
                printf("the max is %d", max);
        } 
        else {
            max = c;
            printf("the max is %d", max);
        }
    }
    else {
        if (b >= c) {
            max = b;
            printf("the max is %d", max);
        }
        else {
            max = c;
            printf("the max is %d", max);
        }
    }
    return 0;
}