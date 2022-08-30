#include <stdio.h>

/**
求一个整数的所有因数
*/
int main1() {

    long m;
    printf("输入一个整数\n");
    scanf("%ld", &m);
    for (int i = 1; i <= m; ++i) {
        if (m % i == 0) {
            printf("%d  ", i);
        }

    }

    return 0;
}

