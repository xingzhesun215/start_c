#include <stdio.h>

/**
计算自然数的和
 */
int main1() {
    int sum = 0, n;
    printf("输入一个正整数\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("1到%d的和为%d", n, sum);
    return 0;
}
