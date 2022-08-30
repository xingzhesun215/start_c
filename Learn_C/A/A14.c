#include <stdio.h>

/**
 * 循环区间范围内的奇数/偶数
 */
int main1() {

    for (int i = 0; i < 20; ++i) {
        if (i % 2 == 0) {
            printf("%d是偶数\n", i);
        } else {
            printf("%d是奇数\n", i);
        }
    }


    return 0;
}
