#include <stdio.h>
#include <math.h>

/**
  判断一个数是否为回文数。

设n是一任意自然数。若将n的各位数字反向排列所得自然数n1与n相等，则称n为一回文数。例如，若n=1234321，则称n为一回文数；但若n=1234567，则n不是回文数
 */
int main() {
    long m;
    printf("输入一个整数\n");
    scanf("%ld", &m);
    int tmep, nw;
    tmep = m;
    nw = 0;
    while (tmep != 0) {
        nw = nw * 10 + (tmep % 10);
        tmep = tmep / 10;
    }
    if(nw==m){
        printf("%ld是回文",m);
    }else{
        printf("%ld不是回文",m);
    }
    return 0;
}
