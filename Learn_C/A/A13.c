#include <stdio.h>

/**
 * 判断奇数/偶数
 */
int main1() {
    int a;
    printf("输入一个数\n");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("a=%d,是偶数", a);
    } else {
        printf("a=%d,是奇数", a);

    }
    return 0;
}
