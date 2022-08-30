#include <stdio.h>

/**
 斐波那契数列
 */
int main1() {
    printf("请输入一个整数\n");
    int n;
    scanf("%d", &n);

    printf("下面输出斐波那契数列");
    int t1 = 1, t2 = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == 1 || i == 2) {
            printf("%d ", t1);
        } else {
            printf("%d ", t1 + t2);
            int temp = t1;
            t1 = t2;
            t2 = temp + t2;
        }
    }
    return 0;
}
