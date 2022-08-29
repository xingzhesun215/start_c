#include <stdio.h>

/**
 * 两数相除，如果有余数，输出余数。
 */
int main1() {
    printf("输入被除数 除数(空格分割)\n");
    int a1, a2;
    scanf("%d %d", &a1, &a2);
    printf("商=%d\n", a1 / a2);
    printf("模=%d\n", a1 % a2);
    return 0;
}
