#include <stdio.h>

/**
 * 创建三角形图案。
 *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
int main1() {

    int m;
    printf("输入一个整数\n");
    scanf("%d", &m);

    for (int i = 0; i < m; ++i) {

        for (int k = 1; k < m-i; ++k) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

