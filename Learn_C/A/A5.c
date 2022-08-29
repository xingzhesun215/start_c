#include <stdio.h>

/**
 * 使用 printf() 与 %e 输出双精度数。
 */
int main1() {
    float d;
    printf("当前浮点数=%f",d);
    d=3.1415926;
    printf("赋值后=%le",d);//3.141593e+00

    return 0;
}
