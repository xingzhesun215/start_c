#include <stdio.h>

/**
 输出九九乘法口诀表
 */
int main1() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d * %d = %d\t\t", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
