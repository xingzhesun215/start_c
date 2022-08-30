#include <stdio.h>

/**
 * 使用 sizeof 操作符计算int, float, double 和 char四种变量字节大小
 */
int main1() {
    int i = 2;
    float f = 3.14;
    double d = 6.1616161616;
    char c = 'a';
    long l = 23l;
    long long ll = 234234234;

    printf("sizeof(int)=%d\n", sizeof(i));
    printf("sizeof(float)=%d\n", sizeof(f));
    printf("sizeof(double)=%d\n", sizeof(d));
    printf("sizeof(char)=%d\n", sizeof(c));
    printf("sizeof(long)=%d\n", sizeof(l));
    printf("sizeof(longlonglong)=%d\n", sizeof(ll));

    //sizeof(int)=4
    //sizeof(float)=4
    //sizeof(double)=8
    //sizeof(char)=1
    //sizeof(long)=8
    //sizeof(longlonglong)=8
    return 0;
}
