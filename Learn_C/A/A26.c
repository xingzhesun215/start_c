#include <stdio.h>

/**
 阶乘
 */
int main1() {
    printf("请输入1个整数\n");
    int n;
    scanf("%d", &n);
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    printf("%d!=%ld", n, result);
    return 0;
}
