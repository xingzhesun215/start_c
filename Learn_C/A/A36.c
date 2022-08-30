#include <stdio.h>

/**
 * 简易计算器。
 *
*/
int main1() {

    int m, n;
    char c;
    printf("输入一个计算公式(2 + 3样式)\n");
    scanf("%d %c %d", &m, &c, &n);

    switch (c) {
        case '+':
            printf("%d + %d = %d", m, n, m + n);
            break;
        case '-':
            printf("%d - %d = %d", m, n, m - n);
            break;
        case '*':
            printf("%d * %d = %d", m, n, m * n);
            break;
        case '/':
            printf("%d / %d = %d 余 %d", m, n, m / n, m % n);
            break;
    }


    return 0;
}

