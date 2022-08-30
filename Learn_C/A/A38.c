#include <stdio.h>


/**
 * 二进制与十进制相互转换
 * 辗转相除法
 *
输入一个十进制数: 100
Step 1: 100/2, 余数 = 0, 商 = 50
Step 2: 50/2, 余数 = 0, 商 = 25
Step 3: 25/2, 余数 = 1, 商 = 12
Step 4: 12/2, 余数 = 0, 商 = 6
Step 5: 6/2, 余数 = 0, 商 = 3
Step 6: 3/2, 余数 = 1, 商 = 1
Step 7: 1/2, 余数 = 1, 商 = 0
十进制数 100 转换为二进制位 1100100
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
        long yushu = tmp % 2;
        long shan = tmp / 2;
        step++;
        printf("第%d步: %d/2,余数=%d,商=%d\n", step, tmp, yushu, shan);
        tmp = shan;
        bbbb = yushu * i + bbbb;
        i *= 10;

    }

    printf("%d 的二进制形式为%ld", m, bbbb);


    return 0;
}


