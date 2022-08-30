#include <stdio.h>

/**
判断三个数中的最大数
 */
int main1() {

    double d1, d2, d3;
    printf("输入3个数(空格分割)\n");
    scanf("%lf %lf %lf", &d1, &d2, &d3);

    d1 = d1 > d2 ? d1 : d2;
    d1 = d1 > d3 ? d1 : d3;
    printf("最大的数为%lf", d1);


    return 0;
}
