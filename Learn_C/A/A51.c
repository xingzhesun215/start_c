#include <stdio.h>

/**
 *矩阵转换
 * 输入矩阵:
2  3  4

5  6  4


转换后矩阵:
2  5

3  6

4  4
 *
*/
int main1() {

    int a1[2][3] = {{2, 3, 4},
                    {4, 5, 6}};


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", a1[j][i]);
        }
        printf("\n");
    }
}







