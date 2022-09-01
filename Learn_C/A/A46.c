
#include <stdio.h>


/**
 *查找数组中最小的元素值
 *
*/
int main1() {

    int arr[10] = {1, 4, 5, 6, 67, 4, 7, 8, 4, 2};
    int length = sizeof(arr) / sizeof(int);
    int min = arr[0];
    for (int i = 0; i < length; ++i) {
        min = min > arr[i] ? arr[i] : min;
    }
    printf("min为%d", min);


}







