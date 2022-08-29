#include <stdio.h>

/**
 * 输入两个浮点数，计算乘积。
 */
int main1() {
    double first, second;
    printf("输入2个浮点数(空格分割)\n");
    scanf("%lf %lf", &first, &second);
    double result = first * second;

    printf("%lf * %lf = %.2lf", first, second, result);//输出2位有效小数

    return 0;
}
