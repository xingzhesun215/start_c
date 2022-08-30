#include <stdio.h>

/**
 * 交换两个数的值
 */
int main1() {
    int a = 12;
    int b = 14;
    printf("当前a=%d,b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("交换后a=%d,b=%d\n", a, b);
    return 0;
}
