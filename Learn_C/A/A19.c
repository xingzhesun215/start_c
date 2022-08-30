#include <stdio.h>

/**
判断正数/负数
 */
int main1() {
    double dd;
    printf("输入一个数\n");
    scanf("%lf",&dd);
    if(dd>0){
        printf("%lf是正数",dd);
    }else if(dd==0){
        printf("%lf是零",dd);
    }else{
        printf("%lf是负数",dd);
    }

    return 0;
}
