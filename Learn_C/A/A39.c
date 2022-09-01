#include <stdio.h>


/**
 * 八进制与十进制相互转换
 * 道理同辗转相除法
 *
 * 输入一个数 78
第1步: 78/8,余数=6,商=9
第2步: 9/8,余数=1,商=1
第3步: 1/8,余数=1,商=0
78 的八进制形式为116
 *
*/
int main1() {

    int m;
    printf("输入一个数\n");
    scanf("%d", &m);

    int tmp = m;
    int step = 0;
    long bbbb = 0;//以二进制的形式存放10进制的数据
    int i = 1;
    while (tmp != 0) {
        long yushu = tmp % 8;
        long shan = tmp / 8;
        step++;
        printf("第%d步: %d/8,余数=%d,商=%d\n", step, tmp, yushu, shan);
        tmp = shan;
        bbbb = yushu * i + bbbb;
        i *= 10;

    }

    printf("%d 的八进制形式为%ld", m, bbbb);


    return 0;
}


