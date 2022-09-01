#include <stdio.h>


/**
 *数组拆分
 *
*/
int main1() {

    int arr[10] = {1, 4, 5, 6, 67, 4, 7, 8, 4, 2};
    int ji[10], ou[10];
    int m = 0, n = 0;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 2 == 1) {
            ji[m] = arr[i];
            m++;
        } else {
            ou[n] = arr[i];
            n++;
        }
    }
    printf("奇数数组\n");
    for (int j = 0; j < m; ++j) {
        printf("%d  ", ji[j]);
    }
    printf("\n偶数数组\n");
    for (int j = 0; j < n; ++j) {
        printf("%d  ", ou[j]);
    }

}







