#include <stdio.h>
#include <math.h>

void alm(int);
/**
 判断Armstrong数(阿姆斯壮数)
 Armstrong 数，就是n位数的各位数的n次方之和等于该数，如：
*/
int main1() {


    long m;
    printf("输入一个整数\n");
    scanf("%ld", &m);
    int w = 0;
    int t1 = m;
    while (t1 != 0) {
        t1 /= 10;
        w++;
    }
    int result = 0;
    t1 = m;
    while (t1 != 0) {
        int n = t1 % 10;
        t1 /= 10;
        result += pow(n, w);
    }
    if (result == m) {
        printf("%ld是阿姆斯壮数\n", m);
    } else {
        printf("%ld不是阿姆斯壮数\n", m);
    }
    for (int i = 0; i < 1000000; ++i) {
        alm(i);
    }

    return 0;
}

void alm(int m) {
    int w = 0;
    int t1 = m;
    while (t1 != 0) {
        t1 /= 10;
        w++;
    }
    int result = 0;
    t1 = m;
    while (t1 != 0) {
        int n = t1 % 10;
        t1 /= 10;
        result += pow(n, w);
    }
    if (result == m) {
        printf("%ld是阿姆斯壮数\n", m);
    }
}
