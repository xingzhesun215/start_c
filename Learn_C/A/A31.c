#include <stdio.h>

/**
判断素数
*/
int main1() {
    long m;
    printf("输入一个整数\n");
    scanf("%ld", &m);
    if (m == 2 || m == 3) {
        printf("%ld是素数", m);
        return 0;
    }
    for (int i = 2; i <= m / 2; ++i) {
        if (m % i == 0) {
            printf("%ld不是素数", m);
            return 0;
        }
    }
    printf("%ld是素数", m);
    return 0;
}
