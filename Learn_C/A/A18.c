#include <stdio.h>

/**
判断闰年
 能被4整除,但不能被100整除,但可以被400整除的是闰年
 */
int main1() {
    int year;
    printf("输入年份\n");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d是闰年", year);
            } else {
                printf("%d不是闰年", year);
            }
        } else {
            printf("%d是闰年", year);
        }
    } else {
        printf("%d不是闰年", year);
    }

    return 0;
}
