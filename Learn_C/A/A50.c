#include <stdio.h>

/**
 *2个矩阵相加
 *
*/
int main1() {

    int a1[2][3] = {{2, 3, 4},
                    {4, 5, 6}};

    int b1[2][3] = {{10, 11, 12},
                    {1,  2,  3}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", b1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            a1[i][j] = a1[i][j] + b1[i][j];
        }
    }
    printf("叠加后---------------------\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
}







