#include <stdio.h>

/**
使用指针访问数组元素
*/
int main1() {

    int a1[3] = {4, 5, 6};

    printf("------常规显示----------\n");
    for (int i = 0; i < 3; ++i) {

        printf("%d\t", a1[i]);
    }
    printf("\n-------指针显示---------\n");

    for (int i = 0; i < 3; ++i) {
        printf("%d\t", *(a1 + i));
    }
}







