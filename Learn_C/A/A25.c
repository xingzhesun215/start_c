#include <stdio.h>

/**
 求两数最小公倍数
 */
int main1() {
    printf("请输入2个整数\n");
    int n, m;
    scanf("%d %d", &m, &n);
    int max = m > n ? m : n;
    int result = max;
    while (1) {
        if (result % m == 0 && result % n == 0) {
            printf("%d %d的最小公倍数=%d", m, n, result);
            break;
        }
        result += max;
    }
    return 0;
}
