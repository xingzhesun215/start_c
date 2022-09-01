#include <stdio.h>

/**
使用引用循环替换数值
*/
int main1() {

    int a = 10;
    int b = 11;
    int c = 12;

    printf("a=%d b=%d c=%d", a, b, c);

    int *ap = &a;
    int *bp = &b;
    int *cp = &c;


    int temp = *ap;
    *ap = *bp;
    *bp = *cp;
    *cp = temp;

    printf("\n替换后\na=%d b=%d c=%d", a, b, c);

}







