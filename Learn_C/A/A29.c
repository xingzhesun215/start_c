#include <stdio.h>
#include <math.h>

/**
  计算一个数的 n 次方
 */
int main1() {
    int m, n;
    printf("输入基数\n");
    scanf("%d", &m);
    printf("输入指数\n");
    scanf("%d", &n);
    printf("%d的%d次方=%lf", m, n, pow(m, n));
    return 0;
}
