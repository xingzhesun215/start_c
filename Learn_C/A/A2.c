#include <stdio.h>

/**
 * 使用 printf() 与 %d 格式化输出整数。
 */
int main1() {
    int number;
    printf("当前number=%d\n", number);
    printf("输入一个整数:\n");
    scanf("%d", &number);
    printf("格式化输出 number=%d", number);
    return 0;
}
