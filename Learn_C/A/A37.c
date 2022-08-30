#include <stdio.h>

int isSushu(int);

/**
 * 计算一个数是否可为两个素数之和
 *
*/
int main1() {

    long m;
    printf("输入一个数\n");
    scanf("%d", &m);
    for (int j = 1; j < m / 2 + 1; ++j) {
        if (isSushu(j) == 1 && isSushu(m - j) == 1) {
            printf("%d + %d = %d\n", j, m - j, m);
        }
    }
    return 0;
}

int isSushu(int num) {
    if (num == 1) {
        return 0;
    }
    if (num == 2 || num == 3) {
        return 1;
    }

    for (int i = 2; i < num / 2 + 1; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;

}

