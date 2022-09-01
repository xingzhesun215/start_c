
#include <stdio.h>


/**
 *查找数组中最大的元素值
 *
*/
int main1() {

    int arr[10] = {1, 4, 5, 6, 67, 4, 7, 8, 4, 2};
    int length = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for (int i = 0; i < length; ++i) {
        max = max < arr[i] ? arr[i] : max;
    }
    printf("max为%d", max);


}







