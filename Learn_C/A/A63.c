#include <stdio.h>

typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

/**
复数相加
*/
int main1() {
    complex n1, n2;

    printf("输入复数1:\n");
    printf("实部:");
    scanf("%f", &n1.real);

    printf("虚部:");
    scanf("%f", &n1.imag);

    printf("输入复数2:\n");
    printf("实部:");
    scanf("%f", &n2.real);

    printf("虚部:");
    scanf("%f", &n2.imag);

    struct complex n3 = add(n1, n2);
    printf("显示信息:");
    printf("实部:%f  虚部:%f", n3.real, n3.imag);

    return 0;
}

complex add(struct complex n1, struct complex n2) {
    struct complex result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return result;
}