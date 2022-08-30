#include <stdio.h>

/**
 判断数字为几位数
 */
int main1() {
    long number;
    printf("输入一个整数");
    scanf("%ld", &number);
    int result = 0;
    long temp = number;
    while (number != 0) {
        number /= 10;
        result++;
    }
    printf("%ld是%d位数", temp, result);
    return 0;
}
