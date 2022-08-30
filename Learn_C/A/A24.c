#include <stdio.h>

/**
 求两数的最大公约数
 */
int main1() {
    printf("请输入2个整数\n");
    int n, m;
    scanf("%d %d", &m, &n);
    int result = 1;
    for (int i = 1; i <= m && i <= n; ++i) {
        if (m % i == 0 && n % i == 0) {
            result = i;
        }
    }
    printf("%d 和 %d 的最大公约数为%d ", m, n, result);
    return 0;
}
